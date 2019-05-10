/*
 * This software was developed at the National Institute of Standards and
 * Technology (NIST) by employees of the Federal Government in the course
 * of their official duties. Pursuant to title 17 Section 105 of the
 * United States Code, this software is not subject to copyright protection
 * and is in the public domain. NIST assumes no responsibility whatsoever for
 * its use by other parties, and makes no guarantees, expressed or implied,
 * about its quality, reliability, or any other characteristic.
 */

#include <pftiii_nullimpl.h>

PFTIII::SubmissionIdentification
PFTIII::NullImplementation::getIdentification()
    const
{
	SubmissionIdentification si{};

	/*
	 * Required.
	 */
	si.versionNumber = 0x0001;
	si.libraryIdentifier = "nullimpl";

	/*
	 * Optional.
	 */
	si.featureExtractionAlgorithmMarketingIdentifier = std::make_tuple(
	    "NIST Stub Implementation Extractor 0.1", true);
	si.comparisonAlgorithmMarketingIdentifier = std::make_tuple(
	    "NIST Stub Implementation Comparator 0.1", true);
	si.cbeffProductOwner = std::make_tuple(0x000F, true);
	si.cbeffFeatureExtractionAlgorithmIdentifier = std::make_tuple(0xFFFE,
	    true);
	si.cbeffComparisonAlgorithmIdentifier = std::make_tuple(0xFFFE, true);

	return (si);
}

std::tuple<PFTIII::FingerImageStatus, PFTIII::CreateProprietaryTemplateResult>
PFTIII::NullImplementation::createProprietaryTemplate(
    const FingerImage &fingerImage)
{
	std::vector<uint8_t> proprietaryTemplate(100, 0);

	/* "Success" using local convenience method */
	return (createSuccess(proprietaryTemplate));

	/* "Success" using libpftiii convenience method */
//	const auto cptr = CreateProprietaryTemplateResult::success(
//	    proprietaryTemplate);
//	return (std::make_tuple(FingerImageStatus{}, cptr));

	/* "Failure" using local convenience method */
//	return (createFailure("Cannot find core"));

	/* "Failure" using libpftiii convenience method */
//	const auto cptr = CreateProprietaryTemplateResult::failure(
//	    "Cannot find core");
//	return (std::make_tuple(FingerImageStatus{}, cptr));

	/* "Unsupported" using local convenience method */
//	return (createUnsupported(
//	    FingerImageStatus::Code::UnsupportedResolution,
//	    "333 ppi unsupported"));

	/* "Unsupported" using libpftiii */
//	FingerImageStatus status{FingerImageStatus::Code::UnsupportedResolution,
//	    "333 ppi unsupported"};
//	return (std::make_tuple(status,
//	    CreateProprietaryTemplateResult::failure()));
}

std::tuple<PFTIII::CompareProprietaryTemplatesStatus, double>
PFTIII::NullImplementation::compareProprietaryTemplates(
    const std::vector<uint8_t> &probeTemplate,
    const std::vector<uint8_t> &referenceTemplate)
{
	/* "Success" using local convenience method */
	return (compareSuccess(100));

	/* "Success" using libpftiii */
//	return (std::make_tuple(CompareProprietaryTemplatesStatus{}, 100));

	/* "Failure" using local convenience method */
//	return (compareFailure("This is not a valid template"));

	/* "Failure" using libpftiii convenience method */
//	const auto status = CompareProprietaryTemplatesStatus::failure(
//	    "This is not a valid template");
//	return (std::make_tuple(status, 0));
}

std::shared_ptr<PFTIII::Interface>
PFTIII::Interface::getImplementation()
{
	return (std::make_shared<PFTIII::NullImplementation>());
}

/******************************************************************************/

std::tuple<PFTIII::FingerImageStatus, PFTIII::CreateProprietaryTemplateResult>
PFTIII::NullImplementation::createSuccess(
    const std::vector<uint8_t> &proprietaryTemplate,
    const std::string &message)
{
	FingerImageStatus status{};
	status.code = FingerImageStatus::Code::Supported;
	status.message = "";

	CreateProprietaryTemplateResult result{};
	result.result = Result::Success;
	result.proprietaryTemplate = proprietaryTemplate;
	result.message = message;

	return (std::make_tuple(status, result));
}

std::tuple<PFTIII::FingerImageStatus, PFTIII::CreateProprietaryTemplateResult>
PFTIII::NullImplementation::createUnsupported(
    const FingerImageStatus::Code code,
    const std::string &message)
{
	/*
	 * If the image is supported, you likely meant that you couldn't create
	 * a proprietary template.
	 */
	if (code == FingerImageStatus::Code::Supported)
		return (createFailure(message));

	FingerImageStatus status{};
	status.code = code;
	status.message = message;

	CreateProprietaryTemplateResult result{};
	result.result = Result::Failure;
	result.proprietaryTemplate = std::vector<uint8_t>();
	result.message = "";

	return (std::make_tuple(status, result));
}

std::tuple<PFTIII::FingerImageStatus, PFTIII::CreateProprietaryTemplateResult>
PFTIII::NullImplementation::createFailure(
    const std::string &message)
{
	FingerImageStatus status{};
	status.code = FingerImageStatus::Code::Supported;
	status.message = "";

	CreateProprietaryTemplateResult result{};
	result.result = Result::Failure;
	result.proprietaryTemplate = std::vector<uint8_t>();
	result.message = message;

	return (std::make_tuple(status, result));
}

std::tuple<PFTIII::CompareProprietaryTemplatesStatus, double>
PFTIII::NullImplementation::compareSuccess(
    double similarity,
    const std::string &message)
{
	CompareProprietaryTemplatesStatus status{};
	status.result = Result::Success;
	status.message = message;

	return (std::make_tuple(status, similarity));
}

std::tuple<PFTIII::CompareProprietaryTemplatesStatus, double>
PFTIII::NullImplementation::compareFailure(
    const std::string &message)
{
	CompareProprietaryTemplatesStatus status{};
	status.result = Result::Failure;
	status.message = message;

	return (std::make_tuple(status, 0));
}
