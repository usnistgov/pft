/*
 * This software was developed at the National Institute of Standards and
 * Technology (NIST) by employees of the Federal Government in the course
 * of their official duties. Pursuant to title 17 Section 105 of the
 * United States Code, this software is not subject to copyright protection
 * and is in the public domain. NIST assumes no responsibility whatsoever for
 * its use by other parties, and makes no guarantees, expressed or implied,
 * about its quality, reliability, or any other characteristic.
 */

#ifndef PFTIII_NULLIMPL_H_
#define PFTIII_NULLIMPL_H_

#include <pftiii.h>

namespace PFTIII
{
	class MINEXImplementation : public Interface
	{
	public:
		SubmissionIdentification
		getIdentification()
		    const
		    override;

		std::tuple<FingerImageStatus, CreateProprietaryTemplateResult>
		createProprietaryTemplate(
		    const FingerImage &fingerImage)
		    override;

		std::tuple<CompareProprietaryTemplatesStatus, double>
		compareProprietaryTemplates(
		    const std::vector<uint8_t> &probeTemplate,
		    const std::vector<uint8_t> &referenceTemplate)
		    override;

		MINEXImplementation(
		    const std::string &configurationDirectory = "");
		~MINEXImplementation() = default;

	private:
		const std::string configurationDirectory{};

		/*
		 * These are some local convenience methods that you may copy
		 * into your code to reduce typing when returning results
		 */

		/**
		 * @brief
		 * Successfully return from createProprietaryTemplate().
		 *
		 * @param proprietaryTemplate
		 * The proprietary template created.
		 * @param message
		 * An optional message.
		 *
		 * @return
		 * Object that can be returned from createProprietaryTemplate().
		 */
		static
		std::tuple<FingerImageStatus, CreateProprietaryTemplateResult>
		createSuccess(
		    const std::vector<uint8_t> &proprietaryTemplate,
		    const std::string &message = "");

		/**
		 * @brief
		 * Indicate that something went wrong when processing a
		 * supported image in createProprietaryTemplate().
		 *
		 * @param message
		 * An optional (but strongly encouraged) message.
		 *
		 * @return
		 * Object that can be returned from createProprietaryTemplate().
		 */
		static
		std::tuple<FingerImageStatus, CreateProprietaryTemplateResult>
		createFailure(
		    const std::string &message = "");

		/**
		 * @brief
		 * Successfully return from compareProprietaryTemplates().
		 *
		 * @param similarity
		 * Similarity score produced when comparing proprietary
		 * templates.
		 * @param message
		 * An optional message.
		 *
		 * @return
		 * Object that can be returned from
		 * compareProprietaryTemplates().
		 */
		static
		std::tuple<CompareProprietaryTemplatesStatus, double>
		compareSuccess(
		    const double similarity,
		    const std::string &message = "");

		/**
		 * @brief
		 * Indicate that something went wrong when comparing two
		 * proprietary templates.
		 *
		 * @param message
		 * An optional (but strongly encouraged) message.
		 *
		 * @return
		 * Object that can be returned from
		 * compareProprietaryTemplates().
		 */
		static
		std::tuple<CompareProprietaryTemplatesStatus, double>
		compareFailure(
		    const std::string &message = "");
	};
}

#endif /* PFTIII_NULLIMPL_H_ */
