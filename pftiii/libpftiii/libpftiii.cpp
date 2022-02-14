/*
 * This software was developed at the National Institute of Standards and
 * Technology (NIST) by employees of the Federal Government in the course
 * of their official duties. Pursuant to title 17 Section 105 of the
 * United States Code, this software is not subject to copyright protection
 * and is in the public domain. NIST assumes no responsibility whatsoever for
 * its use by other parties, and makes no guarantees, expressed or implied,
 * about its quality, reliability, or any other characteristic.
 */

#include <pftiii.h>

PFTIII::FingerImage::FingerImage()
{

}

PFTIII::FingerImage::FingerImage(
    const uint16_t width,
    const uint16_t height,
    const uint16_t ppi,
    const std::vector<std::byte> &pixels,
    const Impression imp,
    const FrictionRidgeCaptureTechnology frct,
    const FrictionRidgeGeneralizedPosition frgp) :
    width{width},
    height{height},
    ppi{ppi},
    pixels{pixels},
    imp{imp},
    frct{frct},
    frgp{frgp}
{

}

/******************************************************************************/

PFTIII::CreateProprietaryTemplateResult
PFTIII::CreateProprietaryTemplateResult::failure(
    const std::string &message)
{
	CreateProprietaryTemplateResult cptr{};

	cptr.result = Result::Failure;
	cptr.proprietaryTemplate = {};
	cptr.message = message;

	return (cptr);
}

PFTIII::CreateProprietaryTemplateResult
PFTIII::CreateProprietaryTemplateResult::success(
    const std::vector<std::byte> &proprietaryTemplate,
    const std::string &message)
{
	CreateProprietaryTemplateResult cptr{};

	cptr.result = Result::Success;
	cptr.proprietaryTemplate = proprietaryTemplate;
	cptr.message = message;

	return (cptr);
}

/******************************************************************************/

PFTIII::SubmissionIdentification::SubmissionIdentification()
{

}

PFTIII::SubmissionIdentification::SubmissionIdentification(
    const uint16_t versionNumber,
    const std::string &libraryIdentifier,
    const std::tuple<std::string, bool>
        &featureExtractionAlgorithmMarketingIdentifier,
    const std::tuple<std::string, bool> &comparisonAlgorithmMarketingIdentifier,
    const std::tuple<uint16_t, bool>
        &cbeffFeatureExtractionAlgorithmProductOwner,
    const std::tuple<uint16_t, bool> &cbeffFeatureExtractionAlgorithmIdentifier,
    const std::tuple<uint16_t, bool> &cbeffComparisonAlgorithmProductOwner,
    const std::tuple<uint16_t, bool> &cbeffComparisonAlgorithmIdentifier):
    versionNumber{versionNumber},
    libraryIdentifier{libraryIdentifier},
    featureExtractionAlgorithmMarketingIdentifier{
        featureExtractionAlgorithmMarketingIdentifier},
    comparisonAlgorithmMarketingIdentifier{
        comparisonAlgorithmMarketingIdentifier},
    cbeffFeatureExtractionAlgorithmProductOwner{
        cbeffFeatureExtractionAlgorithmProductOwner},
    cbeffFeatureExtractionAlgorithmIdentifier{
        cbeffFeatureExtractionAlgorithmIdentifier},
    cbeffComparisonAlgorithmProductOwner{cbeffComparisonAlgorithmProductOwner},
    cbeffComparisonAlgorithmIdentifier{cbeffComparisonAlgorithmIdentifier}
{

}

/******************************************************************************/

PFTIII::FingerImageStatus::FingerImageStatus(
    const Code code,
    const std::string &message) :
    code{code},
    message{message}
{

}

/******************************************************************************/

PFTIII::CompareProprietaryTemplatesStatus::CompareProprietaryTemplatesStatus(
    const Result result,
    const std::string &message) :
    result{result},
    message{message}
{

}

PFTIII::CompareProprietaryTemplatesStatus
PFTIII::CompareProprietaryTemplatesStatus::failure(
    const std::string &message)
{
	CompareProprietaryTemplatesStatus cpts{};

	cpts.result = Result::Failure;
	cpts.message = message;

	return (cpts);
}

PFTIII::CompareProprietaryTemplatesStatus
PFTIII::CompareProprietaryTemplatesStatus::success()
{
	CompareProprietaryTemplatesStatus cpts{};

	cpts.result = Result::Success;
	cpts.message = "";

	return (cpts);
}

/******************************************************************************/

PFTIII::Interface::Interface()
{

}

PFTIII::Interface::~Interface()
{

}
