/*
 * This software was developed at the National Institute of Standards and
 * Technology (NIST) by employees of the Federal Government in the course
 * of their official duties. Pursuant to title 17 Section 105 of the
 * United States Code, this software is not subject to copyright protection
 * and is in the public domain. NIST assumes no responsibility whatsoever for
 * its use by other parties, and makes no guarantees, expressed or implied,
 * about its quality, reliability, or any other characteristic.
 */

#ifndef PFTIII_VALIDATION_H_
#define PFTIII_VALIDATION_H_

#include <iostream>
#include <random>
#include <string>
#include <type_traits>
#include <vector>

#include <pftiii.h>
#include <pftiii_validation_data.h>

namespace PFTIII
{
	namespace Validation
	{
		/** Operations that this executable can perform. */
		enum class Operation
		{
			/** Extract features and make a fingerprint template. */
			Create,
			/** Compare two fingerprint templates. */
			Compare,
			/** Print library identification. */
			Identify,
			/** Print usage. */
			Usage
		};

		/** Arguments passed on the command line */
		struct Arguments
		{
			/** Number used to seed the random number generator. */
			std::mt19937_64::result_type randomSeed{
			    std::random_device()()};
			/** Operation to be performed. */
			Operation operation{};
			/** Number of processes to run. */
			uint8_t numProcs{1};
		};

		/**
		 * @brief
		 * Create a template from a single image.
		 *
		 * @param impl
		 * Pointer to PFTIII implementation.
		 * @param imageIndex
		 * Index in Data::Images representing the image that should
		 * be converted into a template.
		 *
		 * @return
		 * Entry for log file.
		 *
		 * @throw
		 * Error reading image or creating template
		 */
		std::string
		create(
		    const std::shared_ptr<Interface> impl,
		    const uint64_t imageIndex);

		/**
		 * @brief
		 * Compare two templates.
		 *
		 * @param impl
		 * Pointer to PFTIII implementation.
		 * @param pairsIndex
		 * Index in pairs list that should be performed.
		 *
		 * @return
		 * Entry for log file.
		 *
		 * @throw
		 * Error reading or comparing templates.
		 */
		std::string
		compare(
		    const std::shared_ptr<Interface> impl,
		    const uint64_t pairsIndex);

		/**
		 * @brief
		 * Format identification information about a PFTIII
		 * implementation.
		 *
		 * @return
		 * Multiple "key = value" lines of information about the linked
		 * PFTIII implementation.
		 */
		std::string
		getIdentificationString();

		/**
		 * @brief
		 * Obtain the validation driver's usage string.
		 *
		 * @param name
		 * Name of the executable.
		 *
		 * @return
		 * Usage string.
		 */
		std::string
		getUsageString(
		    const std::string &name);

		/**
		 * @brief
		 * Parse command line arguments.
		 *
		 * @param argc
		 * argc from main().
		 * @param argv
		 * argv from main()
		 *
		 * @return
		 * Command line arguments parsed into an Argument.
		 *
		 * @throw std::exception
		 * Errors or inconsistencies when parsing arguments.
		 */
		Arguments
		parseArguments(
		    const int argc,
		    char * const argv[]);

		/**
		 * @brief
		 * Generate a random set of container indicies.
		 *
		 * @param size
		 * The number of items to be in the container.
		 * @param seed
		 * Randomization seed.
		 *
		 * @return
		 * Vector of size unique values.
		 */
		std::vector<uint64_t>
		randomizeIndicies(
		    const uint64_t size,
		    const uint64_t seed = std::random_device()());

		/**
		 * @brief
		 * Run a set of template creations.
		 *
		 * @param impl
		 * Pointer to PFTIII API implementation.
		 * @param keys
		 * The keys from Data::Images from which to create templates.
		 */
		void
		runCreate(
		    std::shared_ptr<Interface> impl,
		    const std::vector<uint64_t> &indicies);

		/**
		 * @brief
		 * Run a set of template comparisons.
		 *
		 * @param impl
		 * Pointer to PFTIII API implementation.
		 * @param comparisons
		 * The pairs from Data::Pairs to compare.
		 */
		void
		runCompare(
		    std::shared_ptr<Interface> impl,
		    const std::vector<uint64_t> &indicies);

		/**
		 * @brief
		 * Read a file from disk.
		 *
		 * @param pathName
		 * Path to file to read.
		 *
		 * @return
		 * Contents of pathName as a vector of bytes.
		 *
		 * @throw runtime_error
		 * Error reading from file.
		 */
		std::vector<uint8_t>
		readFile(
		    const std::string &pathName);

		/**
		 * @brief
		 * Sanitize a message for printing in a log file.
		 *
		 * @param message
		 * Message to sanitize.
		 * @param escapeQuotes
		 * Whether or not to escape the " character.
		 * @param wrapInQuotes
		 * Whether or not to wrap result in ".
		 *
		 * @return
		 * Sanitized version of message that can be placed into a
		 * log file.
		 */
		std::string
		sanitizeMessage(
		    const std::string &message,
		    const bool escapeQuotes = true,
		    const bool wrapInQuotes = true);

		/**
		 * @brief
		 * Create multiple smaller sets from a large set.
		 *
		 * @param combinedSet
		 * Set of numbers to split.
		 * @param numSets
		 * Number of sets to create.
		 *
		 * @return
		 * Collection of numSets collections, created sequentially
		 * from combinedSet.
		 *
		 * @throw
		 * numSets > combinedSet.size()
		 */
		std::vector<std::vector<uint64_t>>
		splitSet(
		    const std::vector<uint64_t> &combinedSet,
		    const uint8_t numSets);

		/**
		 * @brief
		 * Test a PFTIII API implementation of template creation or
		 * template matching (depending on `args`) for all validation
		 * data.
		 *
		 * @param args
		 * Arguments parsed from command line.
		 */
		void
		testOperation(
		    const Arguments &args);

		/**
		 * @brief
		 * Wait for forked children to exit.
		 *
		 * @param numChildren
		 * The expected number of children to exit.
		 */
		void
		waitForExit(
		    const uint8_t numChildren);

		/**
		 * @brief
		 * Write data to a file on disk.
		 *
		 * @param data
		 * Data to write.
		 * @param pathName
		 * Path at which to write data.
		 *
		 * @throw runtime_error
		 * Error writing to path.
		 */
		void
		writeFile(
		    const std::vector<uint8_t> &data,
		    const std::string &pathName);
	}
}

#endif /* PFTIII_VALIDATION_H_ */
