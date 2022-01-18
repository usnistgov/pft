/*
 * This software was developed at the National Institute of Standards and
 * Technology (NIST) by employees of the Federal Government in the course
 * of their official duties. Pursuant to title 17 Section 105 of the
 * United States Code, this software is not subject to copyright protection
 * and is in the public domain. NIST assumes no responsibility whatsoever for
 * its use by other parties, and makes no guarantees, expressed or implied,
 * about its quality, reliability, or any other characteristic.
 */

#include <sys/stat.h>
#include <sys/wait.h>

#include <getopt.h>
#include <unistd.h>

#include <algorithm>
#include <cctype>
#include <chrono>
#include <exception>
#include <fstream>
#include <iomanip>
#include <iterator>
#include <limits>
#include <sstream>
#include <system_error>
#include <thread>

#include <pftiii_validation.h>
#include <pftiii_validation_data.h>
#include <pftiii_validation_utils.h>

std::string
PFTIII::Validation::create(
    const std::shared_ptr<Interface> impl,
    const uint64_t imageIndex)
{
	const auto name = std::get<0>(Data::Images.at(imageIndex));
	const auto md = std::get<1>(Data::Images.at(imageIndex));
	const FingerImage image{md.width, md.height, md.ppi,
	    readFile(ImageDir + "/" + name), md.imp, md.frct, md.frgp};

	std::tuple<FingerImageStatus, CreateProprietaryTemplateResult> rv{};
	std::chrono::steady_clock::time_point start{}, stop{};
	try {
		start = std::chrono::steady_clock::now();
		rv = impl->createProprietaryTemplate(image);
		stop = std::chrono::steady_clock::now();
	} catch (const std::exception &e) {
		throw std::runtime_error("Exception while creating template "
		    "from " + name + " (" + e.what() + ")");
	} catch (...) {
		throw std::runtime_error("Unknown exception while creating "
		    "template from " + name);
	}

	std::string logLine{'"' + name + "\"," +
	    std::to_string(std::chrono::duration_cast<
	        std::chrono::microseconds>(stop - start).count()) + ',' +
	    e2i2s(std::get<0>(rv).code) + ',' +
	    sanitizeMessage(std::get<0>(rv).message) + ','};
	if (std::get<0>(rv).code == FingerImageStatus::Code::Supported) {
		logLine += e2i2s(std::get<1>(rv).result) + ',' +
		    sanitizeMessage(std::get<1>(rv).message) + ',';
		if (std::get<1>(rv).result == Result::Success)
			logLine += std::to_string(
			    std::get<1>(rv).proprietaryTemplate.size());
		else
			logLine += "NA";
	} else
		logLine += "NA,\"\",NA";

	/* Write template */
	if ((std::get<0>(rv).code == FingerImageStatus::Code::Supported) &&
	    (std::get<1>(rv).result == Result::Success))
		writeFile(std::get<1>(rv).proprietaryTemplate,
		    TemplateDir + "/" + name + TemplateSuffix);
	else
		writeFile({}, TemplateDir + "/" + name + TemplateSuffix);

	return (logLine);
}

std::string
PFTIII::Validation::compare(
    const std::shared_ptr<Interface> impl,
    const uint64_t pairsIndex)
{
	const auto probe = readFile(TemplateDir + "/" + std::get<0>(
	    Data::Pairs.at(pairsIndex)) + TemplateSuffix);
	const auto reference = readFile(TemplateDir + "/" + std::get<1>(
	    Data::Pairs.at(pairsIndex)) + TemplateSuffix);

	std::tuple<CompareProprietaryTemplatesStatus, double> rv{};
	std::chrono::steady_clock::time_point start{}, stop{};
	try {
		start = std::chrono::steady_clock::now();
		rv = impl->compareProprietaryTemplates(probe, reference);
		stop = std::chrono::steady_clock::now();
	} catch (const std::exception &e) {
		throw std::runtime_error("Exception while comparing " +
		    std::get<0>(Data::Pairs.at(pairsIndex)) + " to " +
		    std::get<1>(Data::Pairs.at(pairsIndex)) + " (" + e.what() +
		    ")");
	} catch (...) {
		throw std::runtime_error("Unknown exception while comparing " +
		    std::get<0>(Data::Pairs.at(pairsIndex)) + " to " +
		    std::get<1>(Data::Pairs.at(pairsIndex)));
	}

	return {'"' + std::get<0>(Data::Pairs.at(pairsIndex)) + "\",\"" +
	    std::get<1>(Data::Pairs.at(pairsIndex)) + "\"," +
	    std::to_string(std::chrono::duration_cast<
	        std::chrono::microseconds>(stop - start).count()) + ',' +
	    e2i2s(std::get<0>(rv).result) + ',' +
	    sanitizeMessage(std::get<0>(rv).message) + ',' +
	    ((std::get<0>(rv).result == Result::Success) ?
	        std::to_string(std::get<1>(rv)) : "NA")};
}

std::string
PFTIII::Validation::getIdentificationString(
    const Arguments &args)
{
	const auto id = PFTIII::Interface::getImplementation(args.configDir)->
	    getIdentification();

	std::stringstream ss{};
	ss << "Identifier = " << id.libraryIdentifier << '\n' <<
	    "Version = 0x" << std::setw(4)  << std::setfill('0') << std::hex <<
	    std::uppercase << id.versionNumber;
	ss << std::dec << std::nouppercase << '\n';

	ss << "Feature Extraction Algorithm Marketing Identifier = ";
	if (std::get<1>(id.featureExtractionAlgorithmMarketingIdentifier))
		ss << std::get<0>(
		    id.featureExtractionAlgorithmMarketingIdentifier);
	ss << '\n';

	ss << "Comparison Marketing Identifier = ";
	if (std::get<1>(id.comparisonAlgorithmMarketingIdentifier))
		ss << std::get<0>(id.comparisonAlgorithmMarketingIdentifier);
	ss << '\n';

	ss << "CBEFF Feature Extraction Algorithm Product Owner =";
	if (std::get<1>(id.cbeffFeatureExtractionAlgorithmProductOwner))
		ss << " 0x" << std::setw(4) << std::setfill('0') << std::hex <<
		    std::uppercase << std::get<0>(
		    id.cbeffFeatureExtractionAlgorithmProductOwner);
	ss << std::dec << std::nouppercase << '\n';

	ss << "CBEFF Feature Extraction Algorithm Identifier =";
	if (std::get<1>(id.cbeffFeatureExtractionAlgorithmIdentifier))
		ss << " 0x" << std::setw(4) << std::setfill('0') << std::hex <<
		    std::uppercase << std::get<0>(
		    id.cbeffFeatureExtractionAlgorithmIdentifier);
	ss << std::dec << std::nouppercase << '\n';

	ss << "CBEFF Comparison Algorithm Product Owner =";
	if (std::get<1>(id.cbeffComparisonAlgorithmProductOwner))
		ss << " 0x" << std::setw(4) << std::setfill('0') << std::hex <<
		    std::uppercase << std::get<0>(
		    id.cbeffComparisonAlgorithmProductOwner);
	ss << std::dec << std::nouppercase << '\n';

	ss << "CBEFF Comparison Algorithm Identifier =";
	if (std::get<1>(id.cbeffComparisonAlgorithmIdentifier))
		ss << " 0x" << std::setw(4) << std::setfill('0') << std::hex <<
		    std::uppercase << std::get<0>(
		    id.cbeffComparisonAlgorithmIdentifier);
	ss << std::dec << std::nouppercase << '\n';

	ss << "API Version = " << API_MAJOR_VERSION << '.' <<
	    API_MINOR_VERSION << '.' << API_PATCH_VERSION;

	return (ss.str());
}

std::string
PFTIII::Validation::getUsageString(
    const std::string &name)
{
	const std::string prefix(name.size() + 8, ' ');

	std::stringstream ss{};
	ss << "Usage: " << name << "\n";
	ss << prefix << "# Identify\n" << prefix << "-i -z <configDir>\n";
	ss << prefix << "# createProprietaryTemplate()\n" << prefix <<
	    "-e -z <configDir> [-r random_seed] [-f num_procs]\n";
	ss << prefix << "# compareProprietaryTemplates()\n" << prefix <<
	    "-c -z <configDir> [-r random_seed] [-f num_procs]";

	return (ss.str());
}

PFTIII::Validation::Arguments
PFTIII::Validation::parseArguments(
    const int argc,
    char * const argv[])
{
	static const char options[] {"ceir:f:z:"};

	bool seenOperation{false};
	Validation::Arguments args{};

	int c{};
	while ((c = getopt(argc, argv, options)) != -1) {
		switch (c) {
		case 'c':	/* Compare templates */
			if (seenOperation)
				throw std::logic_error{"Multiple operations "
				    "specified"};
			seenOperation = true;

			args.operation = Operation::Compare;
			break;
		case 'e':	/* Create templates */
			if (seenOperation)
				throw std::logic_error{"Multiple operations "
				    "specified"};
			seenOperation = true;

			args.operation = Operation::Create;
			break;
		case 'f': {	/* Number of processes */
			try {
				auto numProcs = std::stoul(optarg);
				if (numProcs > UINT8_MAX)
					throw std::exception{};
				args.numProcs = static_cast<uint8_t>(numProcs);
			} catch (const std::exception&) {
				throw std::invalid_argument{"Number of "
				    "processes (-f): an error occurred when "
				    "parsing \"" + std::string(optarg) + "\""};
			}

			const auto threadCount = std::thread::
			    hardware_concurrency();
			if ((threadCount == 0 && args.numProcs > 4) ||
			    (args.numProcs > threadCount))
				throw std::invalid_argument{"Number of "
				    "processes (-f): Asked to spawn " +
				    std::to_string(args.numProcs) + " "
				    "processes, but refusing"};
			break;
		}
		case 'i':	/* Print information */
			if (seenOperation)
				throw std::logic_error{"Multiple operations "
				    "specified"};
			seenOperation = true;

			args.operation = Operation::Identify;
			break;
		case 'r':	/* Random seed */
			try {
				args.randomSeed = std::stoul(optarg);
			} catch (const std::exception&) {
				throw std::invalid_argument{"Random seed (-r): "
				    "an error occurred when parsing \"" +
				    std::string(optarg) + "\""};
			}
			break;
		case 'z':
			args.configDir = optarg;
			break;
		}
	}

	if (!seenOperation)
		args.operation = Operation::Usage;
	if (args.configDir.empty() && (args.operation != Operation::Usage))
		throw std::invalid_argument{"Must provide path to "
		     "configuration directory"};

	return (args);
}

std::vector<uint64_t>
PFTIII::Validation::randomizeIndicies(
    const uint64_t size,
    const uint64_t seed)
{
	std::vector<uint64_t> indicies(size);
	std::iota(indicies.begin(), indicies.end(), 0);
	std::shuffle(indicies.begin(), indicies.end(), std::mt19937_64(seed));
	return (indicies);
}

std::vector<uint8_t>
PFTIII::Validation::readFile(
    const std::string &pathName)
{
	std::ifstream file{pathName,
	    std::ifstream::ate | std::ifstream::binary};
	if (!file)
		throw std::runtime_error{"Could not open " + pathName};
	file.unsetf(std::ifstream::skipws);

	const auto size = file.tellg();
	if (size == -1)
		throw std::runtime_error{"Could not open " + pathName};

	std::vector<uint8_t> buf{};
	buf.reserve(static_cast<decltype(buf)::size_type>(size));

	file.seekg(std::ifstream::beg);
	buf.insert(buf.begin(), std::istream_iterator<uint8_t>(file),
	    std::istream_iterator<uint8_t>());

	return (buf);
}

void
PFTIII::Validation::runCreate(
    std::shared_ptr<Interface> impl,
    const std::vector<uint64_t> &indicies)
{
	if (mkdir(TemplateDir.c_str(), S_IRWXU | S_IRWXG) != 0) {
		if (errno != EEXIST) {
			const std::system_error error{errno,
			    std::system_category()};
			throw std::runtime_error("Could not create directory " +
			    TemplateDir + " (" + error.code().message() + ")");
		}
	}

	std::ofstream file{OutputDir + "/createProprietaryTemplate-" +
	    std::to_string(getpid()) + ".log"};
	if (!file)
		throw std::runtime_error(std::to_string(getpid()) + ": Error "
		    "creating log file");

	static const std::string header{"name,elapsed,fisCode,\"fisMessage\","
	    "cptrResult,\"cptrMessage\",size"};
	file << header << '\n';
	if (!file)
		throw std::runtime_error(std::to_string(getpid()) + ": Error "
		    "writing to log");

	for (const auto &n : indicies) {
		file << create(impl, n) << '\n';
		if (!file)
			throw std::runtime_error(std::to_string(getpid()) + ": "
			    "Error writing to log");
	}
}

void
PFTIII::Validation::runCompare(
    std::shared_ptr<Interface> impl,
    const std::vector<uint64_t> &indicies)
{
	std::ofstream file{OutputDir + "/compareProprietaryTemplates-" +
	    std::to_string(getpid()) + ".log"};
	if (!file)
		throw std::runtime_error(std::to_string(getpid()) + ": Error "
		    "creating log file");

	static const std::string header{"\"probeName\",\"referenceName\","
	    "elapsed,rCode,\"rMessage\",similarity"};
	file << header << '\n';
	if (!file)
		throw std::runtime_error(std::to_string(getpid()) + ": Error "
		    "writing to log");

	for (const auto &n : indicies) {
		file << compare(impl, n) << '\n';
		if (!file)
			throw std::runtime_error(std::to_string(getpid()) + ": "
			    "Error writing to log");
	}
}

std::string
PFTIII::Validation::sanitizeMessage(
    const std::string &message,
    const bool escapeQuotes,
    const bool wrapInQuotes)
{
	if (message.empty())
		return (wrapInQuotes ? "\"\"" : message);

	std::string sanitized{message};

	/* Replace characters not matching the documented regex with space */
	auto it = sanitized.begin();
	while ((it = std::find_if_not(sanitized.begin(), sanitized.end(),
	    [](const char &c) -> bool {
		return (std::isgraph(c) || c == ' ');
	    })) != sanitized.end()) {
		sanitized.replace(it, std::next(it), " ");
	}

	/* Replace " with \" (we log to quoted CSV columns) */
	if (escapeQuotes) {
		static const std::string from{"\""};
		static const std::string to{"\\\""};
		std::string::size_type position{0};
		while ((position = sanitized.find(from, position)) !=
		    std::string::npos) {
			sanitized.replace(position, from.length(), to);
			position += to.length();
		}
	}
	return (wrapInQuotes ? '"' + sanitized + '"' : sanitized);
}

std::vector<std::vector<uint64_t>>
PFTIII::Validation::splitSet(
    const std::vector<uint64_t> &combinedSet,
    const uint8_t numSets)
{
	if (numSets == 0)
		return {};
	if (numSets == 1)
		return {combinedSet};

	using diff_t = decltype(combinedSet.begin())::difference_type;
	if (combinedSet.size() >
	    static_cast<uint64_t>(std::numeric_limits<diff_t>::max()))
		return {combinedSet};

	const std::vector<uint64_t>::size_type size{static_cast<
	    std::vector<uint64_t>::size_type>(
	    std::ceil(static_cast<float>(combinedSet.size()) /
	    static_cast<float>(numSets)))};
	if (size < numSets)
		throw std::invalid_argument("Too many sets.");

	std::vector<std::vector<uint64_t>> sets{};
	sets.reserve(numSets);
	for (uint8_t i{0}; i < numSets; ++i) {

		sets.emplace_back(std::next(combinedSet.begin(),
		    static_cast<diff_t>(size * i)),
		    std::next(combinedSet.begin(),
		    static_cast<diff_t>(std::min(size * (i + 1u),
		    combinedSet.size()))));
	}

	return (sets);
}

void
PFTIII::Validation::testOperation(
    const Validation::Arguments &args)
{
	if ((args.operation != Operation::Create) &&
	    (args.operation != Operation::Compare))
		throw std::runtime_error("Unsupported operation was sent to "
		    "testOperation()");

	if (mkdir(OutputDir.c_str(), S_IRWXU | S_IRWXG) != 0) {
		if (errno != EEXIST) {
			const std::system_error error{errno,
			    std::system_category()};
			throw std::runtime_error("Could not create directory " +
			    OutputDir + " (" + error.code().message() + ")");
		}
	}

	const auto impl = PFTIII::Interface::getImplementation(args.configDir);
	const auto containerSize = (args.operation == Operation::Create ?
	    Data::Images.size() : Data::Pairs.size());
	const auto indicies = randomizeIndicies(containerSize, args.randomSeed);

	if (args.numProcs <= 1) {
		switch (args.operation) {
		case Operation::Create:
			runCreate(impl, indicies);
			break;
		case Operation::Compare:
			runCompare(impl, indicies);
			break;
		default:
			throw std::runtime_error("Unsupported operation was "
			    "sent to testOperation()");
			break;
		}
	} else {
		/* Split into multiple sets of indicies */
		const auto sets = splitSet(indicies, args.numProcs);

		/* Fork */
		for (const auto &set : sets) {
			const auto pid = fork();
			switch (pid) {
			case 0:		/* Child */
				try {
					switch (args.operation) {
					case Operation::Create:
						runCreate(impl, set);
						break;
					case Operation::Compare:
						runCompare(impl, set);
						break;
					default:
						throw std::runtime_error(
						    "Invalid operation sent to"
						    "testOperation()");
					}
				} catch (const std::exception &e) {
					std::cerr << e.what() << '\n';
					std::exit(EXIT_FAILURE);
				} catch (...) {
					std::cerr << "Caught unknown "
					    "exception\n";
					std::exit(EXIT_FAILURE);
				}
				std::exit(EXIT_SUCCESS);

				/* Not reached */
				break;
			case -1:	/* Error */
				throw std::runtime_error("Error during "
				    "fork()");
			default:	/* Parent */
				break;
			}
		}

		waitForExit(args.numProcs);
	}
}

void
PFTIII::Validation::waitForExit(
    const uint8_t numChildren)
{
	pid_t pid{-1};
	bool stop{false};
	uint8_t exitedChildren{0};
	int status{};
	while (exitedChildren != numChildren) {
		stop = false;
		while (!stop) {
			pid = ::wait(&status);
			switch (pid) {
			case 0:		/* Status not available */
				break;
			case -1:	/* Delivery of signal */
				switch (errno) {
				case ECHILD:	/* No child processes remain */
					stop = true;
					break;
				case EINTR:	/* Interruption, try again */
					break;
				default:
					throw std::runtime_error{"Error while "
					    "reaping: " + std::system_error(
					        errno, std::system_category()).
					        code().message()};
				}
				break;
			default:	/* Child exited */
				++exitedChildren;
				break;
			}
		}
	}
}

void
PFTIII::Validation::writeFile(
    const std::vector<uint8_t> &data,
    const std::string &pathName)
{
	std::ofstream file{pathName,
	    std::ifstream::binary | std::ifstream::trunc};
	if (!file)
		throw std::runtime_error{"Could not open " + pathName};

	if ((data.size() > static_cast<uint64_t>(
	    std::numeric_limits<std::streamsize>::max())) ||
	    !file.write((char *)data.data(),
	    static_cast<std::streamsize>(data.size())))
		throw std::runtime_error("Could not write " + std::to_string(
		    data.size()) + " bytes to " + pathName);
}

int
main(
    int argc,
    char *argv[])
{
	int rv{EXIT_FAILURE};

	if (!((PFTIII::API_MAJOR_VERSION == 1) &&
	    (PFTIII::API_MINOR_VERSION == 0) &&
	    (PFTIII::API_PATCH_VERSION == 0))) {
		std::cerr << "Incompatible API version encountered.\n "
		    "- Validation: 1.0.0\n - Participant: " <<
		    PFTIII::API_MAJOR_VERSION << '.' <<
		    PFTIII::API_MINOR_VERSION << '.' <<
		    PFTIII::API_PATCH_VERSION << '\n';
		std::cerr << "Rebuild your core library with the latest "
		    "pftiii.h\n";
		return (rv);
	}

	PFTIII::Validation::Arguments args{};
	try {
		args = PFTIII::Validation::parseArguments(argc, argv);
	} catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
		std::cerr << PFTIII::Validation::getUsageString(argv[0]) <<
		    '\n';
		return (rv);
	}

	switch (args.operation) {
	case PFTIII::Validation::Operation::Identify:
		try {
			std::cout << PFTIII::Validation::
			    getIdentificationString(args) << '\n';
			rv = EXIT_SUCCESS;
		} catch (const std::exception &e) {
			std::cerr << "Interface::getIdentification(): " <<
			    e.what() << '\n';
		} catch (...) {
			std::cerr << "Interface::getIdentification(): "
			    "Non-standard exception\n";
		}
		break;
	case PFTIII::Validation::Operation::Create:
		try {
			PFTIII::Validation::testOperation(args);
			rv = EXIT_SUCCESS;
		} catch (const std::exception &e) {
			std::cerr << "Interface::createProprietary"
			    "Template(): " << e.what() << '\n';
		} catch (...) {
			std::cerr << "Interface::createProprietaryTemplate(): "
			    "Non-standard exception\n";
		}
		break;
	case PFTIII::Validation::Operation::Compare:
		try {
			PFTIII::Validation::testOperation(args);
			rv = EXIT_SUCCESS;
		} catch (const std::exception &e) {
			std::cerr << "Interface::compareProprietary"
			    "Templates(): " << e.what() << '\n';
		} catch (...) {
			std::cerr << "Interface::compareProprietary"
			    "Templates(): Non-standard exception\n";
		}
		break;
	case PFTIII::Validation::Operation::Usage:
		std::cout << PFTIII::Validation::getUsageString(argv[0]) <<
		    '\n';
		rv = EXIT_SUCCESS;
		break;
	}

	return (rv);
}
