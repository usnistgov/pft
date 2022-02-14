/*
 * This software was developed at the National Institute of Standards and
 * Technology (NIST) by employees of the Federal Government in the course
 * of their official duties. Pursuant to title 17 Section 105 of the
 * United States Code, this software is not subject to copyright protection
 * and is in the public domain. NIST assumes no responsibility whatsoever for
 * its use by other parties, and makes no guarantees, expressed or implied,
 * about its quality, reliability, or any other characteristic.
 */

#include <cstring>
#include <type_traits>

#include <arpa/inet.h>

#include "minexiii.h"

#include <pftiii_mineximpl.h>

PFTIII::MINEXImplementation::MINEXImplementation(
    const std::filesystem::path &configurationDirectory) :
    PFTIII::Interface(),
    configurationDirectory{configurationDirectory}
{

}

PFTIII::SubmissionIdentification
PFTIII::MINEXImplementation::getIdentification()
    const
{
	SubmissionIdentification si{};
	/* TODO: Replace with your version number. */
	si.versionNumber = 0xFFFF;
	/* TODO: Replace with your identifier. */
	si.libraryIdentifier = "mineximpl";

	return (si);
}

std::tuple<PFTIII::FingerImageStatus, PFTIII::CreateProprietaryTemplateResult>
PFTIII::MINEXImplementation::createProprietaryTemplate(
    const FingerImage &fingerImage)
{
	/*
	 * NOTE: MINEX algorithms may have made certain assumptions about the
	 *       data that are not true in PFT III. Of note are:
	 *       * Impression Type:
	 *         - Only the equivalent of OpticalTIRBright and
	 *           ScannedInkOnPaper had to be supported.
	 *       * Finger Position:
	 *         - Only index fingers were tested.
	 *       * Dimensions:
	 *         - There were advertised minimum and maximum dimensions.
	 *	 * Image Quality:
	 *	   - Image quality is not provided by the PFT III API.
	 *       * Image Resolution:
	 *         - All images were 500 PPI. PFT III images can be of any
	 *           resolution.
	 *
	 * If the MINEX algorithm made these assumptions, it must be revised.
	 */

	uint8_t incitsTemplate[MINEX_MAX_TEMPLATE_SIZE] = {};
	static_assert(std::is_same_v<uint8_t,
	    std::underlying_type_t<std::byte>>);
	const auto rv = create_template(
	    reinterpret_cast<const uint8_t*>(fingerImage.pixels.data()),
	    /*
	     * NOTE: The PFT III API does not provide quality values, since it
	     *       is capable of testing more types of images than NIST
	     *       Fingerprint Image Quality (NFIQ) 2.0 knows how to handle.
	     */
	    0,
	    static_cast<uint8_t>(fingerImage.frgp),
	    static_cast<uint8_t>(fingerImage.imp),
	    fingerImage.height,
	    fingerImage.width,
	    incitsTemplate);

	if (rv != MINEX_RET_SUCCESS)
		return (createFailure("Returned " + std::to_string(rv)));

	return (createSuccess(incitsTemplate));
}

std::tuple<PFTIII::CompareProprietaryTemplatesStatus, double>
PFTIII::MINEXImplementation::compareProprietaryTemplates(
    const std::vector<std::byte> &probeTemplate,
    const std::vector<std::byte> &referenceTemplate)
{

	/*
	 * NOTE: The test driver writes a 0 byte template on creation failures,
	 *       so the implementation cannot rely on a valid ANSI/INCITS
	 *       378:2004 structure.
	 */
	if ((probeTemplate.size() == 0) || (referenceTemplate.size() == 0))
		return (PFTIII::MINEXImplementation::compareFailure(
		    "Empty template"));

	float similarity{};
	static_assert(std::is_same_v<uint8_t,
	    std::underlying_type_t<std::byte>>);
	const auto rv = match_templates(
	    reinterpret_cast<const uint8_t*>(probeTemplate.data()),
	    reinterpret_cast<const uint8_t*>(referenceTemplate.data()),
	    &similarity);

	if (rv != MINEX_RET_SUCCESS)
		return (compareFailure("Returned " + std::to_string(rv)));

	return (compareSuccess(similarity));
}

std::shared_ptr<PFTIII::Interface>
PFTIII::Interface::getImplementation(
    const std::filesystem::path &configurationDirectory)
{
	return (std::make_shared<PFTIII::MINEXImplementation>(
	    configurationDirectory));
}

/******************************************************************************/

std::tuple<PFTIII::FingerImageStatus, PFTIII::CreateProprietaryTemplateResult>
PFTIII::MINEXImplementation::createSuccess(
    const uint8_t *proprietaryTemplate,
    const std::string &message)
{
	FingerImageStatus status{};
	status.code = FingerImageStatus::Code::Supported;
	status.message = "";

	/* Read size of template */
	uint16_t size{};
	std::memcpy(&size, proprietaryTemplate + 8, 2);
	size = ntohs(size);

	CreateProprietaryTemplateResult result{};
	result.result = Result::Success;
	result.proprietaryTemplate = std::vector<std::byte>(
	    reinterpret_cast<const std::byte *>(proprietaryTemplate),
	    reinterpret_cast<const std::byte *>(proprietaryTemplate) + size);
	result.message = message;

	return (std::make_tuple(status, result));
}

std::tuple<PFTIII::FingerImageStatus, PFTIII::CreateProprietaryTemplateResult>
PFTIII::MINEXImplementation::createFailure(
    const std::string &message)
{
	FingerImageStatus status{};
	status.code = FingerImageStatus::Code::Supported;
	status.message = "";

	CreateProprietaryTemplateResult result{};
	result.result = Result::Failure;
	result.proprietaryTemplate = std::vector<std::byte>();
	result.message = message;

	return (std::make_tuple(status, result));
}

std::tuple<PFTIII::CompareProprietaryTemplatesStatus, double>
PFTIII::MINEXImplementation::compareSuccess(
    double similarity,
    const std::string &message)
{
	CompareProprietaryTemplatesStatus status{};
	status.result = Result::Success;
	status.message = message;

	return (std::make_tuple(status, similarity));
}

std::tuple<PFTIII::CompareProprietaryTemplatesStatus, double>
PFTIII::MINEXImplementation::compareFailure(
    const std::string &message)
{
	CompareProprietaryTemplatesStatus status{};
	status.result = Result::Failure;
	status.message = message;

	return (std::make_tuple(status, 0));
}
