/**
 * @mainpage
 * @section Overview
 * This is the API that must be implemented to participate in the National
 * Institute of Standards and Technology (NIST)'s [Proprietary Fingerprint
 * Template III Evaluation](https://www.nist.gov/itl/iad/image-group/pftiii)
 * (PFT III).
 *
 * @section Implementation
 * A pure-virtual (abstract) class called PFTIII::Interface has been defined.
 * Participants must implement all methods of PFTIII::Interface in a subclass,
 * and submit this implementation as a shared library. The name of the library
 * must follow the instructions outlined in the test plan, and be identical to
 * the required information returned from
 * PFTIII::Interface::getIdentification(). A test application will link against
 * the submitted library, instantiate an instance of the implementation
 * by calling PFTIII::Interface::getImplementation(), and perform various
 * template creation and comparison operations.
 *
 * @section Contact
 * Additional information regarding the Proprietary Fingerprint Template
 * Evaluation by emailing the test liaisons at pft@nist.gov.
 *
 * @section License
 * This software was developed at NIST by employees of the Federal Government
 * in the course of their official duties. Pursuant to title 17 Section 105 of
 * the United States Code, this software is not subject to copyright protection
 * and is in the public domain. NIST assumes no responsibility whatsoever for
 * its use by other parties, and makes no guarantees, expressed or implied,
 * about its quality, reliability, or any other characteristic.
 */

#ifndef PFTIII_H_
#define PFTIII_H_

#include <filesystem>
#include <memory>
#include <string>
#include <tuple>
#include <vector>

/** Proprietary Fingerprint Template Evaluation III namespace. */
namespace PFTIII
{
	/** Friction ridge impression types from ANSI/NIST-ITL 1-2011 (2015). */
	enum class Impression
	{
		PlainContact = 0,
		RolledContact = 1,
		LiveScanSwipe = 8,
		PlainContactlessStationary = 24,
		RolledContactlessStationary = 25,
		Unknown = 29,
		RolledContactlessMoving = 41,
		PlainContactlessMoving = 42
	};

	/** Capture device codes from ANSI/NIST-ITL 1-2011 (2015). */
	enum class FrictionRidgeCaptureTechnology
	{
		Unknown = 0,
		ScannedInkOnPaper = 2,
		OpticalTIRBright = 3,
		OpticalDirect = 5,
		Capacitive = 9,
		Electroluminescent = 11,
	};

	/** Friction positions codes from ANSI/NIST-ITL 1-2011 (2015). */
	enum class FrictionRidgeGeneralizedPosition
	{
		Unknown = 0,
		RightThumb = 1,
		RightIndex = 2,
		RightMiddle = 3,
		RightRing = 4,
		RightLittle = 5,
		LeftThumb = 6,
		LeftIndex = 7,
		LeftMiddle = 8,
		LeftRing = 9,
		LeftLittle = 10,
		RightExtraDigit = 16,
		LeftExtraDigit = 17
	};

	/** Data and metadata for an image containing a single fingerprint. */
	struct FingerImage
	{
		/** Default constructor. */
		FingerImage();

		/**
		 * @brief
		 * FingerImage constructor.
		 *
		 * @param width
		 * Width of the image.
		 * @param height
		 * Height of the image.
		 * @param ppi
		 * Resolution of the image in pixels per inch.
		 * @param pixels
		 * `width` * `height` bytes of image data, with `pixels.front()`
		 * representing the top-left pixel, and `pixels.back()`
		 * representing the bottom-right pixel. It is raw, single-
		 * channel image data, canonically coded as defined in ISO/IEC
		 * 19794-4:2005, section 6.2.
		 * @param imp
		 * Impression type of the finger.
		 * @param frct
		 * Capture technology that created this image.
		 * @param frgp
		 * Friction ridge generalized position of the finger.
		 */
		FingerImage(
		    const uint16_t width,
		    const uint16_t height,
		    const uint16_t ppi,
		    const std::vector<uint8_t> &pixels,
		    const Impression imp = Impression::Unknown,
		    const FrictionRidgeCaptureTechnology frct =
		        FrictionRidgeCaptureTechnology::Unknown,
		    const FrictionRidgeGeneralizedPosition frgp =
		        FrictionRidgeGeneralizedPosition::Unknown);

		/** Width of the image. */
		uint16_t width{};
		/** Height of the image. */
		uint16_t height{};
		/** Resolution of the image in pixels per inch. */
		uint16_t ppi{};
		/**
		 * @brief
		 * Raw pixel data of image.
		 *
		 * @details
		 * `width` * `height` bytes of image data, with `pixels.front()`
		 * representing the top-left pixel, and `pixels.back()`
		 * representing the bottom-right pixel. It is raw, single-
		 * channel image data, canonically coded as defined in ISO/IEC
		 * 19794-4:2005, section 6.2.
		 *
		 * @note
		 * To pass pixels to a C-style array, invoke pixel's `data()`
		 * method (`pixels.data()`).
		 */
		std::vector<uint8_t> pixels{};
		/** Impression type of the depicted finger. */
		Impression imp{Impression::Unknown};
		/** Capture technology that created this image. */
		FrictionRidgeCaptureTechnology frct{
		    FrictionRidgeCaptureTechnology::Unknown};
		/** Position of the depicted finger. */
		FrictionRidgeGeneralizedPosition frgp{
		    FrictionRidgeGeneralizedPosition::Unknown};
	};

	/** Information about whether a FingerImage is supported. */
	struct FingerImageStatus
	{
		/**
		 * Possible scenarios affecting input image data that could
		 * cause createProprietaryTemplates() to fail before feature
		 * extraction can begin.
		 */
		enum class Code
		{
			/** Image is supported. */
			Supported = 0,
			/** Failure: Image data was not parsable. */
			InvalidImageData,
			/** Failure: Other reason. See error message. */
			VendorDefined
		};

		/**
		 * @brief
		 * FingerImageStatus constructor.
		 *
		 * @param code
		 * Indication of if FingerImage is supported.
		 * @param message
		 * Message providing insight into `code`'s value.
		 */
		FingerImageStatus(
		    const Code code = Code::Supported,
		    const std::string &message = "");

		/** Indication of if a FingerImage is supported. */
		Code code{};
		/** Explanatory message. */
		std::string message{};
	};

	/** Possible outcomes when performing operations. */
	enum class Result
	{
		/** Successfully performed operation. */
		Success = 0,
		/** Failed to perform operation. */
		Failure
	};

	/** Output from extracting features into a proprietary template .*/
	struct CreateProprietaryTemplateResult
	{
		/**
		 * @brief
		 * Convenience method for creation success.
		 *
		 * @param proprietaryTemplate
		 * Contents of the proprietary template.
		 * @param message
		 * Optional explanatory message.
		 *
		 * @return
		 * A CreateProprietaryTemplateResult that indicates success.
		 */
		static CreateProprietaryTemplateResult
		success(
		     const std::vector<uint8_t> &proprietaryTemplate,
		     const std::string &message = "");

		/**
		 * @brief
		 * Convenience method for creation failures.
		 *
		 * @param message
		 * Optional explanatory message regarding the failure.
		 *
		 * @return
		 * A CreateProprietaryTemplateResult that indicates failure.
		 */
		static CreateProprietaryTemplateResult
		failure(
		     const std::string &message = "");

		/** Result of extracting features and creating a template. */
		Result result{Result::Success};
		/** Contents of the proprietary template. */
		std::vector<uint8_t> proprietaryTemplate{};
		/** Explanatory message (optional). */
		std::string message{};
	};

	/** Information about the execution of template comparison. */
	struct CompareProprietaryTemplatesStatus
	{
		/**
		 * @brief
		 * CompareProprietaryTemplatesStatus constructor.
		 *
		 * @param result
		 * Outcome of comparing two proprietary templates.
		 * @param message
		 * Message providing insight into result's value.
		 */
		CompareProprietaryTemplatesStatus(
		    const Result result = Result::Success,
		    const std::string &message = "");

		/**
		 * @brief
		 * Convenience method for comparison success.
		 *
		 * @return
		 * A CompareProprietaryTemplatesStatus that indicates
		 * success.
		 */
		static CompareProprietaryTemplatesStatus
		success();

		/**
		 * @brief
		 * Convenience method for comparison failures.
		 *
		 * @param message
		 * Optional explanatory message regarding the failure.
		 *
		 * @return
		 * A CompareProprietaryTemplatesStatus that indicates failure.
		 */
		static CompareProprietaryTemplatesStatus
		failure(
		     const std::string &message = "");

		/** Outcome of comparing two proprietary templates. */
		Result result{};
		/** Explanatory message (optional). */
		std::string message{};
	};

	/**
	 * Identifying information about this submission that will be included
	 * in reports.
	 */
	struct SubmissionIdentification
	{
		/** Default constructor. */
		SubmissionIdentification();

		/**
		 * @brief
		 * SubmissionIdentification constructor.
		 *
		 * @param versionNumber
		 * Version number of this submission. Required to be unique
		 * for each new submission.
		 * @param libraryIdentifier
		 * Non-infringing identifier of this submission. Should be the
		 * same for all submissions. Case sensitive. Must match the
		 * regular expression "[:alnum:]+".
		 * @param featureExtractionAlgorithmMarketingIdentifier
		 * Non-infringing marketing name of the feature extraction
		 * algorithm included in this submission. Optional. Case
		 * sensitive. Must match the regular expression "[[:graph:] ]*".
		 * First tuple member is the value and second is boolean
		 * indicating the initialization status of the value.
		 * @param comparisonAlgorithmMarketingIdentifier
		 * Non-infringing marketing name of the comparison algorithm
		 * included in this submission. Optional. Case sensitive. Must
		 * match the regular expression "[[:graph:] ]*". First tuple
		 * member is value and second is boolean indicating the
		 * initialization status of the value.
		 * @param cbeffFeatureExtractionAlgorithmProductOwner
		 * CBEFF Product Owner of the feature extraction algorithm, if
		 * registered. First tuple member is value and second is boolean
		 * indicating the initialization status of the value. Optional,
		 * unless`cbeffFeatureExtractionAlgorithmIdentifier`is supplied.
		 * @param cbeffFeatureExtractionAlgorithmIdentifier
		 * CBEFF Feature Extraction Algorithm Identifier, if registered.
		 * First tuple member is value and second is boolean indicating
		 * the initialization status of the value.
		 * @param cbeffComparisoinAlgorithmProductOwner
		 * CBEFF Product Owner of the feature extraction algorithm, if
		 * registered. First tuple member is value and second is boolean
		 * indicating the initialization status of the value. Optional,
		 * unless `cbeffComparisonAlgorithmIdentifier`is supplied.
		 * @param cbeffComparisonAlgorithmIdentifier
		 * CBEFF Comparison Algorithm Identifier, if registered. First
		 * tuple member is value and second is boolean indicating the
		 * initialization status of the value.
		 *
		 * @note
		 * The name of the core library submitted for evaluation shall
		 * be "libpftiii_<libraryIdentifier>_<versionNumber (capital
		 * hex)>.so". Refer to the test plan for more information.
		 */
		SubmissionIdentification(
		    const uint16_t versionNumber,
		    const std::string &libraryIdentifier,
		    const std::tuple<std::string, bool>
		        &featureExtractionAlgorithmMarketingIdentifier =
		        std::make_tuple("", false),
		    const std::tuple<std::string, bool>
		        &comparisonAlgorithmMarketingIdentifier =
		        std::make_tuple("", false),
		    const std::tuple<uint16_t, bool>
		        &cbeffFeatureExtractionAlgorithmProductOwner =
		        std::make_tuple(0x0000, false),
		    const std::tuple<uint16_t, bool>
		        &cbeffFeatureExtractionAlgorithmIdentifier =
		        std::make_tuple(0x0000, false),
		    const std::tuple<uint16_t, bool>
		        &cbeffComparisoinAlgorithmProductOwner =
		        std::make_tuple(0x0000, false),
		    const std::tuple<uint16_t, bool>
		        &cbeffComparisonAlgorithmIdentifier =
		        std::make_tuple(0x0000, false));

		/**
		 * Version number of this submission. Required to be unique for
		 * each new submission. Required.
		 */
		uint16_t versionNumber{};
		/**
		 * Non-infringing identifier of this submission. Should be the
		 * same for all submissions from an organization. Required. Case
		 * sensitive. Must match the regular expression "[:alnum:]+".
		 */
		std::string libraryIdentifier{};
		/**
		 * Non-infringing marketing name of the feature extraction
		 * algorithm included in this submission. Optional. Case
		 * sensitive. Must match the regular expression "[[:graph:] ]*".
		 * First tuple member is value and second is boolean indicating
		 * the initialization status of the value.
		 */
		std::tuple<std::string, bool>
		    featureExtractionAlgorithmMarketingIdentifier{"", false};
		/**
		 * Non-infringing marketing name of the comparison algorithm
		 * included in this submission. Optional. Case sensitive. Must
		 * match the regular expression "[[:graph:] ]*". First tuple
		 * member is value and second is boolean indicating the
		 * initialization status of the value.
		 */
		std::tuple<std::string, bool>
		    comparisonAlgorithmMarketingIdentifier{"", false};

		/*
		 * CBEFF information, if registered.
		 */

		/**
		 * CBEFF Product Owner of the feature extraction algorithm, if
		 * registered.  Optional, unless
		 * `cbeffFeatureExtractionAlgorithmIdentifier` is supplied.
		 * First tuple member is value and second is boolean indicating
		 * the initialization status of the value.
		 *
		 * @see https://www.ibia.org/cbeff/biometric-identifier-overview
		 */
		std::tuple<uint16_t, bool>
		    cbeffFeatureExtractionAlgorithmProductOwner{0x0000, false};
		/**
		 * CBEFF Feature Extraction Algorithm Identifier, if registered.
		 * Optional. First tuple member is value and second is boolean
		 * indicating the initialization status of the value.
		 *
		 * @see https://www.ibia.org/cbeff/iso/biometric-feature-
		 *      extraction-algorithm-identifiers
		 */
		std::tuple<uint16_t, bool>
		    cbeffFeatureExtractionAlgorithmIdentifier{0x0000, false};

		/**
		 * CBEFF Product Owner of the template comparison algorithm, if
		 * registered.  Optional, unless
		 * `cbeffComparisonAlgorithmIdentifier` is supplied. First
		 * supplied. First tuple member is value and second is boolean
		 * indicating the initialization status of the value.
		 *
		 * @see https://www.ibia.org/cbeff/biometric-identifier-overview
		 */
		std::tuple<uint16_t, bool>
		    cbeffComparisonAlgorithmProductOwner{0x0000, false};
		/**
		 * CBEFF Comparison Algorithm Identifier, if registered.
		 * Optional.  First tuple member is value and second is boolean
		 * indicating the initialization status of the value.
		 *
		 * @see https://www.ibia.org/cbeff/iso/biometric-comparison-
		 *      algorithm-identifiers
		 */
		std::tuple<uint16_t, bool> cbeffComparisonAlgorithmIdentifier{
		    0x0000, false};
	};

	/** PFT III Interface. */
	class Interface
	{
	public:
		/**
		 * @brief
		 * Obtain identification and version information for this
		 * submission.
		 *
		 * @return
		 * SubmissionIdentification populated with information used
		 * to identify this submission in reports.
		 *
		 * @note
		 * This method shall return instantly.
		 */
		virtual
		SubmissionIdentification
		getIdentification()
		    const = 0;

		/**
		 * @brief
		 * Create a proprietary biometric template from a fingerprint
		 * image.
		 *
		 * @param fingerImage
		 * Data and metadata for a fingerprint image from which
		 * biometric features can be extracted.
		 *
		 * @return
		 * A tuple whose first member is a FingerImageStatus (with
		 * `FingerImageStatus.code` set to
		 * FingerImageStatus::Code::Supported when input FingerImage
		 * data is supported, or another FingerImageStatus::Code if
		 * not) and whose second member is a
		 * `CreateProprietaryTemplateResult` object containing the
		 * status of extracting and encoding fingerprint features and a
		 * biometric template suitable to be passed as either the probe
		 * or reference to `compareProprietaryTemplates()`.
		 *
		 * @note
		 * If `FingerImageStatus.code` in the first member of the
		 * returned tuple is not `FingerImageStatus::Code::Supported`,
		 * the value of `proprietaryTemplate` from the second member of
		 * the returned tuple will not be consulted. Instead, an empty
		 * (0 byte) entry will be recorded as the biometric template
		 * for the input. The value will always be consulted when
		 * `FingerImageStatus.code` is
		 * `FingerImageStatus::Code::Supported`, including in conditions
		 * where `CreateProprietaryTemplateResult.result` is
		 * `Result::Failure`.
		 *
		 * @note
		 * This method does not differentiate between probe and
		 * reference templates.
		 *
		 * @note
		 * This method shall, on average, return in <= 0.5 seconds on a
		 * dedicated timing sample.
		 *
		 * @note All metadata, including Unknown, shall be supported. It
		 * is not acceptable to not set
		 * `FingerImageStatus::Code::Success`
		 * if value is `Unknown` or for an entire classification of data
		 * (e.g., 1000 PPI, `RolledContactlessMoving`, etc.)
		 *
		 * @note
		 * This method shall be deterministic (e.g., providing the same
		 * FingerImage repeatedly shall result in byte-identical return
		 * values).
		 */
		virtual
		std::tuple<FingerImageStatus, CreateProprietaryTemplateResult>
		createProprietaryTemplate(
		    const FingerImage &fingerImage) = 0;

		/**
		 * @brief
		 * Perform a one-to-one comparison of proprietary templates.
		 *
		 * @param probeTemplate
		 * A proprietary biometric probe template returned from
		 * `createProprietaryTemplate()`.
		 * @param referenceTemplate
		 * A proprietary biometric reference template returned from
		 * `createProprietaryTemplate()`.
		 *
		 * @return
		 * A tuple whose first member is a
		 * CompareProprietaryTemplatesStatus (with
		 * CompareProprietaryTemplatesStatus.result set to
		 * Result::Success when successful, or Result::Failure on
		 * failure) and whose second member is the comparison score
		 * produced by comparing `probeTemplate` to `referenceTemplate`.
		 *
		 * @note
		 * This method must tolerate empty (0 byte) templates for both
		 * probe and reference templates, in the case that
		 * `createProprietaryTemplate()` did not return with
		 * `Result::Success`.
		 *
		 * @note
		 * This method must tolerate comparisons with both probe and
		 * reference templates where
		 * `CreateProprietaryTemplateResult.result` was
		 * `Result::Failure` and `FingerImageStatus.code` was not
		 * `FingerImageStatus::Code::Supported` (e.g., 0 bytes) when
		 * returned from `createProprietaryTemplate()`.
		 *
		 * @note
		 * This method shall be deterministic (e.g., providing the same
		 * two templates shall result in the same similarity score).
		 *
		 * @note
		 * This method shall, on average, return in <= 0.01 seconds,
		 * on a dedicated timing sample.
		 */
		virtual
		std::tuple<CompareProprietaryTemplatesStatus, double>
		compareProprietaryTemplates(
		    const std::vector<uint8_t> &probeTemplate,
		    const std::vector<uint8_t> &referenceTemplate) = 0;

		/** Destructor. */
		virtual ~Interface();

		/**
		 * @brief
		 * Obtain a managed pointer to an object implementing
		 * PFTIII::Interface.
		 *
		 * @param configurationDirectory
		 * Path to a read-only directory populated with configuration
		 * files provided in validation.
		 *
		 * @return
		 * Shared pointer to an instance of Interface containing the
		 * participant's biometric template generation and biometric
		 * template comparison algorithm.
		 *
		 * @note
		 * A possible implementation might be:
		 * `return (std::make_shared<Implementation>(
		 * configurationDirectory));`
		 *
		 * @note
		 * This method shall return in <= 10 seconds.
		 * @note
		 * `configurationDirectory` may be stored on a slow disk. NIST
		 * suggests reading data into available RAM.
		 */
		static
		std::shared_ptr<Interface>
		getImplementation(
		    const std::filesystem::path &configurationDirectory);

		/** @cond SUPPRESS_FROM_DOXYGEN */
		/** Suppress copying polymorphic class (C.63). */
		Interface(const Interface&) = delete;
		/** Suppress copying polymorphic class (C.63). */
		Interface& operator=(const Interface&) = delete;
		/** @endcond */
		/** Default constructor. */
		Interface();
	};

	/*
	 * API versioning.
	 *
	 * NIST code will extern the version number symbols. Participant code
	 * shall compile them into their core library.
	 */
	#ifdef NIST_EXTERN_API_VERSION
	/** API major version number. */
	extern uint16_t API_MAJOR_VERSION;
	/** API minor version number. */
	extern uint16_t API_MINOR_VERSION;
	/** API patch version number. */
	extern uint16_t API_PATCH_VERSION;
	#else /* NIST_EXTERN_API_VERSION */
	/** API major version number. */
	uint16_t API_MAJOR_VERSION{1};
	/** API minor version number. */
	uint16_t API_MINOR_VERSION{1};
	/** API patch version number. */
	uint16_t API_PATCH_VERSION{0};
	#endif /* NIST_EXTERN_API_VERSION */
}

#endif /* PFTIII_H_ */
