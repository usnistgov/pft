/*
 * This software was developed at the National Institute of Standards and
 * Technology (NIST) by employees of the Federal Government in the course
 * of their official duties. Pursuant to title 17 Section 105 of the
 * United States Code, this software is not subject to copyright protection
 * and is in the public domain. NIST assumes no responsibility whatsoever for
 * its use by other parties, and makes no guarantees, expressed or implied,
 * about its quality, reliability, or any other characteristic.
 */

#ifndef PFTIII_VALIDATION_DATA_H_
#define PFTIII_VALIDATION_DATA_H_

#include <map>
#include <string>

#include <pftiii.h>

namespace PFTIII
{
	namespace Validation
	{
		/** Location where output is written. */
		const std::string OutputDir{"output"};
		/** Directory containing validation imagery. */
		const std::string ImageDir{"images"};
		/** Directory containing generated templates. */
		const std::string TemplateDir{OutputDir + "/templates"};
		/** Suffix added to template files. */
		const std::string TemplateSuffix{".tmpl"};

		/** Information about an image. */
		struct ImageMetadata
		{
			/**
			 * @brief
			 * ImageMetadata constructor.
			 *
			 * @param width
			 * Width of image.
			 * @param height
			 * Height of image.
			 * @param ppi
			 * Resolution of image in pixels per inch.
			 * @param imp
			 * Impression type of the finger.
			 * @param frct
			 * Technology used to capture the image.
			 * @param frgp
			 * Friction ridge generalized position of the finger.
			 */
			ImageMetadata(
			    const uint16_t width,
			    const uint16_t height,
			    const uint16_t ppi,
			    const Impression imp,
			    const FrictionRidgeCaptureTechnology frct,
			    const FrictionRidgeGeneralizedPosition frgp) :
			    width{width},
			    height{height},
			    ppi{ppi},
			    imp{imp},
			    frct{frct},
			    frgp{frgp} {}

			/** Width of image. */
			const uint16_t width{};
			/** Height of image. */
			const uint16_t height{};
			/** Resolution of image in pixels per inch. */
			const uint16_t ppi{};
			/** Impression type of the finger. */
			const Impression imp{};
			/** Technology used to capture the image. */
			const FrictionRidgeCaptureTechnology frct{};
			/** Position of the finger. */
			const FrictionRidgeGeneralizedPosition frgp{};
		};

		namespace Data
		{
			/* Validation imagery. */
			const std::vector<std::pair<std::string,
			    ImageMetadata>> Images {
				{"00002445_N_285x452_500_00_03_08.gray",
				    {285, 452, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002484_S_257x339_500_00_03_02.gray",
				    {257, 339, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002448_M_256x360_500_00_09_02.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002546_S_256x385_500_00_03_09.gray",
				    {256, 385, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002504_N_286x481_500_00_03_08.gray",
				    {286, 481, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002558_S_313x499_500_00_03_02.gray",
				    {313, 499, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002433_A_512x512_500_41_05_03.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002521_S_310x552_500_00_03_08.gray",
				    {310, 552, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002448_U_1600x1500_1000_01_03_05.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002457_N_287x423_500_00_03_02.gray",
				    {287, 423, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002505_S_305x454_500_00_03_04.gray",
				    {305, 454, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002439_S_293x482_500_00_03_08.gray",
				    {293, 482, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_U_1600x1500_1000_01_03_01.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002433_U_1600x1500_1000_01_03_08.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002579_S_280x444_500_00_03_02.gray",
				    {280, 444, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002483_S_256x410_500_00_03_04.gray",
				    {256, 410, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002569_S_290x443_500_00_03_08.gray",
				    {290, 443, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002458_A_512x512_500_41_05_04.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002551_S_256x414_500_00_03_03.gray",
				    {256, 414, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002435_M_256x360_500_00_09_06.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002516_S_269x429_500_00_03_07.gray",
				    {269, 429, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002541_N_258x492_500_00_03_09.gray",
				    {258, 492, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"white_500x500_500_29_00_00.gray",
				    {500, 500, 500,
				    Impression::Unknown,
				    FrictionRidgeCaptureTechnology::
				        Unknown,
				    FrictionRidgeGeneralizedPosition::
				        Unknown}},
				{"00002480_S_268x468_500_00_03_04.gray",
				    {268, 468, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002457_U_1600x1500_1000_01_03_07.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002542_N_282x461_500_00_03_07.gray",
				    {282, 461, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002478_S_256x461_500_00_03_03.gray",
				    {256, 461, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002561_S_257x411_500_00_03_08.gray",
				    {257, 411, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002551_N_281x405_500_00_03_02.gray",
				    {281, 405, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002475_S_281x408_500_00_03_02.gray",
				    {281, 408, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002434_S_257x411_500_00_03_09.gray",
				    {257, 411, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002561_N_316x402_500_00_03_03.gray",
				    {316, 402, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002439_M_256x360_500_00_09_10.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002449_S_301x422_500_00_03_07.gray",
				    {301, 422, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002546_N_277x489_500_00_03_09.gray",
				    {277, 489, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002500_N_287x420_500_00_03_04.gray",
				    {287, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002560_N_306x484_500_00_03_03.gray",
				    {306, 484, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002502_S_256x369_500_00_03_09.gray",
				    {256, 369, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002547_N_278x430_500_00_03_03.gray",
				    {278, 430, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002523_S_256x357_500_00_03_08.gray",
				    {256, 357, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002579_S_278x444_500_00_03_09.gray",
				    {278, 444, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002449_N_325x482_500_00_03_09.gray",
				    {325, 482, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002433_N_293x459_500_00_03_03.gray",
				    {293, 459, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002558_S_265x434_500_00_03_08.gray",
				    {265, 434, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_U_1600x1500_1000_01_03_09.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002448_U_1600x1500_1000_01_03_03.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002449_S_286x433_500_00_03_04.gray",
				    {286, 433, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002569_S_258x412_500_00_03_04.gray",
				    {258, 412, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002457_A_512x512_500_41_05_10.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002456_N_290x485_500_00_03_04.gray",
				    {290, 485, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002578_N_271x466_500_00_03_04.gray",
				    {271, 466, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002433_S_300x495_500_00_03_09.gray",
				    {300, 495, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002457_U_1600x1500_1000_01_03_02.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002560_N_331x447_500_00_03_02.gray",
				    {331, 447, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002458_N_303x449_500_00_03_03.gray",
				    {303, 449, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002449_S_278x396_500_00_03_02.gray",
				    {278, 396, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002515_N_256x486_500_00_03_03.gray",
				    {256, 486, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002435_N_264x367_500_00_03_04.gray",
				    {264, 367, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002458_U_1600x1500_1000_01_03_09.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002537_N_322x413_500_00_03_04.gray",
				    {322, 413, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002488_N_365x494_500_00_03_02.gray",
				    {365, 494, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002541_S_256x496_500_00_03_08.gray",
				    {256, 496, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002456_U_1600x1500_1000_01_03_03.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002458_M_256x360_500_00_09_05.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002457_M_256x360_500_00_09_07.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002458_A_512x512_500_41_05_08.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002502_S_256x402_500_00_03_08.gray",
				    {256, 402, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002456_A_512x512_500_41_05_02.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002550_S_256x465_500_00_03_08.gray",
				    {256, 465, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_A_512x512_500_41_05_10.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002556_S_256x373_500_00_03_03.gray",
				    {256, 373, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002551_S_256x383_500_00_03_02.gray",
				    {256, 383, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002439_S_256x401_500_00_03_07.gray",
				    {256, 401, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002488_S_296x482_500_00_03_03.gray",
				    {296, 482, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002500_N_276x386_500_00_03_02.gray",
				    {276, 386, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002571_S_256x504_500_00_03_08.gray",
				    {256, 504, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002505_S_321x486_500_00_03_03.gray",
				    {321, 486, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002457_N_311x458_500_00_03_08.gray",
				    {311, 458, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002449_M_256x360_500_00_09_06.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002448_U_1600x1500_1000_01_03_10.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002458_A_512x512_500_41_05_09.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002457_A_512x512_500_41_05_03.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002542_S_256x425_500_00_03_07.gray",
				    {256, 425, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002449_A_512x512_500_41_05_04.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002435_A_512x512_500_41_05_05.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002542_S_256x426_500_00_03_08.gray",
				    {256, 426, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002579_S_2000x2000_500_00_03_02.gray",
				    {2000, 2000, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002445_A_512x512_500_41_05_07.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002546_N_309x489_500_00_03_04.gray",
				    {309, 489, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002434_M_256x360_500_00_09_08.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002500_S_256x415_500_00_03_08.gray",
				    {256, 415, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002449_U_1600x1500_1000_01_03_05.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002445_S_256x414_500_00_03_09.gray",
				    {256, 414, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002484_N_294x383_500_00_03_04.gray",
				    {294, 383, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002435_M_256x360_500_00_09_04.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002466_S_288x420_500_00_03_07.gray",
				    {288, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002448_U_1600x1500_1000_01_03_04.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002439_N_276x396_500_00_03_04.gray",
				    {276, 396, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002448_A_512x512_500_41_05_05.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002523_N_301x336_500_00_03_08.gray",
				    {301, 336, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002531_N_256x363_500_00_03_07.gray",
				    {256, 363, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002434_M_256x360_500_00_09_01.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002541_S_262x486_500_00_03_07.gray",
				    {262, 486, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002535_N_302x417_500_00_03_02.gray",
				    {302, 417, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002434_U_1600x1500_1000_01_03_04.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002449_U_1600x1500_1000_01_03_09.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002439_U_1600x1500_1000_01_03_01.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002478_S_256x435_500_00_03_08.gray",
				    {256, 435, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002456_U_1600x1500_1000_01_03_09.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002483_N_256x403_500_00_03_08.gray",
				    {256, 403, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002495_S_290x513_500_00_03_04.gray",
				    {290, 513, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002502_N_256x391_500_00_03_09.gray",
				    {256, 391, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002478_S_256x404_500_00_03_09.gray",
				    {256, 404, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002574_N_258x455_500_00_03_02.gray",
				    {258, 455, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002531_S_261x420_500_00_03_09.gray",
				    {261, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002435_N_256x382_500_00_03_07.gray",
				    {256, 382, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002435_S_256x400_500_00_03_08.gray",
				    {256, 400, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002435_M_256x360_500_00_09_09.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002456_U_1600x1500_1000_01_03_08.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002475_N_296x432_500_00_03_08.gray",
				    {296, 432, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002457_M_256x360_500_00_09_01.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002504_N_310x458_500_00_03_02.gray",
				    {310, 458, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002555_N_302x512_500_00_03_04.gray",
				    {302, 512, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002560_S_256x418_500_00_03_08.gray",
				    {256, 418, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002558_S_256x436_500_00_03_09.gray",
				    {256, 436, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002579_N_296x438_500_00_03_07.gray",
				    {296, 438, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002458_U_1600x1500_1000_01_03_10.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002439_S_261x411_500_00_03_02.gray",
				    {261, 411, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002515_N_256x427_500_00_03_08.gray",
				    {256, 427, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002434_N_318x452_500_00_03_04.gray",
				    {318, 452, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002445_N_256x441_500_00_03_09.gray",
				    {256, 441, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002516_S_261x436_500_00_03_03.gray",
				    {261, 436, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002439_S_279x448_500_00_03_09.gray",
				    {279, 448, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002504_S_284x456_500_00_03_07.gray",
				    {284, 456, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002505_S_329x485_500_00_03_08.gray",
				    {329, 485, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002484_N_284x350_500_00_03_03.gray",
				    {284, 350, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002448_A_512x512_500_41_05_08.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002500_N_256x400_500_00_03_08.gray",
				    {256, 400, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002488_N_316x459_500_00_03_07.gray",
				    {316, 459, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002516_N_266x469_500_00_03_02.gray",
				    {266, 469, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002579_S_265x431_500_00_03_03.gray",
				    {265, 431, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002515_S_256x419_500_00_03_07.gray",
				    {256, 419, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002478_N_308x478_500_00_03_04.gray",
				    {308, 478, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002448_A_512x512_500_41_05_10.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002458_A_512x512_500_41_05_07.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002458_A_512x512_500_41_05_06.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002537_N_294x439_500_00_03_09.gray",
				    {294, 439, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002456_U_1600x1500_1000_01_03_01.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002488_S_278x455_500_00_03_08.gray",
				    {278, 455, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002505_N_331x443_500_00_03_02.gray",
				    {331, 443, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002497_N_265x276_500_00_03_04.gray",
				    {265, 276, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002534_S_256x403_500_00_03_07.gray",
				    {256, 403, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002434_M_256x360_500_00_09_06.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002556_N_266x437_500_00_03_02.gray",
				    {266, 437, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002445_A_512x512_500_41_05_05.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002515_N_256x460_500_00_03_09.gray",
				    {256, 460, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002505_S_302x480_500_00_03_07.gray",
				    {302, 480, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002458_S_256x430_500_00_03_08.gray",
				    {256, 430, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002537_S_256x375_500_00_03_03.gray",
				    {256, 375, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002457_A_512x512_500_41_05_05.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002502_N_256x327_500_00_03_02.gray",
				    {256, 327, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002569_N_305x420_500_00_03_02.gray",
				    {305, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002555_S_256x492_500_00_03_09.gray",
				    {256, 492, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002458_U_1600x1500_1000_01_03_02.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002435_U_1600x1500_1000_01_03_02.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002449_U_1600x1500_1000_01_03_06.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002533_S_256x401_500_00_03_02.gray",
				    {256, 401, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002435_S_256x352_500_00_03_03.gray",
				    {256, 352, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002445_N_291x500_500_00_03_04.gray",
				    {291, 500, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002534_N_256x378_500_00_03_03.gray",
				    {256, 378, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002456_N_256x485_500_00_03_09.gray",
				    {256, 485, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002533_N_307x541_500_00_03_09.gray",
				    {307, 541, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002555_S_256x422_500_00_03_07.gray",
				    {256, 422, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002439_M_256x360_500_00_09_01.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002547_S_257x414_500_00_03_02.gray",
				    {257, 414, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002478_S_256x438_500_00_03_02.gray",
				    {256, 438, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002551_N_268x449_500_00_03_03.gray",
				    {268, 449, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002449_A_512x512_500_41_05_05.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002542_N_303x442_500_00_03_08.gray",
				    {303, 442, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002456_M_256x360_500_00_09_10.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002439_A_512x512_500_41_05_09.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002439_A_512x512_500_41_05_07.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002578_N_266x408_500_00_03_09.gray",
				    {266, 408, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002516_S_256x431_500_00_03_09.gray",
				    {256, 431, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002547_N_274x485_500_00_03_09.gray",
				    {274, 485, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002571_S_290x482_500_00_03_07.gray",
				    {290, 482, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002484_S_273x386_500_00_03_04.gray",
				    {273, 386, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002542_N_256x423_500_00_03_03.gray",
				    {256, 423, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002561_S_256x382_500_00_03_03.gray",
				    {256, 382, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002435_A_512x512_500_41_05_09.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002433_M_256x360_500_00_09_07.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002445_A_512x512_500_41_05_02.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002448_M_256x360_500_00_09_09.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002448_N_256x382_500_00_03_04.gray",
				    {256, 382, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002458_S_256x393_500_00_03_02.gray",
				    {256, 393, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002555_S_256x413_500_00_03_03.gray",
				    {256, 413, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002533_S_256x391_500_00_03_03.gray",
				    {256, 391, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002547_S_256x478_500_00_03_09.gray",
				    {256, 478, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002439_M_256x360_500_00_09_06.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002439_U_1600x1500_1000_01_03_03.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002456_N_285x442_500_00_03_08.gray",
				    {285, 442, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002456_M_256x360_500_00_09_03.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002472_S_256x344_500_00_03_03.gray",
				    {256, 344, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002537_S_256x379_500_00_03_04.gray",
				    {256, 379, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002480_S_280x449_500_00_03_08.gray",
				    {280, 449, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_S_269x443_500_00_03_03.gray",
				    {269, 443, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002448_S_256x431_500_00_03_08.gray",
				    {256, 431, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002445_N_319x415_500_00_03_07.gray",
				    {319, 415, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002472_N_335x454_500_00_03_09.gray",
				    {335, 454, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002480_S_293x429_500_00_03_07.gray",
				    {293, 429, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002550_N_269x519_500_00_03_07.gray",
				    {269, 519, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002433_M_256x360_500_00_09_09.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002457_U_1600x1500_1000_01_03_10.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002456_S_256x389_500_00_03_07.gray",
				    {256, 389, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002531_S_256x390_500_00_03_02.gray",
				    {256, 390, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002466_N_290x427_500_00_03_02.gray",
				    {290, 427, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002466_S_258x445_500_00_03_08.gray",
				    {258, 445, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002458_M_256x360_500_00_09_09.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002578_N_256x435_500_00_03_08.gray",
				    {256, 435, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002458_A_512x512_500_41_05_05.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002475_S_256x431_500_00_03_09.gray",
				    {256, 431, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002449_M_256x360_500_00_09_01.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"black_500x500_500_29_00_00.gray",
				    {500, 500, 500,
				    Impression::Unknown,
				    FrictionRidgeCaptureTechnology::
				        Unknown,
				    FrictionRidgeGeneralizedPosition::
				        Unknown}},
				{"00002515_N_256x412_500_00_03_07.gray",
				    {256, 412, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002448_A_512x512_500_41_05_03.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002561_N_322x405_500_00_03_08.gray",
				    {322, 405, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002547_S_258x460_500_00_03_08.gray",
				    {258, 460, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002434_N_316x415_500_00_03_03.gray",
				    {316, 415, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002445_U_1600x1500_1000_01_03_05.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002551_N_273x411_500_00_03_07.gray",
				    {273, 411, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002445_U_1600x1500_1000_01_03_09.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002534_N_256x367_500_00_03_07.gray",
				    {256, 367, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002449_A_512x512_500_41_05_02.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002457_U_1600x1500_1000_01_03_06.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002561_S_256x363_500_00_03_04.gray",
				    {256, 363, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002515_S_256x425_500_00_03_04.gray",
				    {256, 425, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002435_M_256x360_500_00_09_02.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002472_N_310x420_500_00_03_08.gray",
				    {310, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002480_N_311x449_500_00_03_04.gray",
				    {311, 449, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002483_N_256x441_500_00_03_09.gray",
				    {256, 441, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002571_N_329x527_500_00_03_07.gray",
				    {329, 527, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002556_N_263x414_500_00_03_07.gray",
				    {263, 414, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002550_N_259x505_500_00_03_09.gray",
				    {259, 505, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002445_A_512x512_500_41_05_08.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002457_U_1600x1500_1000_01_03_04.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002433_A_512x512_500_41_05_06.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002449_U_1600x1500_1000_01_03_04.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002439_N_299x440_500_00_03_07.gray",
				    {299, 440, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002551_N_256x420_500_00_03_04.gray",
				    {256, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002434_N_277x475_500_00_03_08.gray",
				    {277, 475, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_S_260x421_500_00_03_08.gray",
				    {260, 421, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_M_256x360_500_00_09_03.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002531_S_256x374_500_00_03_03.gray",
				    {256, 374, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002478_N_311x445_500_00_03_07.gray",
				    {311, 445, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002569_N_269x468_500_00_03_09.gray",
				    {269, 468, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002433_N_333x550_500_00_03_09.gray",
				    {333, 550, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002456_S_256x434_500_00_03_08.gray",
				    {256, 434, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002542_S_256x429_500_00_03_03.gray",
				    {256, 429, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002435_N_264x447_500_00_03_08.gray",
				    {264, 447, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002488_N_334x487_500_00_03_08.gray",
				    {334, 487, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002457_M_256x360_500_00_09_02.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002478_S_256x411_500_00_03_07.gray",
				    {256, 411, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002457_S_256x347_500_00_03_09.gray",
				    {256, 347, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002449_A_512x512_500_41_05_07.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002433_S_307x471_500_00_03_07.gray",
				    {307, 471, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002435_M_256x360_500_00_09_03.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002561_N_319x391_500_00_03_02.gray",
				    {319, 391, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002448_M_256x360_500_00_09_06.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002457_A_512x512_500_41_05_07.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002458_N_273x484_500_00_03_09.gray",
				    {273, 484, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002449_M_256x360_500_00_09_05.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002521_N_361x490_500_00_03_07.gray",
				    {361, 490, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002534_N_256x412_500_00_03_08.gray",
				    {256, 412, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002537_N_318x422_500_00_03_03.gray",
				    {318, 422, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002458_A_512x512_500_41_05_01.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002458_N_316x386_500_00_03_08.gray",
				    {316, 386, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002484_N_266x361_500_00_03_08.gray",
				    {266, 361, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002456_U_1600x1500_1000_01_03_06.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002448_N_297x402_500_00_03_07.gray",
				    {297, 402, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002435_M_256x360_500_00_09_05.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002497_N_270x359_500_00_03_02.gray",
				    {270, 359, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002456_M_256x360_500_00_09_08.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002458_N_279x446_500_00_03_07.gray",
				    {279, 446, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002551_S_256x420_500_00_03_04.gray",
				    {256, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002541_S_256x470_500_00_03_09.gray",
				    {256, 470, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002445_M_256x360_500_00_09_09.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002516_S_256x420_500_00_03_04.gray",
				    {256, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002551_S_257x402_500_00_03_07.gray",
				    {257, 402, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002505_N_283x363_500_00_03_07.gray",
				    {283, 363, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002457_S_256x366_500_00_03_02.gray",
				    {256, 366, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002448_S_256x384_500_00_03_07.gray",
				    {256, 384, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002500_S_256x394_500_00_03_07.gray",
				    {256, 394, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002556_S_256x388_500_00_03_09.gray",
				    {256, 388, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002449_N_302x405_500_00_03_02.gray",
				    {302, 405, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002546_N_256x450_500_00_03_08.gray",
				    {256, 450, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002445_S_265x477_500_00_03_03.gray",
				    {265, 477, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002445_U_1600x1500_1000_01_03_01.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002472_N_319x403_500_00_03_04.gray",
				    {319, 403, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002475_S_256x411_500_00_03_08.gray",
				    {256, 411, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002445_U_1600x1500_1000_01_03_07.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002558_N_306x488_500_00_03_07.gray",
				    {306, 488, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002579_N_336x452_500_00_03_03.gray",
				    {336, 452, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002433_U_1600x1500_1000_01_03_02.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002433_A_512x512_500_41_05_09.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002449_M_256x360_500_00_09_04.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002502_N_256x373_500_00_03_04.gray",
				    {256, 373, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002497_N_256x347_500_00_03_07.gray",
				    {256, 347, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002579_S_99x99_500_00_03_02.gray",
				    {99, 99, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002458_M_256x360_500_00_09_03.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002500_S_256x409_500_00_03_03.gray",
				    {256, 409, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002574_N_286x468_500_00_03_04.gray",
				    {286, 468, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002475_N_312x388_500_00_03_07.gray",
				    {312, 388, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002533_S_256x424_500_00_03_07.gray",
				    {256, 424, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002456_U_1600x1500_1000_01_03_07.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002551_S_256x450_500_00_03_08.gray",
				    {256, 450, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002472_N_311x409_500_00_03_03.gray",
				    {311, 409, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002505_N_385x497_500_00_03_04.gray",
				    {385, 497, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002448_M_256x360_500_00_09_01.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002435_A_512x512_500_41_05_07.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002439_A_512x512_500_41_05_02.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002555_N_256x461_500_00_03_08.gray",
				    {256, 461, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002458_M_256x360_500_00_09_10.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002466_S_256x442_500_00_03_09.gray",
				    {256, 442, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002542_N_293x451_500_00_03_09.gray",
				    {293, 451, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002558_N_324x452_500_00_03_02.gray",
				    {324, 452, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002448_A_512x512_500_41_05_02.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002439_S_287x438_500_00_03_03.gray",
				    {287, 438, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002521_S_259x474_500_00_03_09.gray",
				    {259, 474, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002434_M_256x360_500_00_09_10.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002448_A_512x512_500_41_05_04.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002478_N_256x482_500_00_03_08.gray",
				    {256, 482, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002500_S_256x397_500_00_03_02.gray",
				    {256, 397, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002497_N_323x455_500_00_03_03.gray",
				    {323, 455, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002458_U_1600x1500_1000_01_03_05.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002448_A_512x512_500_41_05_07.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002500_S_256x378_500_00_03_09.gray",
				    {256, 378, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002483_S_256x361_500_00_03_02.gray",
				    {256, 361, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002433_M_256x360_500_00_09_01.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002434_U_1600x1500_1000_01_03_10.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002445_M_256x360_500_00_09_04.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002561_S_263x377_500_00_03_02.gray",
				    {263, 377, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002458_S_292x447_500_00_03_04.gray",
				    {292, 447, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002578_S_256x416_500_00_03_09.gray",
				    {256, 416, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002456_M_256x360_500_00_09_06.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002516_N_270x443_500_00_03_04.gray",
				    {270, 443, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002533_S_256x329_500_00_03_08.gray",
				    {256, 329, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002515_S_256x425_500_00_03_09.gray",
				    {256, 425, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002448_A_512x512_500_41_05_09.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002475_S_264x421_500_00_03_04.gray",
				    {264, 421, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002433_U_1600x1500_1000_01_03_03.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002457_M_256x360_500_00_09_08.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002456_S_256x394_500_00_03_02.gray",
				    {256, 394, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002445_U_1600x1500_1000_01_03_04.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002480_N_295x429_500_00_03_08.gray",
				    {295, 429, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002434_M_256x360_500_00_09_02.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002448_S_256x396_500_00_03_02.gray",
				    {256, 396, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002571_N_312x487_500_00_03_02.gray",
				    {312, 487, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002579_N_329x433_500_00_03_04.gray",
				    {329, 433, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002534_S_256x418_500_00_03_09.gray",
				    {256, 418, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002435_M_256x360_500_00_09_07.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002475_N_277x412_500_00_03_03.gray",
				    {277, 412, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002560_N_311x453_500_00_03_07.gray",
				    {311, 453, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002502_N_298x446_500_00_03_07.gray",
				    {298, 446, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002550_S_261x479_500_00_03_03.gray",
				    {261, 479, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002445_S_272x442_500_00_03_07.gray",
				    {272, 442, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002448_M_256x360_500_00_09_04.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002439_A_512x512_500_41_05_03.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002448_M_256x360_500_00_09_05.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002456_N_268x478_500_00_03_03.gray",
				    {268, 478, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002457_N_269x400_500_00_03_09.gray",
				    {269, 400, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002535_N_302x468_500_00_03_04.gray",
				    {302, 468, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002579_N_311x490_500_00_03_09.gray",
				    {311, 490, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"gradient_500x500_500_29_00_00.gray",
				    {500, 500, 500,
				    Impression::Unknown,
				    FrictionRidgeCaptureTechnology::
				        Unknown,
				    FrictionRidgeGeneralizedPosition::
				        Unknown}},
				{"00002541_S_256x491_500_00_03_04.gray",
				    {256, 491, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002457_S_256x372_500_00_03_07.gray",
				    {256, 372, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002466_N_316x475_500_00_03_03.gray",
				    {316, 475, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002439_A_512x512_500_41_05_04.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002504_S_268x441_500_00_03_02.gray",
				    {268, 441, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002537_S_256x345_500_00_03_02.gray",
				    {256, 345, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002521_S_309x503_500_00_03_07.gray",
				    {309, 503, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002533_N_296x514_500_00_03_08.gray",
				    {296, 514, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002535_S_279x428_500_00_03_03.gray",
				    {279, 428, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002561_N_301x413_500_00_03_07.gray",
				    {301, 413, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002488_S_334x470_500_00_03_07.gray",
				    {334, 470, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002515_N_256x420_500_00_03_04.gray",
				    {256, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002497_S_302x428_500_00_03_04.gray",
				    {302, 428, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002484_S_256x337_500_00_03_09.gray",
				    {256, 337, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002456_A_512x512_500_41_05_08.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002434_N_311x462_500_00_03_09.gray",
				    {311, 462, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002516_S_267x435_500_00_03_02.gray",
				    {267, 435, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002466_S_275x439_500_00_03_02.gray",
				    {275, 439, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002448_A_512x512_500_41_05_06.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002578_N_293x434_500_00_03_03.gray",
				    {293, 434, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002488_S_276x476_500_00_03_09.gray",
				    {276, 476, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002531_S_265x408_500_00_03_07.gray",
				    {265, 408, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002434_N_349x430_500_00_03_07.gray",
				    {349, 430, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002434_M_256x360_500_00_09_09.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002456_S_256x377_500_00_03_03.gray",
				    {256, 377, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002546_S_283x471_500_00_03_03.gray",
				    {283, 471, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002523_N_262x372_500_00_03_03.gray",
				    {262, 372, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002434_A_512x512_500_41_05_02.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002449_S_291x457_500_00_03_08.gray",
				    {291, 457, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002448_S_256x416_500_00_03_03.gray",
				    {256, 416, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002439_A_512x512_500_41_05_01.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002449_M_256x360_500_00_09_09.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002483_N_256x412_500_00_03_07.gray",
				    {256, 412, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002458_M_256x360_500_00_09_02.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002578_N_256x376_500_00_03_07.gray",
				    {256, 376, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002448_M_256x360_500_00_09_07.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002435_M_256x360_500_00_09_01.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002569_N_294x438_500_00_03_04.gray",
				    {294, 438, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002434_U_1600x1500_1000_01_03_08.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002547_S_256x428_500_00_03_07.gray",
				    {256, 428, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002534_S_256x352_500_00_03_03.gray",
				    {256, 352, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002457_A_512x512_500_41_05_01.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002500_S_256x399_500_00_03_04.gray",
				    {256, 399, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002434_U_1600x1500_1000_01_03_03.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002546_S_256x423_500_00_03_07.gray",
				    {256, 423, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002472_S_256x322_500_00_03_02.gray",
				    {256, 322, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002435_M_256x360_500_00_09_10.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002435_A_512x512_500_41_05_04.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002449_N_316x399_500_00_03_03.gray",
				    {316, 399, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002579_S_292x465_500_00_03_07.gray",
				    {292, 465, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002480_N_318x452_500_00_03_07.gray",
				    {318, 452, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002556_S_256x432_500_00_03_04.gray",
				    {256, 432, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002478_N_324x468_500_00_03_02.gray",
				    {324, 468, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002546_S_256x469_500_00_03_08.gray",
				    {256, 469, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_A_512x512_500_41_05_01.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002523_N_346x370_500_00_03_09.gray",
				    {346, 370, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002445_M_256x360_500_00_09_05.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002531_N_256x375_500_00_03_09.gray",
				    {256, 375, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002449_A_512x512_500_41_05_03.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002449_A_512x512_500_41_05_01.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002550_N_275x533_500_00_03_04.gray",
				    {275, 533, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002560_N_326x465_500_00_03_09.gray",
				    {326, 465, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002448_N_280x404_500_00_03_08.gray",
				    {280, 404, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002574_S_257x416_500_00_03_07.gray",
				    {257, 416, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002434_A_512x512_500_41_05_01.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002439_M_256x360_500_00_09_02.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002458_U_1600x1500_1000_01_03_07.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002445_S_269x440_500_00_03_02.gray",
				    {269, 440, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002449_N_338x419_500_00_03_04.gray",
				    {338, 419, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002445_A_512x512_500_41_05_06.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002449_U_1600x1500_1000_01_03_01.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002434_A_512x512_500_41_05_07.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002535_N_290x426_500_00_03_09.gray",
				    {290, 426, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002534_N_256x434_500_00_03_04.gray",
				    {256, 434, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002533_N_296x433_500_00_03_03.gray",
				    {296, 433, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002448_U_1600x1500_1000_01_03_02.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002523_S_275x358_500_00_03_02.gray",
				    {275, 358, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002556_N_272x474_500_00_03_03.gray",
				    {272, 474, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002495_N_325x413_500_00_03_08.gray",
				    {325, 413, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002435_N_296x404_500_00_03_02.gray",
				    {296, 404, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002556_N_260x460_500_00_03_09.gray",
				    {260, 460, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002439_M_256x360_500_00_09_04.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002449_U_1600x1500_1000_01_03_07.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002456_U_1600x1500_1000_01_03_05.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002445_N_268x453_500_00_03_03.gray",
				    {268, 453, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002434_S_256x350_500_00_03_07.gray",
				    {256, 350, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002531_S_256x420_500_00_03_04.gray",
				    {256, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002579_N_294x486_500_00_03_08.gray",
				    {294, 486, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002472_N_294x455_500_00_03_07.gray",
				    {294, 455, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002534_N_256x434_500_00_03_09.gray",
				    {256, 434, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002456_A_512x512_500_41_05_04.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002457_U_1600x1500_1000_01_03_09.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002433_U_1600x1500_1000_01_03_06.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002439_A_512x512_500_41_05_06.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002535_S_286x417_500_00_03_02.gray",
				    {286, 417, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002561_S_260x379_500_00_03_07.gray",
				    {260, 379, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002504_S_264x482_500_00_03_09.gray",
				    {264, 482, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002433_M_256x360_500_00_09_02.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002449_U_1600x1500_1000_01_03_10.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002571_S_267x515_500_00_03_09.gray",
				    {267, 515, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002502_N_258x332_500_00_03_03.gray",
				    {258, 332, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002571_N_337x513_500_00_03_08.gray",
				    {337, 513, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002483_S_256x442_500_00_03_09.gray",
				    {256, 442, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002495_N_321x394_500_00_03_04.gray",
				    {321, 394, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002449_M_256x360_500_00_09_07.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002439_U_1600x1500_1000_01_03_06.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002457_M_256x360_500_00_09_05.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002555_N_256x356_500_00_03_07.gray",
				    {256, 356, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002458_S_256x399_500_00_03_03.gray",
				    {256, 399, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002457_U_1600x1500_1000_01_03_01.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002578_S_256x432_500_00_03_07.gray",
				    {256, 432, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002435_U_1600x1500_1000_01_03_04.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002433_N_282x452_500_00_03_08.gray",
				    {282, 452, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002449_A_512x512_500_41_05_10.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002448_M_256x360_500_00_09_10.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002472_S_256x394_500_00_03_09.gray",
				    {256, 394, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002449_N_265x382_500_00_03_07.gray",
				    {265, 382, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002448_N_258x398_500_00_03_02.gray",
				    {258, 398, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002458_M_256x360_500_00_09_01.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002495_S_291x455_500_00_03_08.gray",
				    {291, 455, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002500_N_256x373_500_00_03_07.gray",
				    {256, 373, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002448_S_256x387_500_00_03_09.gray",
				    {256, 387, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002505_N_366x482_500_00_03_03.gray",
				    {366, 482, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002445_M_256x360_500_00_09_03.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002558_N_303x492_500_00_03_09.gray",
				    {303, 492, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002457_M_256x360_500_00_09_06.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002435_U_1600x1500_1000_01_03_08.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002449_A_512x512_500_41_05_09.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002560_S_256x419_500_00_03_09.gray",
				    {256, 419, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002521_S_313x524_500_00_03_03.gray",
				    {313, 524, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002515_S_256x440_500_00_03_03.gray",
				    {256, 440, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002531_N_256x393_500_00_03_02.gray",
				    {256, 393, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002435_U_1600x1500_1000_01_03_10.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002556_N_269x467_500_00_03_08.gray",
				    {269, 467, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002449_M_256x360_500_00_09_02.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002457_M_256x360_500_00_09_03.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002449_U_1600x1500_1000_01_03_02.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002466_N_288x468_500_00_03_08.gray",
				    {288, 468, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_A_512x512_500_41_05_08.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002449_M_256x360_500_00_09_10.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002497_S_278x409_500_00_03_08.gray",
				    {278, 409, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002534_N_256x390_500_00_03_02.gray",
				    {256, 390, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002434_U_1600x1500_1000_01_03_09.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002504_S_309x431_500_00_03_08.gray",
				    {309, 431, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002475_S_263x392_500_00_03_07.gray",
				    {263, 392, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002439_U_1600x1500_1000_01_03_05.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002456_U_1600x1500_1000_01_03_02.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002439_M_256x360_500_00_09_07.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002458_M_256x360_500_00_09_06.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002449_A_512x512_500_41_05_08.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002475_S_277x454_500_00_03_03.gray",
				    {277, 454, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002579_N_315x419_500_00_03_02.gray",
				    {315, 419, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002435_U_1600x1500_1000_01_03_07.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002434_A_512x512_500_41_05_09.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002435_S_256x357_500_00_03_04.gray",
				    {256, 357, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002495_N_367x378_500_00_03_03.gray",
				    {367, 378, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002457_A_512x512_500_41_05_04.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002555_S_256x474_500_00_03_04.gray",
				    {256, 474, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002445_A_512x512_500_41_05_04.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002472_S_256x364_500_00_03_04.gray",
				    {256, 364, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002456_A_512x512_500_41_05_09.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002495_S_271x435_500_00_03_02.gray",
				    {271, 435, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002523_S_267x374_500_00_03_09.gray",
				    {267, 374, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002488_N_292x406_500_00_03_04.gray",
				    {292, 406, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002456_A_512x512_500_41_05_06.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002475_N_316x374_500_00_03_02.gray",
				    {316, 374, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002521_N_386x515_500_00_03_03.gray",
				    {386, 515, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002433_A_512x512_500_41_05_07.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002523_N_256x308_500_00_03_02.gray",
				    {256, 308, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002516_N_287x433_500_00_03_07.gray",
				    {287, 433, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002457_N_276x448_500_00_03_04.gray",
				    {276, 448, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002523_S_260x372_500_00_03_04.gray",
				    {260, 372, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002449_U_1600x1500_1000_01_03_03.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002579_S_276x433_500_00_03_04.gray",
				    {276, 433, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002435_M_256x360_500_00_09_08.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002434_S_256x392_500_00_03_08.gray",
				    {256, 392, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002560_S_268x396_500_00_03_04.gray",
				    {268, 396, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002497_N_317x520_500_00_03_09.gray",
				    {317, 520, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002458_A_512x512_500_41_05_10.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002537_N_279x392_500_00_03_07.gray",
				    {279, 392, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002445_A_512x512_500_41_05_01.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002439_S_276x421_500_00_03_04.gray",
				    {276, 421, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002537_S_256x367_500_00_03_08.gray",
				    {256, 367, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002551_S_256x425_500_00_03_09.gray",
				    {256, 425, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002448_U_1600x1500_1000_01_03_08.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_M_256x360_500_00_09_06.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002502_S_256x378_500_00_03_04.gray",
				    {256, 378, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002466_S_263x489_500_00_03_03.gray",
				    {263, 489, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002434_A_512x512_500_41_05_08.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002505_S_307x442_500_00_03_02.gray",
				    {307, 442, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002445_U_1600x1500_1000_01_03_03.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002561_N_303x427_500_00_03_09.gray",
				    {303, 427, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002535_S_286x455_500_00_03_08.gray",
				    {286, 455, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002495_N_357x419_500_00_03_02.gray",
				    {357, 419, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002439_A_512x512_500_41_05_10.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002439_N_392x500_500_00_03_08.gray",
				    {392, 500, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002484_N_283x358_500_00_03_09.gray",
				    {283, 358, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002435_S_256x305_500_00_03_07.gray",
				    {256, 305, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002439_N_277x372_500_00_03_02.gray",
				    {277, 372, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002434_U_1600x1500_1000_01_03_05.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002449_M_256x360_500_00_09_08.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002439_U_1600x1500_1000_01_03_07.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002435_A_512x512_500_41_05_08.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002488_S_296x461_500_00_03_04.gray",
				    {296, 461, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002435_U_1600x1500_1000_01_03_09.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002449_A_512x512_500_41_05_06.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002550_S_256x484_500_00_03_02.gray",
				    {256, 484, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002456_M_256x360_500_00_09_09.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002434_S_264x407_500_00_03_03.gray",
				    {264, 407, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002457_S_256x386_500_00_03_08.gray",
				    {256, 386, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002445_M_256x360_500_00_09_08.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002448_N_265x380_500_00_03_09.gray",
				    {265, 380, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002458_N_322x503_500_00_03_04.gray",
				    {322, 503, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002435_A_512x512_500_41_05_01.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002445_A_512x512_500_41_05_10.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002480_N_292x424_500_00_03_09.gray",
				    {292, 424, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002439_U_1600x1500_1000_01_03_10.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002433_U_1600x1500_1000_01_03_07.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002574_N_256x466_500_00_03_09.gray",
				    {256, 466, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002435_A_512x512_500_41_05_06.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002488_N_370x505_500_00_03_03.gray",
				    {370, 505, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002457_U_1600x1500_1000_01_03_05.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002475_N_327x452_500_00_03_04.gray",
				    {327, 452, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002537_N_300x457_500_00_03_08.gray",
				    {300, 457, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002457_M_256x360_500_00_09_04.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002546_N_294x441_500_00_03_02.gray",
				    {294, 441, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002445_U_1600x1500_1000_01_03_08.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002535_N_297x408_500_00_03_03.gray",
				    {297, 408, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002445_M_256x360_500_00_09_01.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002457_M_256x360_500_00_09_09.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002435_U_1600x1500_1000_01_03_03.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002497_S_293x420_500_00_03_07.gray",
				    {293, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002534_S_256x388_500_00_03_04.gray",
				    {256, 388, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002550_N_294x522_500_00_03_02.gray",
				    {294, 522, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002480_S_283x419_500_00_03_02.gray",
				    {283, 419, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002434_U_1600x1500_1000_01_03_06.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002439_M_256x360_500_00_09_09.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002456_U_1600x1500_1000_01_03_10.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002439_N_299x422_500_00_03_09.gray",
				    {299, 422, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002433_N_363x547_500_00_03_04.gray",
				    {363, 547, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002457_A_512x512_500_41_05_06.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002435_A_512x512_500_41_05_10.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002445_M_256x360_500_00_09_07.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002523_S_256x328_500_00_03_07.gray",
				    {256, 328, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002502_S_256x377_500_00_03_02.gray",
				    {256, 377, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002435_U_1600x1500_1000_01_03_01.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002542_S_260x419_500_00_03_02.gray",
				    {260, 419, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002433_A_512x512_500_41_05_02.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002458_U_1600x1500_1000_01_03_01.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002523_S_271x388_500_00_03_03.gray",
				    {271, 388, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002478_S_256x405_500_00_03_04.gray",
				    {256, 405, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002456_N_263x448_500_00_03_02.gray",
				    {263, 448, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002456_U_1600x1500_1000_01_03_04.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002448_M_256x360_500_00_09_08.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002546_N_256x457_500_00_03_03.gray",
				    {256, 457, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002574_S_256x470_500_00_03_09.gray",
				    {256, 470, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002569_N_256x424_500_00_03_07.gray",
				    {256, 424, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002578_S_279x475_500_00_03_08.gray",
				    {279, 475, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002483_N_281x522_500_00_03_04.gray",
				    {281, 522, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002439_A_512x512_500_41_05_08.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002558_N_298x489_500_00_03_03.gray",
				    {298, 489, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002515_S_256x419_500_00_03_02.gray",
				    {256, 419, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002435_U_1600x1500_1000_01_03_06.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002556_S_256x378_500_00_03_07.gray",
				    {256, 378, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002521_N_334x512_500_00_03_08.gray",
				    {334, 512, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002457_S_256x377_500_00_03_04.gray",
				    {256, 377, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002500_N_256x408_500_00_03_03.gray",
				    {256, 408, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002445_S_256x436_500_00_03_04.gray",
				    {256, 436, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002521_S_308x483_500_00_03_02.gray",
				    {308, 483, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002502_N_280x427_500_00_03_08.gray",
				    {280, 427, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_M_256x360_500_00_09_08.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002516_S_273x424_500_00_03_08.gray",
				    {273, 424, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002434_M_256x360_500_00_09_05.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002457_A_512x512_500_41_05_08.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002435_A_512x512_500_41_05_03.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002551_N_277x425_500_00_03_08.gray",
				    {277, 425, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002531_N_271x360_500_00_03_08.gray",
				    {271, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002457_U_1600x1500_1000_01_03_03.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002458_M_256x360_500_00_09_07.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002478_N_277x463_500_00_03_09.gray",
				    {277, 463, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002483_S_256x374_500_00_03_03.gray",
				    {256, 374, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002434_A_512x512_500_41_05_06.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002561_N_300x422_500_00_03_04.gray",
				    {300, 422, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002497_S_301x494_500_00_03_09.gray",
				    {301, 494, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002433_M_256x360_500_00_09_10.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002558_S_313x420_500_00_03_07.gray",
				    {313, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002555_S_256x414_500_00_03_02.gray",
				    {256, 414, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002531_S_269x402_500_00_03_08.gray",
				    {269, 402, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002571_N_302x477_500_00_03_04.gray",
				    {302, 477, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002488_S_324x483_500_00_03_02.gray",
				    {324, 483, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002434_A_512x512_500_41_05_10.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002578_N_267x446_500_00_03_02.gray",
				    {267, 446, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002561_S_256x384_500_00_03_09.gray",
				    {256, 384, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002433_U_1600x1500_1000_01_03_04.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002449_S_302x436_500_00_03_03.gray",
				    {302, 436, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002535_S_290x444_500_00_03_09.gray",
				    {290, 444, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002542_N_282x479_500_00_03_04.gray",
				    {282, 479, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002483_N_272x445_500_00_03_02.gray",
				    {272, 445, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002435_N_307x410_500_00_03_03.gray",
				    {307, 410, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002456_M_256x360_500_00_09_02.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002521_N_344x490_500_00_03_02.gray",
				    {344, 490, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002542_S_256x441_500_00_03_04.gray",
				    {256, 441, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002547_S_256x433_500_00_03_04.gray",
				    {256, 433, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002458_U_1600x1500_1000_01_03_03.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002456_S_256x454_500_00_03_09.gray",
				    {256, 454, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002502_S_256x379_500_00_03_07.gray",
				    {256, 379, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002547_N_256x452_500_00_03_02.gray",
				    {256, 452, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002574_S_256x454_500_00_03_03.gray",
				    {256, 454, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002560_N_276x420_500_00_03_04.gray",
				    {276, 420, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002521_N_345x544_500_00_03_09.gray",
				    {345, 544, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002574_N_256x395_500_00_03_07.gray",
				    {256, 395, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002483_S_256x375_500_00_03_08.gray",
				    {256, 375, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002475_N_296x433_500_00_03_09.gray",
				    {296, 433, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002458_U_1600x1500_1000_01_03_08.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_N_312x544_500_00_03_02.gray",
				    {312, 544, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002457_S_256x361_500_00_03_03.gray",
				    {256, 361, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002556_N_303x490_500_00_03_04.gray",
				    {303, 490, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002571_S_283x446_500_00_03_02.gray",
				    {283, 446, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002456_A_512x512_500_41_05_10.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002542_N_282x477_500_00_03_02.gray",
				    {282, 477, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002560_S_259x388_500_00_03_02.gray",
				    {259, 388, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002504_N_290x502_500_00_03_09.gray",
				    {290, 502, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002495_S_336x493_500_00_03_03.gray",
				    {336, 493, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002456_M_256x360_500_00_09_05.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002535_N_308x468_500_00_03_07.gray",
				    {308, 468, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002445_A_512x512_500_41_05_03.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002505_N_259x386_500_00_03_08.gray",
				    {259, 386, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002569_S_290x485_500_00_03_03.gray",
				    {290, 485, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002495_S_286x455_500_00_03_09.gray",
				    {286, 455, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002541_S_257x502_500_00_03_03.gray",
				    {257, 502, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002435_U_1600x1500_1000_01_03_05.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002484_N_280x330_500_00_03_07.gray",
				    {280, 330, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002456_M_256x360_500_00_09_07.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002458_N_292x445_500_00_03_02.gray",
				    {292, 445, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002558_S_267x490_500_00_03_04.gray",
				    {267, 490, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002433_U_1600x1500_1000_01_03_10.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002578_S_256x458_500_00_03_04.gray",
				    {256, 458, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002541_N_304x508_500_00_03_04.gray",
				    {304, 508, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002558_S_286x509_500_00_03_03.gray",
				    {286, 509, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002439_M_256x360_500_00_09_05.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002541_S_277x472_500_00_03_02.gray",
				    {277, 472, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002434_U_1600x1500_1000_01_03_02.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002547_N_256x474_500_00_03_07.gray",
				    {256, 474, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002569_S_277x412_500_00_03_09.gray",
				    {277, 412, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002458_A_512x512_500_41_05_02.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002505_N_288x440_500_00_03_09.gray",
				    {288, 440, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002435_S_256x415_500_00_03_09.gray",
				    {256, 415, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002574_S_256x444_500_00_03_08.gray",
				    {256, 444, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_N_386x486_500_00_03_07.gray",
				    {386, 486, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002480_S_288x459_500_00_03_03.gray",
				    {288, 459, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002500_N_257x413_500_00_03_09.gray",
				    {257, 413, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002497_S_293x414_500_00_03_02.gray",
				    {293, 414, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002550_S_256x419_500_00_03_04.gray",
				    {256, 419, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002433_A_512x512_500_41_05_04.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002535_N_325x408_500_00_03_08.gray",
				    {325, 408, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002456_A_512x512_500_41_05_03.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002516_N_265x453_500_00_03_09.gray",
				    {265, 453, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002434_A_512x512_500_41_05_04.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002434_N_320x437_500_00_03_02.gray",
				    {320, 437, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002550_S_256x503_500_00_03_07.gray",
				    {256, 503, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002448_M_256x360_500_00_09_03.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002569_N_281x455_500_00_03_03.gray",
				    {281, 455, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002458_M_256x360_500_00_09_08.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002434_M_256x360_500_00_09_07.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002523_N_307x321_500_00_03_07.gray",
				    {307, 321, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002439_M_256x360_500_00_09_03.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002457_U_1600x1500_1000_01_03_08.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002449_U_1600x1500_1000_01_03_08.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002456_M_256x360_500_00_09_04.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002533_N_319x439_500_00_03_02.gray",
				    {319, 439, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002556_S_256x380_500_00_03_08.gray",
				    {256, 380, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002433_S_303x480_500_00_03_02.gray",
				    {303, 480, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002558_N_272x450_500_00_03_08.gray",
				    {272, 450, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002448_U_1600x1500_1000_01_03_06.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002449_M_256x360_500_00_09_03.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002515_S_256x436_500_00_03_08.gray",
				    {256, 436, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002523_N_332x387_500_00_03_04.gray",
				    {332, 387, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002433_M_256x360_500_00_09_04.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002483_N_300x430_500_00_03_03.gray",
				    {300, 430, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002550_N_256x462_500_00_03_08.gray",
				    {256, 462, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002445_M_256x360_500_00_09_06.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002505_S_301x463_500_00_03_09.gray",
				    {301, 463, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002439_U_1600x1500_1000_01_03_04.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002484_N_292x362_500_00_03_02.gray",
				    {292, 362, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002456_S_256x416_500_00_03_04.gray",
				    {256, 416, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002458_A_512x512_500_41_05_03.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002456_M_256x360_500_00_09_01.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"rects_500x500_500_29_00_00.gray",
				    {500, 500, 500,
				    Impression::Unknown,
				    FrictionRidgeCaptureTechnology::
				        Unknown,
				    FrictionRidgeGeneralizedPosition::
				        Unknown}},
				{"00002434_S_262x379_500_00_03_02.gray",
				    {262, 379, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002439_U_1600x1500_1000_01_03_02.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002458_U_1600x1500_1000_01_03_06.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002478_N_324x471_500_00_03_03.gray",
				    {324, 471, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002546_S_273x471_500_00_03_04.gray",
				    {273, 471, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002483_S_256x397_500_00_03_07.gray",
				    {256, 397, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002504_N_321x501_500_00_03_03.gray",
				    {321, 501, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002439_M_256x360_500_00_09_08.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002541_N_313x513_500_00_03_03.gray",
				    {313, 513, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002547_N_299x452_500_00_03_08.gray",
				    {299, 452, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002533_N_272x528_500_00_03_07.gray",
				    {272, 528, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002448_S_256x374_500_00_03_04.gray",
				    {256, 374, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002457_M_256x360_500_00_09_10.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002534_S_256x412_500_00_03_08.gray",
				    {256, 412, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002449_N_312x436_500_00_03_08.gray",
				    {312, 436, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002541_N_302x485_500_00_03_02.gray",
				    {302, 485, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002560_S_258x408_500_00_03_03.gray",
				    {258, 408, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002434_M_256x360_500_00_09_04.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002531_N_256x368_500_00_03_03.gray",
				    {256, 368, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002457_A_512x512_500_41_05_02.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002555_N_303x433_500_00_03_03.gray",
				    {303, 433, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002445_M_256x360_500_00_09_10.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002458_S_256x454_500_00_03_07.gray",
				    {256, 454, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002433_A_512x512_500_41_05_05.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002433_S_291x487_500_00_03_04.gray",
				    {291, 487, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002516_N_308x471_500_00_03_03.gray",
				    {308, 471, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002550_N_256x494_500_00_03_03.gray",
				    {256, 494, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002495_N_313x457_500_00_03_09.gray",
				    {313, 457, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002542_S_256x448_500_00_03_09.gray",
				    {256, 448, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002448_U_1600x1500_1000_01_03_09.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002546_S_280x469_500_00_03_02.gray",
				    {280, 469, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002466_N_295x403_500_00_03_07.gray",
				    {295, 403, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002439_A_512x512_500_41_05_05.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002458_M_256x360_500_00_09_04.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002555_N_256x438_500_00_03_09.gray",
				    {256, 438, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002546_N_256x423_500_00_03_07.gray",
				    {256, 423, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002484_S_267x375_500_00_03_03.gray",
				    {267, 375, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002533_S_256x444_500_00_03_04.gray",
				    {256, 444, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002574_S_256x444_500_00_03_02.gray",
				    {256, 444, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002574_N_299x480_500_00_03_03.gray",
				    {299, 480, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002445_U_1600x1500_1000_01_03_10.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftLittle}},
				{"00002502_S_256x376_500_00_03_03.gray",
				    {256, 376, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002434_M_256x360_500_00_09_03.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002466_N_277x477_500_00_03_09.gray",
				    {277, 477, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"canary_500x500_500_29_00_00.gray",
				    {500, 500, 500,
				    Impression::Unknown,
				    FrictionRidgeCaptureTechnology::
				        Unknown,
				    FrictionRidgeGeneralizedPosition::
				        Unknown}},
				{"00002578_S_256x421_500_00_03_02.gray",
				    {256, 421, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002521_S_298x520_500_00_03_04.gray",
				    {298, 520, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002535_S_273x447_500_00_03_04.gray",
				    {273, 447, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002574_N_256x422_500_00_03_08.gray",
				    {256, 422, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002448_A_512x512_500_41_05_01.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002456_N_274x409_500_00_03_07.gray",
				    {274, 409, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002515_N_256x415_500_00_03_02.gray",
				    {256, 415, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002458_S_256x437_500_00_03_09.gray",
				    {256, 437, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002480_N_317x453_500_00_03_03.gray",
				    {317, 453, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002535_S_277x464_500_00_03_07.gray",
				    {277, 464, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002456_A_512x512_500_41_05_07.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002439_U_1600x1500_1000_01_03_08.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002504_S_265x415_500_00_03_04.gray",
				    {265, 415, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002445_A_512x512_500_41_05_09.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002456_A_512x512_500_41_05_05.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002574_S_256x468_500_00_03_04.gray",
				    {256, 468, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002533_N_313x475_500_00_03_04.gray",
				    {313, 475, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002480_N_334x463_500_00_03_02.gray",
				    {334, 463, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002537_S_256x310_500_00_03_07.gray",
				    {256, 310, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002534_S_256x380_500_00_03_02.gray",
				    {256, 380, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002547_N_256x431_500_00_03_04.gray",
				    {256, 431, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002457_A_512x512_500_41_05_09.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002497_S_284x386_500_00_03_03.gray",
				    {284, 386, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002472_N_311x384_500_00_03_02.gray",
				    {311, 384, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002547_S_266x483_500_00_03_03.gray",
				    {266, 483, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002504_S_289x435_500_00_03_03.gray",
				    {289, 435, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002541_N_283x453_500_00_03_08.gray",
				    {283, 453, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002445_U_1600x1500_1000_01_03_02.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002434_A_512x512_500_41_05_05.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002435_A_512x512_500_41_05_02.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002571_N_317x501_500_00_03_09.gray",
				    {317, 501, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002484_S_256x352_500_00_03_08.gray",
				    {256, 352, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002480_S_283x445_500_00_03_09.gray",
				    {283, 445, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002571_S_256x458_500_00_03_04.gray",
				    {256, 458, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002560_N_263x432_500_00_03_08.gray",
				    {263, 432, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002435_N_264x490_500_00_03_09.gray",
				    {264, 490, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002569_N_258x467_500_00_03_08.gray",
				    {258, 467, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002533_S_256x380_500_00_03_09.gray",
				    {256, 380, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002495_S_268x437_500_00_03_07.gray",
				    {268, 437, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002556_S_256x346_500_00_03_02.gray",
				    {256, 346, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002448_U_1600x1500_1000_01_03_07.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002434_S_268x426_500_00_03_04.gray",
				    {268, 426, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002434_U_1600x1500_1000_01_03_01.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002571_N_324x556_500_00_03_03.gray",
				    {324, 556, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002445_U_1600x1500_1000_01_03_06.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftThumb}},
				{"00002537_N_315x399_500_00_03_02.gray",
				    {315, 399, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002497_N_280x412_500_00_03_08.gray",
				    {280, 412, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002434_A_512x512_500_41_05_03.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002541_N_259x447_500_00_03_07.gray",
				    {259, 447, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002495_N_336x463_500_00_03_07.gray",
				    {336, 463, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002488_N_310x508_500_00_03_09.gray",
				    {310, 508, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002472_S_256x381_500_00_03_07.gray",
				    {256, 381, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002457_N_294x438_500_00_03_07.gray",
				    {294, 438, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002537_S_256x375_500_00_03_09.gray",
				    {256, 375, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002484_S_275x361_500_00_03_07.gray",
				    {275, 361, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002433_U_1600x1500_1000_01_03_05.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002504_N_282x461_500_00_03_04.gray",
				    {282, 461, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002458_U_1600x1500_1000_01_03_04.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002571_S_270x487_500_00_03_03.gray",
				    {270, 487, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002439_U_1600x1500_1000_01_03_09.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002551_N_256x425_500_00_03_09.gray",
				    {256, 425, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002448_N_256x397_500_00_03_03.gray",
				    {256, 397, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002560_S_256x401_500_00_03_07.gray",
				    {256, 401, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002435_S_256x350_500_00_03_02.gray",
				    {256, 350, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002531_N_269x430_500_00_03_04.gray",
				    {269, 430, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002433_M_256x360_500_00_09_05.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightLittle}},
				{"00002504_N_320x470_500_00_03_07.gray",
				    {320, 470, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002466_N_325x460_500_00_03_04.gray",
				    {325, 460, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002550_S_256x401_500_00_03_09.gray",
				    {256, 401, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002445_S_256x483_500_00_03_08.gray",
				    {256, 483, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002439_N_330x381_500_00_03_03.gray",
				    {330, 381, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002448_U_1600x1500_1000_01_03_01.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002569_S_267x411_500_00_03_07.gray",
				    {267, 411, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002579_S_279x461_500_00_03_08.gray",
				    {279, 461, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002445_N_279x430_500_00_03_02.gray",
				    {279, 430, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002569_S_256x427_500_00_03_02.gray",
				    {256, 427, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002555_S_256x468_500_00_03_08.gray",
				    {256, 468, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002555_N_256x427_500_00_03_02.gray",
				    {256, 427, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002516_N_315x469_500_00_03_08.gray",
				    {315, 469, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002578_S_256x446_500_00_03_03.gray",
				    {256, 446, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
				{"00002558_N_348x559_500_00_03_04.gray",
				    {348, 559, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002456_A_512x512_500_41_05_01.gray",
				    {512, 512, 500,
				    Impression::RolledContactlessMoving,
				    FrictionRidgeCaptureTechnology::
				        OpticalDirect,
				    FrictionRidgeGeneralizedPosition::
				        RightThumb}},
				{"00002445_M_256x360_500_00_09_02.gray",
				    {256, 360, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        Capacitive,
				    FrictionRidgeGeneralizedPosition::
				        RightIndex}},
				{"00002466_S_256x463_500_00_03_04.gray",
				    {256, 463, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002521_N_382x516_500_00_03_04.gray",
				    {382, 516, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightRing}},
				{"00002434_U_1600x1500_1000_01_03_07.gray",
				    {1600, 1500, 1000,
				    Impression::RolledContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftIndex}},
				{"00002449_S_293x450_500_00_03_09.gray",
				    {293, 450, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftRing}},
				{"00002472_S_256x382_500_00_03_08.gray",
				    {256, 382, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        LeftMiddle}},
				{"00002457_N_256x387_500_00_03_03.gray",
				    {256, 387, 500,
				    Impression::PlainContact,
				    FrictionRidgeCaptureTechnology::
				        OpticalTIRBright,
				    FrictionRidgeGeneralizedPosition::
				        RightMiddle}},
			};

			/** Validation matching pairs */
			const std::vector<std::pair<std::string, std::string>>
			    Pairs = {
				/* Mated */
				{"00002472_S_256x322_500_00_03_02.gray",
				    "00002472_N_311x384_500_00_03_02.gray"},
				{"00002472_S_256x344_500_00_03_03.gray",
				    "00002472_N_311x409_500_00_03_03.gray"},
				{"00002472_S_256x381_500_00_03_07.gray",
				    "00002472_N_294x455_500_00_03_07.gray"},
				{"00002472_S_256x364_500_00_03_04.gray",
				    "00002472_N_319x403_500_00_03_04.gray"},
				{"00002472_S_256x382_500_00_03_08.gray",
				    "00002472_N_310x420_500_00_03_08.gray"},
				{"00002472_S_256x394_500_00_03_09.gray",
				    "00002472_N_335x454_500_00_03_09.gray"},
				{"00002466_S_275x439_500_00_03_02.gray",
				    "00002466_N_290x427_500_00_03_02.gray"},
				{"00002466_S_263x489_500_00_03_03.gray",
				    "00002466_N_316x475_500_00_03_03.gray"},
				{"00002466_S_288x420_500_00_03_07.gray",
				    "00002466_N_295x403_500_00_03_07.gray"},
				{"00002466_S_256x463_500_00_03_04.gray",
				    "00002466_N_325x460_500_00_03_04.gray"},
				{"00002466_S_258x445_500_00_03_08.gray",
				    "00002466_N_288x468_500_00_03_08.gray"},
				{"00002466_S_256x442_500_00_03_09.gray",
				    "00002466_N_277x477_500_00_03_09.gray"},
				{"00002495_S_271x435_500_00_03_02.gray",
				    "00002495_N_357x419_500_00_03_02.gray"},
				{"00002495_S_336x493_500_00_03_03.gray",
				    "00002495_N_367x378_500_00_03_03.gray"},
				{"00002495_S_268x437_500_00_03_07.gray",
				    "00002495_N_336x463_500_00_03_07.gray"},
				{"00002495_S_290x513_500_00_03_04.gray",
				    "00002495_N_321x394_500_00_03_04.gray"},
				{"00002495_S_291x455_500_00_03_08.gray",
				    "00002495_N_325x413_500_00_03_08.gray"},
				{"00002495_S_286x455_500_00_03_09.gray",
				    "00002495_N_313x457_500_00_03_09.gray"},
				{"00002497_S_293x414_500_00_03_02.gray",
				    "00002497_N_270x359_500_00_03_02.gray"},
				{"00002497_S_284x386_500_00_03_03.gray",
				    "00002497_N_323x455_500_00_03_03.gray"},
				{"00002497_S_293x420_500_00_03_07.gray",
				    "00002497_N_256x347_500_00_03_07.gray"},
				{"00002497_S_302x428_500_00_03_04.gray",
				    "00002497_N_265x276_500_00_03_04.gray"},
				{"00002497_S_278x409_500_00_03_08.gray",
				    "00002497_N_280x412_500_00_03_08.gray"},
				{"00002497_S_301x494_500_00_03_09.gray",
				    "00002497_N_317x520_500_00_03_09.gray"},
				{"00002571_S_283x446_500_00_03_02.gray",
				    "00002571_N_312x487_500_00_03_02.gray"},
				{"00002571_S_270x487_500_00_03_03.gray",
				    "00002571_N_324x556_500_00_03_03.gray"},
				{"00002571_S_290x482_500_00_03_07.gray",
				    "00002571_N_329x527_500_00_03_07.gray"},
				{"00002571_S_256x458_500_00_03_04.gray",
				    "00002571_N_302x477_500_00_03_04.gray"},
				{"00002571_S_256x504_500_00_03_08.gray",
				    "00002571_N_337x513_500_00_03_08.gray"},
				{"00002571_S_267x515_500_00_03_09.gray",
				    "00002571_N_317x501_500_00_03_09.gray"},
				{"00002558_S_313x499_500_00_03_02.gray",
				    "00002558_N_324x452_500_00_03_02.gray"},
				{"00002558_S_286x509_500_00_03_03.gray",
				    "00002558_N_298x489_500_00_03_03.gray"},
				{"00002558_S_313x420_500_00_03_07.gray",
				    "00002558_N_306x488_500_00_03_07.gray"},
				{"00002558_S_267x490_500_00_03_04.gray",
				    "00002558_N_348x559_500_00_03_04.gray"},
				{"00002558_S_265x434_500_00_03_08.gray",
				    "00002558_N_272x450_500_00_03_08.gray"},
				{"00002558_S_256x436_500_00_03_09.gray",
				    "00002558_N_303x492_500_00_03_09.gray"},
				{"00002574_S_256x444_500_00_03_02.gray",
				    "00002574_N_258x455_500_00_03_02.gray"},
				{"00002574_S_256x454_500_00_03_03.gray",
				    "00002574_N_299x480_500_00_03_03.gray"},
				{"00002574_S_257x416_500_00_03_07.gray",
				    "00002574_N_256x395_500_00_03_07.gray"},
				{"00002574_S_256x468_500_00_03_04.gray",
				    "00002574_N_286x468_500_00_03_04.gray"},
				{"00002574_S_256x444_500_00_03_08.gray",
				    "00002574_N_256x422_500_00_03_08.gray"},
				{"00002574_S_256x470_500_00_03_09.gray",
				    "00002574_N_256x466_500_00_03_09.gray"},
				{"00002555_S_256x414_500_00_03_02.gray",
				    "00002555_N_256x427_500_00_03_02.gray"},
				{"00002555_S_256x413_500_00_03_03.gray",
				    "00002555_N_303x433_500_00_03_03.gray"},
				{"00002555_S_256x422_500_00_03_07.gray",
				    "00002555_N_256x356_500_00_03_07.gray"},
				{"00002555_S_256x474_500_00_03_04.gray",
				    "00002555_N_302x512_500_00_03_04.gray"},
				{"00002555_S_256x468_500_00_03_08.gray",
				    "00002555_N_256x461_500_00_03_08.gray"},
				{"00002555_S_256x492_500_00_03_09.gray",
				    "00002555_N_256x438_500_00_03_09.gray"},
				{"00002578_S_256x421_500_00_03_02.gray",
				    "00002578_N_267x446_500_00_03_02.gray"},
				{"00002578_S_256x446_500_00_03_03.gray",
				    "00002578_N_293x434_500_00_03_03.gray"},
				{"00002578_S_256x432_500_00_03_07.gray",
				    "00002578_N_256x376_500_00_03_07.gray"},
				{"00002578_S_256x458_500_00_03_04.gray",
				    "00002578_N_271x466_500_00_03_04.gray"},
				{"00002578_S_279x475_500_00_03_08.gray",
				    "00002578_N_256x435_500_00_03_08.gray"},
				{"00002578_S_256x416_500_00_03_09.gray",
				    "00002578_N_266x408_500_00_03_09.gray"},
				{"00002579_S_99x99_500_00_03_02.gray",
				    "00002579_N_315x419_500_00_03_02.gray"},
				{"00002579_S_265x431_500_00_03_03.gray",
				    "00002579_N_336x452_500_00_03_03.gray"},
				{"00002579_S_292x465_500_00_03_07.gray",
				    "00002579_N_296x438_500_00_03_07.gray"},
				{"00002579_S_276x433_500_00_03_04.gray",
				    "00002579_N_329x433_500_00_03_04.gray"},
				{"00002579_S_279x461_500_00_03_08.gray",
				    "00002579_N_294x486_500_00_03_08.gray"},
				{"00002579_S_278x444_500_00_03_09.gray",
				    "00002579_N_311x490_500_00_03_09.gray"},
				{"00002550_S_256x484_500_00_03_02.gray",
				    "00002550_N_294x522_500_00_03_02.gray"},
				{"00002550_S_261x479_500_00_03_03.gray",
				    "00002550_N_256x494_500_00_03_03.gray"},
				{"00002550_S_256x503_500_00_03_07.gray",
				    "00002550_N_269x519_500_00_03_07.gray"},
				{"00002550_S_256x419_500_00_03_04.gray",
				    "00002550_N_275x533_500_00_03_04.gray"},
				{"00002550_S_256x465_500_00_03_08.gray",
				    "00002550_N_256x462_500_00_03_08.gray"},
				{"00002550_S_256x401_500_00_03_09.gray",
				    "00002550_N_259x505_500_00_03_09.gray"},
				{"00002551_S_256x383_500_00_03_02.gray",
				    "00002551_N_281x405_500_00_03_02.gray"},
				{"00002551_S_256x414_500_00_03_03.gray",
				    "00002551_N_268x449_500_00_03_03.gray"},
				{"00002551_S_257x402_500_00_03_07.gray",
				    "00002551_N_273x411_500_00_03_07.gray"},
				{"00002551_S_256x420_500_00_03_04.gray",
				    "00002551_N_256x420_500_00_03_04.gray"},
				{"00002551_S_256x450_500_00_03_08.gray",
				    "00002551_N_277x425_500_00_03_08.gray"},
				{"00002551_S_256x425_500_00_03_09.gray",
				    "00002551_N_256x425_500_00_03_09.gray"},
				{"00002537_S_256x345_500_00_03_02.gray",
				    "00002537_N_315x399_500_00_03_02.gray"},
				{"00002537_S_256x375_500_00_03_03.gray",
				    "00002537_N_318x422_500_00_03_03.gray"},
				{"00002537_S_256x310_500_00_03_07.gray",
				    "00002537_N_279x392_500_00_03_07.gray"},
				{"00002537_S_256x379_500_00_03_04.gray",
				    "00002537_N_322x413_500_00_03_04.gray"},
				{"00002537_S_256x367_500_00_03_08.gray",
				    "00002537_N_300x457_500_00_03_08.gray"},
				{"00002537_S_256x375_500_00_03_09.gray",
				    "00002537_N_294x439_500_00_03_09.gray"},
				{"00002534_S_256x380_500_00_03_02.gray",
				    "00002534_N_256x390_500_00_03_02.gray"},
				{"00002534_S_256x352_500_00_03_03.gray",
				    "00002534_N_256x378_500_00_03_03.gray"},
				{"00002534_S_256x403_500_00_03_07.gray",
				    "00002534_N_256x367_500_00_03_07.gray"},
				{"00002534_S_256x388_500_00_03_04.gray",
				    "00002534_N_256x434_500_00_03_04.gray"},
				{"00002534_S_256x412_500_00_03_08.gray",
				    "00002534_N_256x412_500_00_03_08.gray"},
				{"00002534_S_256x418_500_00_03_09.gray",
				    "00002534_N_256x434_500_00_03_09.gray"},
				{"00002535_S_286x417_500_00_03_02.gray",
				    "00002535_N_302x417_500_00_03_02.gray"},
				{"00002535_S_279x428_500_00_03_03.gray",
				    "00002535_N_297x408_500_00_03_03.gray"},
				{"00002535_S_277x464_500_00_03_07.gray",
				    "00002535_N_308x468_500_00_03_07.gray"},
				{"00002535_S_273x447_500_00_03_04.gray",
				    "00002535_N_302x468_500_00_03_04.gray"},
				{"00002535_S_286x455_500_00_03_08.gray",
				    "00002535_N_325x408_500_00_03_08.gray"},
				{"00002535_S_290x444_500_00_03_09.gray",
				    "00002535_N_290x426_500_00_03_09.gray"},
				{"00002515_S_256x419_500_00_03_02.gray",
				    "00002515_N_256x415_500_00_03_02.gray"},
				{"00002515_S_256x440_500_00_03_03.gray",
				    "00002515_N_256x486_500_00_03_03.gray"},
				{"00002515_S_256x419_500_00_03_07.gray",
				    "00002515_N_256x412_500_00_03_07.gray"},
				{"00002515_S_256x425_500_00_03_04.gray",
				    "00002515_N_256x420_500_00_03_04.gray"},
				{"00002515_S_256x436_500_00_03_08.gray",
				    "00002515_N_256x427_500_00_03_08.gray"},
				{"00002515_S_256x425_500_00_03_09.gray",
				    "00002515_N_256x460_500_00_03_09.gray"},
				{"00002516_S_267x435_500_00_03_02.gray",
				    "00002516_N_266x469_500_00_03_02.gray"},
				{"00002516_S_261x436_500_00_03_03.gray",
				    "00002516_N_308x471_500_00_03_03.gray"},
				{"00002516_S_269x429_500_00_03_07.gray",
				    "00002516_N_287x433_500_00_03_07.gray"},
				{"00002516_S_256x420_500_00_03_04.gray",
				    "00002516_N_270x443_500_00_03_04.gray"},
				{"00002516_S_273x424_500_00_03_08.gray",
				    "00002516_N_315x469_500_00_03_08.gray"},
				{"00002516_S_256x431_500_00_03_09.gray",
				    "00002516_N_265x453_500_00_03_09.gray"},
				{"00002531_S_256x390_500_00_03_02.gray",
				    "00002531_N_256x393_500_00_03_02.gray"},
				{"00002531_S_256x374_500_00_03_03.gray",
				    "00002531_N_256x368_500_00_03_03.gray"},
				{"00002531_S_265x408_500_00_03_07.gray",
				    "00002531_N_256x363_500_00_03_07.gray"},
				{"00002531_S_256x420_500_00_03_04.gray",
				    "00002531_N_269x430_500_00_03_04.gray"},
				{"00002531_S_269x402_500_00_03_08.gray",
				    "00002531_N_271x360_500_00_03_08.gray"},
				{"00002531_S_261x420_500_00_03_09.gray",
				    "00002531_N_256x375_500_00_03_09.gray"},
				{"00002547_S_257x414_500_00_03_02.gray",
				    "00002547_N_256x452_500_00_03_02.gray"},
				{"00002547_S_266x483_500_00_03_03.gray",
				    "00002547_N_278x430_500_00_03_03.gray"},
				{"00002547_S_256x428_500_00_03_07.gray",
				    "00002547_N_256x474_500_00_03_07.gray"},
				{"00002547_S_256x433_500_00_03_04.gray",
				    "00002547_N_256x431_500_00_03_04.gray"},
				{"00002547_S_258x460_500_00_03_08.gray",
				    "00002547_N_299x452_500_00_03_08.gray"},
				{"00002547_S_256x478_500_00_03_09.gray",
				    "00002547_N_274x485_500_00_03_09.gray"},
				{"00002533_S_256x401_500_00_03_02.gray",
				    "00002533_N_319x439_500_00_03_02.gray"},
				{"00002533_S_256x391_500_00_03_03.gray",
				    "00002533_N_296x433_500_00_03_03.gray"},
				{"00002533_S_256x424_500_00_03_07.gray",
				    "00002533_N_272x528_500_00_03_07.gray"},
				{"00002533_S_256x444_500_00_03_04.gray",
				    "00002533_N_313x475_500_00_03_04.gray"},
				{"00002533_S_256x329_500_00_03_08.gray",
				    "00002533_N_296x514_500_00_03_08.gray"},
				{"00002533_S_256x380_500_00_03_09.gray",
				    "00002533_N_307x541_500_00_03_09.gray"},
				{"00002478_S_256x438_500_00_03_02.gray",
				    "00002478_N_324x468_500_00_03_02.gray"},
				{"00002478_S_256x461_500_00_03_03.gray",
				    "00002478_N_324x471_500_00_03_03.gray"},
				{"00002478_S_256x411_500_00_03_07.gray",
				    "00002478_N_311x445_500_00_03_07.gray"},
				{"00002478_S_256x405_500_00_03_04.gray",
				    "00002478_N_308x478_500_00_03_04.gray"},
				{"00002478_S_256x435_500_00_03_08.gray",
				    "00002478_N_256x482_500_00_03_08.gray"},
				{"00002478_S_256x404_500_00_03_09.gray",
				    "00002478_N_277x463_500_00_03_09.gray"},
				{"00002475_S_281x408_500_00_03_02.gray",
				    "00002475_N_316x374_500_00_03_02.gray"},
				{"00002475_S_277x454_500_00_03_03.gray",
				    "00002475_N_277x412_500_00_03_03.gray"},
				{"00002475_S_263x392_500_00_03_07.gray",
				    "00002475_N_312x388_500_00_03_07.gray"},
				{"00002475_S_264x421_500_00_03_04.gray",
				    "00002475_N_327x452_500_00_03_04.gray"},
				{"00002475_S_256x411_500_00_03_08.gray",
				    "00002475_N_296x432_500_00_03_08.gray"},
				{"00002475_S_256x431_500_00_03_09.gray",
				    "00002475_N_296x433_500_00_03_09.gray"},
				{"00002483_S_256x361_500_00_03_02.gray",
				    "00002483_N_272x445_500_00_03_02.gray"},
				{"00002483_S_256x374_500_00_03_03.gray",
				    "00002483_N_300x430_500_00_03_03.gray"},
				{"00002483_S_256x397_500_00_03_07.gray",
				    "00002483_N_256x412_500_00_03_07.gray"},
				{"00002483_S_256x410_500_00_03_04.gray",
				    "00002483_N_281x522_500_00_03_04.gray"},
				{"00002483_S_256x375_500_00_03_08.gray",
				    "00002483_N_256x403_500_00_03_08.gray"},
				{"00002483_S_256x442_500_00_03_09.gray",
				    "00002483_N_256x441_500_00_03_09.gray"},
				{"00002480_S_283x419_500_00_03_02.gray",
				    "00002480_N_334x463_500_00_03_02.gray"},
				{"00002480_S_288x459_500_00_03_03.gray",
				    "00002480_N_317x453_500_00_03_03.gray"},
				{"00002480_S_293x429_500_00_03_07.gray",
				    "00002480_N_318x452_500_00_03_07.gray"},
				{"00002480_S_268x468_500_00_03_04.gray",
				    "00002480_N_311x449_500_00_03_04.gray"},
				{"00002480_S_280x449_500_00_03_08.gray",
				    "00002480_N_295x429_500_00_03_08.gray"},
				{"00002480_S_283x445_500_00_03_09.gray",
				    "00002480_N_292x424_500_00_03_09.gray"},
				{"00002561_S_263x377_500_00_03_02.gray",
				    "00002561_N_319x391_500_00_03_02.gray"},
				{"00002561_S_256x382_500_00_03_03.gray",
				    "00002561_N_316x402_500_00_03_03.gray"},
				{"00002561_S_260x379_500_00_03_07.gray",
				    "00002561_N_301x413_500_00_03_07.gray"},
				{"00002561_S_256x363_500_00_03_04.gray",
				    "00002561_N_300x422_500_00_03_04.gray"},
				{"00002561_S_257x411_500_00_03_08.gray",
				    "00002561_N_322x405_500_00_03_08.gray"},
				{"00002561_S_256x384_500_00_03_09.gray",
				    "00002561_N_303x427_500_00_03_09.gray"},
				{"00002560_S_259x388_500_00_03_02.gray",
				    "00002560_N_331x447_500_00_03_02.gray"},
				{"00002560_S_258x408_500_00_03_03.gray",
				    "00002560_N_306x484_500_00_03_03.gray"},
				{"00002560_S_256x401_500_00_03_07.gray",
				    "00002560_N_311x453_500_00_03_07.gray"},
				{"00002560_S_268x396_500_00_03_04.gray",
				    "00002560_N_276x420_500_00_03_04.gray"},
				{"00002560_S_256x418_500_00_03_08.gray",
				    "00002560_N_263x432_500_00_03_08.gray"},
				{"00002560_S_256x419_500_00_03_09.gray",
				    "00002560_N_326x465_500_00_03_09.gray"},
				{"00002484_S_257x339_500_00_03_02.gray",
				    "00002484_N_292x362_500_00_03_02.gray"},
				{"00002484_S_267x375_500_00_03_03.gray",
				    "00002484_N_284x350_500_00_03_03.gray"},
				{"00002484_S_275x361_500_00_03_07.gray",
				    "00002484_N_280x330_500_00_03_07.gray"},
				{"00002484_S_273x386_500_00_03_04.gray",
				    "00002484_N_294x383_500_00_03_04.gray"},
				{"00002484_S_256x352_500_00_03_08.gray",
				    "00002484_N_266x361_500_00_03_08.gray"},
				{"00002484_S_256x337_500_00_03_09.gray",
				    "00002484_N_283x358_500_00_03_09.gray"},
				{"00002556_S_256x346_500_00_03_02.gray",
				    "00002556_N_266x437_500_00_03_02.gray"},
				{"00002556_S_256x373_500_00_03_03.gray",
				    "00002556_N_272x474_500_00_03_03.gray"},
				{"00002556_S_256x378_500_00_03_07.gray",
				    "00002556_N_263x414_500_00_03_07.gray"},
				{"00002556_S_256x432_500_00_03_04.gray",
				    "00002556_N_303x490_500_00_03_04.gray"},
				{"00002556_S_256x380_500_00_03_08.gray",
				    "00002556_N_269x467_500_00_03_08.gray"},
				{"00002556_S_256x388_500_00_03_09.gray",
				    "00002556_N_260x460_500_00_03_09.gray"},
				{"00002521_S_308x483_500_00_03_02.gray",
				    "00002521_N_344x490_500_00_03_02.gray"},
				{"00002521_S_313x524_500_00_03_03.gray",
				    "00002521_N_386x515_500_00_03_03.gray"},
				{"00002521_S_309x503_500_00_03_07.gray",
				    "00002521_N_361x490_500_00_03_07.gray"},
				{"00002521_S_298x520_500_00_03_04.gray",
				    "00002521_N_382x516_500_00_03_04.gray"},
				{"00002521_S_310x552_500_00_03_08.gray",
				    "00002521_N_334x512_500_00_03_08.gray"},
				{"00002521_S_259x474_500_00_03_09.gray",
				    "00002521_N_345x544_500_00_03_09.gray"},
				{"00002546_S_280x469_500_00_03_02.gray",
				    "00002546_N_294x441_500_00_03_02.gray"},
				{"00002546_S_283x471_500_00_03_03.gray",
				    "00002546_N_256x457_500_00_03_03.gray"},
				{"00002546_S_256x423_500_00_03_07.gray",
				    "00002546_N_256x423_500_00_03_07.gray"},
				{"00002546_S_273x471_500_00_03_04.gray",
				    "00002546_N_309x489_500_00_03_04.gray"},
				{"00002546_S_256x469_500_00_03_08.gray",
				    "00002546_N_256x450_500_00_03_08.gray"},
				{"00002546_S_256x385_500_00_03_09.gray",
				    "00002546_N_277x489_500_00_03_09.gray"},
				{"00002523_S_275x358_500_00_03_02.gray",
				    "00002523_N_256x308_500_00_03_02.gray"},
				{"00002523_S_271x388_500_00_03_03.gray",
				    "00002523_N_262x372_500_00_03_03.gray"},
				{"00002523_S_256x328_500_00_03_07.gray",
				    "00002523_N_307x321_500_00_03_07.gray"},
				{"00002523_S_260x372_500_00_03_04.gray",
				    "00002523_N_332x387_500_00_03_04.gray"},
				{"00002523_S_256x357_500_00_03_08.gray",
				    "00002523_N_301x336_500_00_03_08.gray"},
				{"00002523_S_267x374_500_00_03_09.gray",
				    "00002523_N_346x370_500_00_03_09.gray"},
				{"00002569_S_256x427_500_00_03_02.gray",
				    "00002569_N_305x420_500_00_03_02.gray"},
				{"00002569_S_290x485_500_00_03_03.gray",
				    "00002569_N_281x455_500_00_03_03.gray"},
				{"00002569_S_267x411_500_00_03_07.gray",
				    "00002569_N_256x424_500_00_03_07.gray"},
				{"00002569_S_258x412_500_00_03_04.gray",
				    "00002569_N_294x438_500_00_03_04.gray"},
				{"00002569_S_290x443_500_00_03_08.gray",
				    "00002569_N_258x467_500_00_03_08.gray"},
				{"00002569_S_277x412_500_00_03_09.gray",
				    "00002569_N_269x468_500_00_03_09.gray"},
				{"00002542_S_260x419_500_00_03_02.gray",
				    "00002542_N_282x477_500_00_03_02.gray"},
				{"00002542_S_256x429_500_00_03_03.gray",
				    "00002542_N_256x423_500_00_03_03.gray"},
				{"00002542_S_256x425_500_00_03_07.gray",
				    "00002542_N_282x461_500_00_03_07.gray"},
				{"00002542_S_256x441_500_00_03_04.gray",
				    "00002542_N_282x479_500_00_03_04.gray"},
				{"00002542_S_256x426_500_00_03_08.gray",
				    "00002542_N_303x442_500_00_03_08.gray"},
				{"00002542_S_256x448_500_00_03_09.gray",
				    "00002542_N_293x451_500_00_03_09.gray"},
				{"00002541_S_277x472_500_00_03_02.gray",
				    "00002541_N_302x485_500_00_03_02.gray"},
				{"00002541_S_257x502_500_00_03_03.gray",
				    "00002541_N_313x513_500_00_03_03.gray"},
				{"00002541_S_262x486_500_00_03_07.gray",
				    "00002541_N_259x447_500_00_03_07.gray"},
				{"00002541_S_256x491_500_00_03_04.gray",
				    "00002541_N_304x508_500_00_03_04.gray"},
				{"00002541_S_256x496_500_00_03_08.gray",
				    "00002541_N_283x453_500_00_03_08.gray"},
				{"00002541_S_256x470_500_00_03_09.gray",
				    "00002541_N_258x492_500_00_03_09.gray"},
				{"00002502_S_256x377_500_00_03_02.gray",
				    "00002502_N_256x327_500_00_03_02.gray"},
				{"00002502_S_256x376_500_00_03_03.gray",
				    "00002502_N_258x332_500_00_03_03.gray"},
				{"00002502_S_256x379_500_00_03_07.gray",
				    "00002502_N_298x446_500_00_03_07.gray"},
				{"00002502_S_256x378_500_00_03_04.gray",
				    "00002502_N_256x373_500_00_03_04.gray"},
				{"00002502_S_256x402_500_00_03_08.gray",
				    "00002502_N_280x427_500_00_03_08.gray"},
				{"00002502_S_256x369_500_00_03_09.gray",
				    "00002502_N_256x391_500_00_03_09.gray"},
				{"00002500_S_256x397_500_00_03_02.gray",
				    "00002500_N_276x386_500_00_03_02.gray"},
				{"00002500_S_256x409_500_00_03_03.gray",
				    "00002500_N_256x408_500_00_03_03.gray"},
				{"00002500_S_256x394_500_00_03_07.gray",
				    "00002500_N_256x373_500_00_03_07.gray"},
				{"00002500_S_256x399_500_00_03_04.gray",
				    "00002500_N_287x420_500_00_03_04.gray"},
				{"00002500_S_256x415_500_00_03_08.gray",
				    "00002500_N_256x400_500_00_03_08.gray"},
				{"00002500_S_256x378_500_00_03_09.gray",
				    "00002500_N_257x413_500_00_03_09.gray"},
				{"00002505_S_307x442_500_00_03_02.gray",
				    "00002505_N_331x443_500_00_03_02.gray"},
				{"00002505_S_321x486_500_00_03_03.gray",
				    "00002505_N_366x482_500_00_03_03.gray"},
				{"00002505_S_302x480_500_00_03_07.gray",
				    "00002505_N_283x363_500_00_03_07.gray"},
				{"00002505_S_305x454_500_00_03_04.gray",
				    "00002505_N_385x497_500_00_03_04.gray"},
				{"00002505_S_329x485_500_00_03_08.gray",
				    "00002505_N_259x386_500_00_03_08.gray"},
				{"00002505_S_301x463_500_00_03_09.gray",
				    "00002505_N_288x440_500_00_03_09.gray"},
				{"00002504_S_268x441_500_00_03_02.gray",
				    "00002504_N_310x458_500_00_03_02.gray"},
				{"00002504_S_289x435_500_00_03_03.gray",
				    "00002504_N_321x501_500_00_03_03.gray"},
				{"00002504_S_284x456_500_00_03_07.gray",
				    "00002504_N_320x470_500_00_03_07.gray"},
				{"00002504_S_265x415_500_00_03_04.gray",
				    "00002504_N_282x461_500_00_03_04.gray"},
				{"00002504_S_309x431_500_00_03_08.gray",
				    "00002504_N_286x481_500_00_03_08.gray"},
				{"00002504_S_264x482_500_00_03_09.gray",
				    "00002504_N_290x502_500_00_03_09.gray"},
				{"00002488_S_324x483_500_00_03_02.gray",
				    "00002488_N_365x494_500_00_03_02.gray"},
				{"00002488_S_296x482_500_00_03_03.gray",
				    "00002488_N_370x505_500_00_03_03.gray"},
				{"00002488_S_334x470_500_00_03_07.gray",
				    "00002488_N_316x459_500_00_03_07.gray"},
				{"00002488_S_296x461_500_00_03_04.gray",
				    "00002488_N_292x406_500_00_03_04.gray"},
				{"00002488_S_278x455_500_00_03_08.gray",
				    "00002488_N_334x487_500_00_03_08.gray"},
				{"00002488_S_276x476_500_00_03_09.gray",
				    "00002488_N_310x508_500_00_03_09.gray"},

				/* Same subject, different finger */
				{"00002448_A_512x512_500_41_05_07.gray",
				    "00002448_U_1600x1500_1000_01_03_06.gray"},
				{"00002449_A_512x512_500_41_05_09.gray",
				    "00002449_M_256x360_500_00_09_08.gray"},
				{"00002472_S_256x344_500_00_03_03.gray",
				    "00002472_N_335x454_500_00_03_09.gray"},
				{"00002445_A_512x512_500_41_05_03.gray",
				    "00002445_U_1600x1500_1000_01_03_07.gray"},
				{"00002466_S_256x442_500_00_03_09.gray",
				    "00002466_N_316x475_500_00_03_03.gray"},
				{"00002434_A_512x512_500_41_05_07.gray",
				    "00002434_U_1600x1500_1000_01_03_01.gray"},
				{"00002497_S_301x494_500_00_03_09.gray",
				    "00002497_N_323x455_500_00_03_03.gray"},
				{"00002571_S_270x487_500_00_03_03.gray",
				    "00002571_N_312x487_500_00_03_02.gray"},
				{"00002558_S_286x509_500_00_03_03.gray",
				    "00002558_N_306x488_500_00_03_07.gray"},
				{"00002574_S_257x416_500_00_03_07.gray",
				    "00002574_N_256x422_500_00_03_08.gray"},
				{"00002555_S_256x474_500_00_03_04.gray",
				    "00002555_N_256x427_500_00_03_02.gray"},
				{"00002578_S_256x446_500_00_03_03.gray",
				    "00002578_N_267x446_500_00_03_02.gray"},
				{"00002579_S_278x444_500_00_03_09.gray",
				    "00002579_N_329x433_500_00_03_04.gray"},
				{"00002550_S_256x484_500_00_03_02.gray",
				    "00002550_N_259x505_500_00_03_09.gray"},
				{"00002551_S_256x450_500_00_03_08.gray",
				    "00002551_N_256x425_500_00_03_09.gray"},
				{"00002537_S_256x310_500_00_03_07.gray",
				    "00002537_N_322x413_500_00_03_04.gray"},
				{"00002535_S_279x428_500_00_03_03.gray",
				    "00002535_N_290x426_500_00_03_09.gray"},
				{"00002515_S_256x419_500_00_03_02.gray",
				    "00002515_N_256x460_500_00_03_09.gray"},
				{"00002516_S_269x429_500_00_03_07.gray",
				    "00002516_N_270x443_500_00_03_04.gray"},
				{"00002531_S_269x402_500_00_03_08.gray",
				    "00002531_N_256x375_500_00_03_09.gray"},
				{"00002547_S_257x414_500_00_03_02.gray",
				    "00002547_N_278x430_500_00_03_03.gray"},
				{"00002435_A_512x512_500_41_05_01.gray",
				    "00002435_U_1600x1500_1000_01_03_10.gray"},
				{"00002478_S_256x405_500_00_03_04.gray",
				    "00002478_N_324x471_500_00_03_03.gray"},
				{"00002433_A_512x512_500_41_05_04.gray",
				    "00002433_M_256x360_500_00_09_05.gray"},
				{"00002457_A_512x512_500_41_05_10.gray",
				    "00002457_M_256x360_500_00_09_04.gray"},
				{"00002458_A_512x512_500_41_05_02.gray",
				    "00002458_M_256x360_500_00_09_03.gray"},
				{"00002439_A_512x512_500_41_05_09.gray",
				    "00002439_U_1600x1500_1000_01_03_06.gray"},
				{"00002475_S_277x454_500_00_03_03.gray",
				    "00002475_N_312x388_500_00_03_07.gray"},
				{"00002483_S_256x410_500_00_03_04.gray",
				    "00002483_N_256x441_500_00_03_09.gray"},
				{"00002480_S_293x429_500_00_03_07.gray",
				    "00002480_N_292x424_500_00_03_09.gray"},
				{"00002560_S_256x418_500_00_03_08.gray",
				    "00002560_N_331x447_500_00_03_02.gray"},
				{"00002556_S_256x346_500_00_03_02.gray",
				    "00002556_N_269x467_500_00_03_08.gray"},
				{"00002546_S_256x385_500_00_03_09.gray",
				    "00002546_N_294x441_500_00_03_02.gray"},
				{"00002523_S_260x372_500_00_03_04.gray",
				    "00002523_N_346x370_500_00_03_09.gray"},
				{"00002569_S_256x427_500_00_03_02.gray",
				    "00002569_N_281x455_500_00_03_03.gray"},
				{"00002542_S_256x426_500_00_03_08.gray",
				    "00002542_N_293x451_500_00_03_09.gray"},
				{"00002541_S_256x496_500_00_03_08.gray",
				    "00002541_N_259x447_500_00_03_07.gray"},
				{"00002500_S_256x397_500_00_03_02.gray",
				    "00002500_N_257x413_500_00_03_09.gray"},
				{"00002505_S_321x486_500_00_03_03.gray",
				    "00002505_N_288x440_500_00_03_09.gray"},
				{"00002504_S_289x435_500_00_03_03.gray",
				    "00002504_N_286x481_500_00_03_08.gray"},

				/* Same image */
				{"00002448_M_256x360_500_00_09_09.gray",
				    "00002448_M_256x360_500_00_09_09.gray"},
				{"00002449_S_302x436_500_00_03_03.gray",
				    "00002449_S_302x436_500_00_03_03.gray"},
				{"00002472_S_256x394_500_00_03_09.gray",
				    "00002472_S_256x394_500_00_03_09.gray"},
				{"00002445_M_256x360_500_00_09_10.gray",
				    "00002445_M_256x360_500_00_09_10.gray"},
				{"00002466_N_290x427_500_00_03_02.gray",
				    "00002466_N_290x427_500_00_03_02.gray"},
				{"00002434_N_277x475_500_00_03_08.gray",
				    "00002434_N_277x475_500_00_03_08.gray"},
				{"00002495_N_357x419_500_00_03_02.gray",
				    "00002495_N_357x419_500_00_03_02.gray"},
				{"00002497_N_265x276_500_00_03_04.gray",
				    "00002497_N_265x276_500_00_03_04.gray"},
				{"00002571_N_312x487_500_00_03_02.gray",
				    "00002571_N_312x487_500_00_03_02.gray"},
				{"00002558_S_286x509_500_00_03_03.gray",
				    "00002558_S_286x509_500_00_03_03.gray"},
				{"00002574_N_258x455_500_00_03_02.gray",
				    "00002574_N_258x455_500_00_03_02.gray"},
				{"00002555_S_256x414_500_00_03_02.gray",
				    "00002555_S_256x414_500_00_03_02.gray"},
				{"00002578_N_271x466_500_00_03_04.gray",
				    "00002578_N_271x466_500_00_03_04.gray"},
				{"00002579_N_311x490_500_00_03_09.gray",
				    "00002579_N_311x490_500_00_03_09.gray"},
				{"00002550_S_256x419_500_00_03_04.gray",
				    "00002550_S_256x419_500_00_03_04.gray"},
				{"00002551_S_256x450_500_00_03_08.gray",
				    "00002551_S_256x450_500_00_03_08.gray"},
				{"00002537_S_256x375_500_00_03_09.gray",
				    "00002537_S_256x375_500_00_03_09.gray"},
				{"00002534_S_256x412_500_00_03_08.gray",
				    "00002534_S_256x412_500_00_03_08.gray"},
				{"00002535_N_325x408_500_00_03_08.gray",
				    "00002535_N_325x408_500_00_03_08.gray"},
				{"00002515_N_256x427_500_00_03_08.gray",
				    "00002515_N_256x427_500_00_03_08.gray"},
				{"00002516_S_273x424_500_00_03_08.gray",
				    "00002516_S_273x424_500_00_03_08.gray"},
				{"00002531_S_261x420_500_00_03_09.gray",
				    "00002531_S_261x420_500_00_03_09.gray"},
				{"00002547_N_278x430_500_00_03_03.gray",
				    "00002547_N_278x430_500_00_03_03.gray"},
				{"00002533_S_256x444_500_00_03_04.gray",
				    "00002533_S_256x444_500_00_03_04.gray"},
				{"00002435_M_256x360_500_00_09_07.gray",
				    "00002435_M_256x360_500_00_09_07.gray"},
				{"00002478_S_256x461_500_00_03_03.gray",
				    "00002478_S_256x461_500_00_03_03.gray"},
				{"00002433_M_256x360_500_00_09_05.gray",
				    "00002433_M_256x360_500_00_09_05.gray"},
				{"00002457_N_276x448_500_00_03_04.gray",
				    "00002457_N_276x448_500_00_03_04.gray"},
				{"00002456_N_256x485_500_00_03_09.gray",
				    "00002456_N_256x485_500_00_03_09.gray"},
				{"00002458_A_512x512_500_41_05_09.gray",
				    "00002458_A_512x512_500_41_05_09.gray"},
				{"00002439_A_512x512_500_41_05_04.gray",
				    "00002439_A_512x512_500_41_05_04.gray"},
				{"00002475_N_312x388_500_00_03_07.gray",
				    "00002475_N_312x388_500_00_03_07.gray"},
				{"00002483_S_256x361_500_00_03_02.gray",
				    "00002483_S_256x361_500_00_03_02.gray"},
				{"00002480_N_334x463_500_00_03_02.gray",
				    "00002480_N_334x463_500_00_03_02.gray"},
				{"00002561_S_256x382_500_00_03_03.gray",
				    "00002561_S_256x382_500_00_03_03.gray"},
				{"00002560_S_256x418_500_00_03_08.gray",
				    "00002560_S_256x418_500_00_03_08.gray"},
				{"00002484_S_256x337_500_00_03_09.gray",
				    "00002484_S_256x337_500_00_03_09.gray"},
				{"00002556_S_256x346_500_00_03_02.gray",
				    "00002556_S_256x346_500_00_03_02.gray"},
				{"00002521_N_361x490_500_00_03_07.gray",
				    "00002521_N_361x490_500_00_03_07.gray"},
				{"00002546_N_256x423_500_00_03_07.gray",
				    "00002546_N_256x423_500_00_03_07.gray"},
				{"00002523_S_256x328_500_00_03_07.gray",
				    "00002523_S_256x328_500_00_03_07.gray"},
				{"00002569_N_305x420_500_00_03_02.gray",
				    "00002569_N_305x420_500_00_03_02.gray"},
				{"00002542_N_282x477_500_00_03_02.gray",
				    "00002542_N_282x477_500_00_03_02.gray"},
				{"00002541_N_302x485_500_00_03_02.gray",
				    "00002541_N_302x485_500_00_03_02.gray"},
				{"00002502_S_256x402_500_00_03_08.gray",
				    "00002502_S_256x402_500_00_03_08.gray"},
				{"00002500_S_256x415_500_00_03_08.gray",
				    "00002500_S_256x415_500_00_03_08.gray"},
				{"00002505_S_307x442_500_00_03_02.gray",
				    "00002505_S_307x442_500_00_03_02.gray"},
				{"00002504_S_289x435_500_00_03_03.gray",
				    "00002504_S_289x435_500_00_03_03.gray"},
				{"00002488_S_296x461_500_00_03_04.gray",
				    "00002488_S_296x461_500_00_03_04.gray"},

				/* Nonmated */
				{"00002547_N_299x452_500_00_03_08.gray",
				    "00002579_S_279x461_500_00_03_08.gray"},
				{"00002561_N_301x413_500_00_03_07.gray",
				    "00002571_S_290x482_500_00_03_07.gray"},
				{"00002495_S_268x437_500_00_03_07.gray",
				    "00002547_N_256x474_500_00_03_07.gray"},
				{"00002535_S_290x444_500_00_03_09.gray",
				    "00002550_S_256x401_500_00_03_09.gray"},
				{"00002541_S_277x472_500_00_03_02.gray",
				    "00002533_N_319x439_500_00_03_02.gray"},
				{"00002579_S_279x461_500_00_03_08.gray",
				    "00002502_N_280x427_500_00_03_08.gray"},
				{"00002534_S_256x412_500_00_03_08.gray",
				    "00002466_N_288x468_500_00_03_08.gray"},
				{"00002546_N_256x450_500_00_03_08.gray",
				    "00002521_S_310x552_500_00_03_08.gray"},
				{"00002497_S_301x494_500_00_03_09.gray",
				    "00002561_N_303x427_500_00_03_09.gray"},
				{"00002497_S_284x386_500_00_03_03.gray",
				    "00002483_S_256x374_500_00_03_03.gray"},
				{"00002546_S_256x469_500_00_03_08.gray",
				    "00002551_S_256x450_500_00_03_08.gray"},
				{"00002537_S_256x310_500_00_03_07.gray",
				    "00002435_A_512x512_500_41_05_07.gray"},
				{"00002435_U_1600x1500_1000_01_03_10.gray",
				    "00002458_M_256x360_500_00_09_10.gray"},
				{"00002472_N_310x420_500_00_03_08.gray",
				    "00002546_S_256x469_500_00_03_08.gray"},
				{"00002571_N_329x527_500_00_03_07.gray",
				    "00002456_S_256x389_500_00_03_07.gray"},
				{"00002531_S_256x420_500_00_03_04.gray",
				    "00002523_S_260x372_500_00_03_04.gray"},
				{"00002439_M_256x360_500_00_09_05.gray",
				    "00002435_U_1600x1500_1000_01_03_05.gray"},
				{"00002495_N_321x394_500_00_03_04.gray",
				    "00002478_S_256x405_500_00_03_04.gray"},
				{"00002555_S_256x422_500_00_03_07.gray",
				    "00002458_U_1600x1500_1000_01_03_07.gray"},
				{"00002533_S_256x444_500_00_03_04.gray",
				    "00002456_U_1600x1500_1000_01_03_04.gray"},
				{"00002534_N_256x434_500_00_03_09.gray",
				    "00002500_N_257x413_500_00_03_09.gray"},
				{"00002521_N_386x515_500_00_03_03.gray",
				    "00002449_M_256x360_500_00_09_03.gray"},
				{"00002556_S_256x432_500_00_03_04.gray",
				    "00002480_N_311x449_500_00_03_04.gray"},
				{"00002556_N_303x490_500_00_03_04.gray",
				    "00002537_S_256x379_500_00_03_04.gray"},
				{"00002434_M_256x360_500_00_09_02.gray",
				    "00002497_S_293x414_500_00_03_02.gray"},
				{"00002579_S_292x465_500_00_03_07.gray",
				    "00002560_S_256x401_500_00_03_07.gray"},
				{"00002515_S_256x425_500_00_03_09.gray",
				    "00002535_S_290x444_500_00_03_09.gray"},
				{"00002550_N_294x522_500_00_03_02.gray",
				    "00002537_S_256x345_500_00_03_02.gray"},
				{"00002448_N_256x397_500_00_03_03.gray",
				    "00002533_S_256x391_500_00_03_03.gray"},
				{"00002534_S_256x412_500_00_03_08.gray",
				    "00002478_S_256x435_500_00_03_08.gray"},
				{"00002502_S_256x377_500_00_03_02.gray",
				    "00002547_N_256x452_500_00_03_02.gray"},
				{"00002533_N_319x439_500_00_03_02.gray",
				    "00002484_S_257x339_500_00_03_02.gray"},
				{"00002472_S_256x364_500_00_03_04.gray",
				    "00002546_N_309x489_500_00_03_04.gray"},
				{"00002505_S_307x442_500_00_03_02.gray",
				    "00002561_N_319x391_500_00_03_02.gray"},
				{"00002502_N_256x327_500_00_03_02.gray",
				    "00002495_N_357x419_500_00_03_02.gray"},
				{"00002516_S_256x420_500_00_03_04.gray",
				    "00002560_S_268x396_500_00_03_04.gray"},
				{"00002515_N_256x412_500_00_03_07.gray",
				    "00002439_A_512x512_500_41_05_07.gray"},
				{"00002523_S_256x328_500_00_03_07.gray",
				    "00002475_N_312x388_500_00_03_07.gray"},
				{"00002495_S_286x455_500_00_03_09.gray",
				    "00002500_S_256x378_500_00_03_09.gray"},
				{"00002484_S_273x386_500_00_03_04.gray",
				    "00002516_S_256x420_500_00_03_04.gray"},
				{"00002558_N_298x489_500_00_03_03.gray",
				    "00002556_N_272x474_500_00_03_03.gray"},
				{"00002448_N_297x402_500_00_03_07.gray",
				    "00002483_S_256x397_500_00_03_07.gray"},
				{"00002561_S_263x377_500_00_03_02.gray",
				    "00002472_N_311x384_500_00_03_02.gray"},
				{"00002534_S_256x388_500_00_03_04.gray",
				    "00002578_S_256x458_500_00_03_04.gray"},
				{"00002550_N_259x505_500_00_03_09.gray",
				    "00002515_S_256x425_500_00_03_09.gray"},
				{"00002433_S_303x480_500_00_03_02.gray",
				    "00002445_S_269x440_500_00_03_02.gray"},
				{"00002560_N_331x447_500_00_03_02.gray",
				    "00002541_N_302x485_500_00_03_02.gray"},
				{"00002579_N_296x438_500_00_03_07.gray",
				    "00002434_U_1600x1500_1000_01_03_07.gray"},
				{"00002483_N_272x445_500_00_03_02.gray",
				    "00002556_N_266x437_500_00_03_02.gray"},
				{"00002434_U_1600x1500_1000_01_03_07.gray",
				    "00002495_S_268x437_500_00_03_07.gray"},
				{"00002502_S_256x402_500_00_03_08.gray",
				    "00002542_S_256x426_500_00_03_08.gray"},
				{"00002542_N_282x477_500_00_03_02.gray",
				    "00002497_S_293x414_500_00_03_02.gray"},
				{"00002466_N_288x468_500_00_03_08.gray",
				    "00002561_S_257x411_500_00_03_08.gray"},
				{"00002569_S_267x411_500_00_03_07.gray",
				    "00002504_N_320x470_500_00_03_07.gray"},
				{"00002558_N_348x559_500_00_03_04.gray",
				    "00002488_S_296x461_500_00_03_04.gray"},
				{"00002484_N_283x358_500_00_03_09.gray",
				    "00002555_S_256x492_500_00_03_09.gray"},
				{"00002533_S_256x424_500_00_03_07.gray",
				    "00002560_N_311x453_500_00_03_07.gray"},
				{"00002435_N_307x410_500_00_03_03.gray",
				    "00002495_S_336x493_500_00_03_03.gray"},
				{"00002571_S_256x504_500_00_03_08.gray",
				    "00002542_S_256x426_500_00_03_08.gray"},
				{"00002457_N_294x438_500_00_03_07.gray",
				    "00002480_S_293x429_500_00_03_07.gray"},
				{"00002484_S_257x339_500_00_03_02.gray",
				    "00002534_N_256x390_500_00_03_02.gray"},
				{"00002516_N_315x469_500_00_03_08.gray",
				    "00002500_N_256x400_500_00_03_08.gray"},
				{"00002558_N_272x450_500_00_03_08.gray",
				    "00002521_S_310x552_500_00_03_08.gray"},
				{"00002505_S_329x485_500_00_03_08.gray",
				    "00002560_N_263x432_500_00_03_08.gray"},
				{"00002569_N_258x467_500_00_03_08.gray",
				    "00002480_S_280x449_500_00_03_08.gray"},
				{"00002551_N_268x449_500_00_03_03.gray",
				    "00002574_N_299x480_500_00_03_03.gray"},
				{"00002542_S_256x441_500_00_03_04.gray",
				    "00002495_S_290x513_500_00_03_04.gray"},
				{"00002558_S_313x420_500_00_03_07.gray",
				    "00002561_S_260x379_500_00_03_07.gray"},
				{"00002515_S_256x425_500_00_03_09.gray",
				    "00002542_S_256x448_500_00_03_09.gray"},
				{"00002561_N_316x402_500_00_03_03.gray",
				    "00002556_S_256x373_500_00_03_03.gray"},
				{"00002480_N_292x424_500_00_03_09.gray",
				    "00002497_S_301x494_500_00_03_09.gray"},
				{"00002541_S_257x502_500_00_03_03.gray",
				    "00002497_S_284x386_500_00_03_03.gray"},
				{"00002435_S_256x357_500_00_03_04.gray",
				    "00002551_N_256x420_500_00_03_04.gray"},
				{"00002561_S_260x379_500_00_03_07.gray",
				    "00002555_N_256x356_500_00_03_07.gray"},
				{"00002542_N_282x477_500_00_03_02.gray",
				    "00002561_N_319x391_500_00_03_02.gray"},
				{"00002537_S_256x310_500_00_03_07.gray",
				    "00002466_N_295x403_500_00_03_07.gray"},
				{"00002439_N_299x440_500_00_03_07.gray",
				    "00002456_U_1600x1500_1000_01_03_07.gray"},
				{"00002500_N_287x420_500_00_03_04.gray",
				    "00002555_N_302x512_500_00_03_04.gray"},
				{"00002448_N_297x402_500_00_03_07.gray",
				    "00002537_N_279x392_500_00_03_07.gray"},
				{"00002551_S_256x425_500_00_03_09.gray",
				    "00002448_M_256x360_500_00_09_09.gray"},
				{"00002504_S_264x482_500_00_03_09.gray",
				    "00002449_N_325x482_500_00_03_09.gray"},
				{"00002497_S_301x494_500_00_03_09.gray",
				    "00002534_N_256x434_500_00_03_09.gray"},
				{"00002439_A_512x512_500_41_05_07.gray",
				    "00002434_A_512x512_500_41_05_07.gray"},
				{"00002546_N_256x450_500_00_03_08.gray",
				    "00002555_N_256x461_500_00_03_08.gray"},
				{"00002502_S_256x377_500_00_03_02.gray",
				    "00002531_N_256x393_500_00_03_02.gray"},
				{"00002558_S_256x436_500_00_03_09.gray",
				    "00002495_N_313x457_500_00_03_09.gray"},
				{"00002439_A_512x512_500_41_05_04.gray",
				    "00002466_S_256x463_500_00_03_04.gray"},
				{"00002484_S_257x339_500_00_03_02.gray",
				    "00002558_N_324x452_500_00_03_02.gray"},
				{"00002558_S_265x434_500_00_03_08.gray",
				    "00002505_S_329x485_500_00_03_08.gray"},
				{"00002504_S_268x441_500_00_03_02.gray",
				    "00002516_N_266x469_500_00_03_02.gray"},
				{"00002546_S_283x471_500_00_03_03.gray",
				    "00002488_S_296x482_500_00_03_03.gray"},
				{"00002484_N_284x350_500_00_03_03.gray",
				    "00002569_S_290x485_500_00_03_03.gray"},
				{"00002551_S_256x383_500_00_03_02.gray",
				    "00002579_N_315x419_500_00_03_02.gray"},
				{"00002523_N_262x372_500_00_03_03.gray",
				    "00002484_S_267x375_500_00_03_03.gray"},
				{"00002547_S_256x478_500_00_03_09.gray",
				    "00002445_U_1600x1500_1000_01_03_09.gray"},
				{"00002541_N_258x492_500_00_03_09.gray",
				    "00002571_N_317x501_500_00_03_09.gray"},
				{"00002555_N_256x461_500_00_03_08.gray",
				    "00002535_S_286x455_500_00_03_08.gray"},
				{"00002561_N_319x391_500_00_03_02.gray",
				    "00002555_N_256x427_500_00_03_02.gray"},
				{"00002535_S_277x464_500_00_03_07.gray",
				    "00002569_S_267x411_500_00_03_07.gray"},
				{"00002449_U_1600x1500_1000_01_03_08.gray",
				    "00002433_M_256x360_500_00_09_08.gray"},
				{"00002541_S_277x472_500_00_03_02.gray",
				    "00002550_S_256x484_500_00_03_02.gray"},
				{"00002547_N_274x485_500_00_03_09.gray",
				    "00002534_S_256x418_500_00_03_09.gray"},
				{"00002484_N_284x350_500_00_03_03.gray",
				    "00002448_A_512x512_500_41_05_03.gray"},
				{"00002569_S_258x412_500_00_03_04.gray",
				    "00002497_N_265x276_500_00_03_04.gray"},
				{"00002541_N_302x485_500_00_03_02.gray",
				    "00002556_S_256x346_500_00_03_02.gray"},
				{"00002472_N_319x403_500_00_03_04.gray",
				    "00002547_N_256x431_500_00_03_04.gray"},
				{"00002495_S_286x455_500_00_03_09.gray",
				    "00002484_N_283x358_500_00_03_09.gray"},
				{"00002439_A_512x512_500_41_05_07.gray",
				    "00002475_S_263x392_500_00_03_07.gray"},
				{"00002515_N_256x415_500_00_03_02.gray",
				    "00002578_N_267x446_500_00_03_02.gray"},
				{"00002480_S_268x468_500_00_03_04.gray",
				    "00002504_N_282x461_500_00_03_04.gray"},
				{"00002472_N_310x420_500_00_03_08.gray",
				    "00002449_N_312x436_500_00_03_08.gray"},
				{"00002550_N_275x533_500_00_03_04.gray",
				    "00002497_N_265x276_500_00_03_04.gray"},
				{"00002458_N_292x445_500_00_03_02.gray",
				    "00002521_N_344x490_500_00_03_02.gray"},
				{"00002433_A_512x512_500_41_05_09.gray",
				    "00002478_N_277x463_500_00_03_09.gray"},
				{"00002435_U_1600x1500_1000_01_03_01.gray",
				    "00002449_A_512x512_500_41_05_01.gray"},
				{"00002457_N_276x448_500_00_03_04.gray",
				    "00002534_S_256x388_500_00_03_04.gray"},
				{"00002504_S_264x482_500_00_03_09.gray",
				    "00002551_S_256x425_500_00_03_09.gray"},
				{"00002531_N_256x363_500_00_03_07.gray",
				    "00002439_M_256x360_500_00_09_07.gray"},
				{"00002533_N_272x528_500_00_03_07.gray",
				    "00002542_N_282x461_500_00_03_07.gray"},
				{"00002445_A_512x512_500_41_05_01.gray",
				    "00002449_M_256x360_500_00_09_01.gray"},
				{"00002516_N_287x433_500_00_03_07.gray",
				    "00002571_N_329x527_500_00_03_07.gray"},
				{"00002448_S_256x384_500_00_03_07.gray",
				    "00002579_S_292x465_500_00_03_07.gray"},
				{"00002579_N_311x490_500_00_03_09.gray",
				    "00002547_N_274x485_500_00_03_09.gray"},
				{"00002533_N_296x433_500_00_03_03.gray",
				    "00002561_N_316x402_500_00_03_03.gray"},
				{"00002478_S_256x461_500_00_03_03.gray",
				    "00002551_N_268x449_500_00_03_03.gray"},
				{"00002502_N_256x391_500_00_03_09.gray",
				    "00002434_S_257x411_500_00_03_09.gray"},
				{"00002445_S_272x442_500_00_03_07.gray",
				    "00002472_S_256x381_500_00_03_07.gray"},
				{"00002535_N_325x408_500_00_03_08.gray",
				    "00002495_S_291x455_500_00_03_08.gray"},
				{"00002488_N_334x487_500_00_03_08.gray",
				    "00002502_S_256x402_500_00_03_08.gray"},
				{"00002533_N_296x433_500_00_03_03.gray",
				    "00002472_S_256x344_500_00_03_03.gray"},
				{"00002502_S_256x376_500_00_03_03.gray",
				    "00002537_S_256x375_500_00_03_03.gray"},
				{"00002445_U_1600x1500_1000_01_03_04.gray",
				    "00002560_S_268x396_500_00_03_04.gray"},
				{"00002457_S_256x377_500_00_03_04.gray",
				    "00002434_S_268x426_500_00_03_04.gray"},
				{"00002541_N_283x453_500_00_03_08.gray",
				    "00002561_S_257x411_500_00_03_08.gray"},
				{"00002475_N_277x412_500_00_03_03.gray",
				    "00002434_U_1600x1500_1000_01_03_03.gray"},
				{"00002504_S_265x415_500_00_03_04.gray",
				    "00002541_S_256x491_500_00_03_04.gray"},
				{"00002537_S_256x379_500_00_03_04.gray",
				    "00002550_N_275x533_500_00_03_04.gray"},
				{"00002445_M_256x360_500_00_09_07.gray",
				    "00002541_N_259x447_500_00_03_07.gray"},
				{"00002500_N_256x373_500_00_03_07.gray",
				    "00002550_N_269x519_500_00_03_07.gray"},
				{"00002478_S_256x404_500_00_03_09.gray",
				    "00002435_S_256x415_500_00_03_09.gray"},
				{"00002483_S_256x375_500_00_03_08.gray",
				    "00002560_S_256x418_500_00_03_08.gray"},
				{"00002541_N_258x492_500_00_03_09.gray",
				    "00002458_A_512x512_500_41_05_09.gray"},
				{"00002466_N_325x460_500_00_03_04.gray",
				    "00002569_N_294x438_500_00_03_04.gray"},
				{"00002556_S_256x380_500_00_03_08.gray",
				    "00002472_N_310x420_500_00_03_08.gray"},
				{"00002560_S_258x408_500_00_03_03.gray",
				    "00002556_N_272x474_500_00_03_03.gray"},
				{"00002500_N_256x408_500_00_03_03.gray",
				    "00002578_S_256x446_500_00_03_03.gray"},
				{"00002483_S_256x410_500_00_03_04.gray",
				    "00002472_N_319x403_500_00_03_04.gray"},
				{"00002466_S_258x445_500_00_03_08.gray",
				    "00002478_S_256x435_500_00_03_08.gray"},
				{"00002531_N_271x360_500_00_03_08.gray",
				    "00002537_N_300x457_500_00_03_08.gray"},
				{"00002456_M_256x360_500_00_09_09.gray",
				    "00002574_S_256x470_500_00_03_09.gray"},
				{"00002561_S_256x382_500_00_03_03.gray",
				    "00002472_N_311x409_500_00_03_03.gray"},
				{"00002571_N_329x527_500_00_03_07.gray",
				    "00002480_N_318x452_500_00_03_07.gray"},
				{"00002480_N_318x452_500_00_03_07.gray",
				    "00002500_N_256x373_500_00_03_07.gray"},
				{"00002466_N_290x427_500_00_03_02.gray",
				    "00002578_S_256x421_500_00_03_02.gray"},
				{"00002534_S_256x380_500_00_03_02.gray",
				    "00002541_N_302x485_500_00_03_02.gray"},
				{"00002456_M_256x360_500_00_09_02.gray",
				    "00002445_U_1600x1500_1000_01_03_02.gray"},
				{"00002516_S_256x431_500_00_03_09.gray",
				    "00002478_S_256x404_500_00_03_09.gray"},
				{"00002533_N_296x433_500_00_03_03.gray",
				    "00002439_S_287x438_500_00_03_03.gray"},
				{"00002534_S_256x418_500_00_03_09.gray",
				    "00002435_U_1600x1500_1000_01_03_09.gray"},
				{"00002488_S_278x455_500_00_03_08.gray",
				    "00002515_S_256x436_500_00_03_08.gray"},
				{"00002488_S_296x461_500_00_03_04.gray",
				    "00002537_N_322x413_500_00_03_04.gray"},
				{"00002502_S_256x377_500_00_03_02.gray",
				    "00002534_N_256x390_500_00_03_02.gray"},
				{"00002574_N_258x455_500_00_03_02.gray",
				    "00002555_S_256x414_500_00_03_02.gray"},
				{"00002551_N_256x425_500_00_03_09.gray",
				    "00002504_S_264x482_500_00_03_09.gray"},
				{"00002546_N_294x441_500_00_03_02.gray",
				    "00002533_N_319x439_500_00_03_02.gray"},
				{"00002558_S_267x490_500_00_03_04.gray",
				    "00002458_U_1600x1500_1000_01_03_04.gray"},
				{"00002558_S_313x499_500_00_03_02.gray",
				    "00002449_N_302x405_500_00_03_02.gray"},
				{"00002457_M_256x360_500_00_09_09.gray",
				    "00002495_N_313x457_500_00_03_09.gray"},
				{"00002505_N_331x443_500_00_03_02.gray",
				    "00002458_U_1600x1500_1000_01_03_02.gray"},
				{"00002484_N_283x358_500_00_03_09.gray",
				    "00002483_N_256x441_500_00_03_09.gray"},
				{"00002488_N_334x487_500_00_03_08.gray",
				    "00002433_U_1600x1500_1000_01_03_08.gray"},
				{"00002571_S_256x458_500_00_03_04.gray",
				    "00002541_S_256x491_500_00_03_04.gray"},
				{"00002439_A_512x512_500_41_05_08.gray",
				    "00002433_N_282x452_500_00_03_08.gray"},
				{"00002541_S_256x491_500_00_03_04.gray",
				    "00002504_S_265x415_500_00_03_04.gray"},
				{"00002531_S_256x390_500_00_03_02.gray",
				    "00002505_N_331x443_500_00_03_02.gray"},
				{"00002534_N_256x434_500_00_03_09.gray",
				    "00002541_S_256x470_500_00_03_09.gray"},
				{"00002574_S_256x444_500_00_03_08.gray",
				    "00002571_S_256x504_500_00_03_08.gray"},
				{"00002547_N_256x452_500_00_03_02.gray",
				    "00002502_S_256x377_500_00_03_02.gray"},
				{"00002488_N_316x459_500_00_03_07.gray",
				    "00002533_N_272x528_500_00_03_07.gray"},
				{"00002449_M_256x360_500_00_09_07.gray",
				    "00002502_S_256x379_500_00_03_07.gray"},
				{"00002457_U_1600x1500_1000_01_03_07.gray",
				    "00002500_S_256x394_500_00_03_07.gray"},
				{"00002547_N_256x452_500_00_03_02.gray",
				    "00002433_M_256x360_500_00_09_02.gray"},
				{"00002458_N_292x445_500_00_03_02.gray",
				    "00002433_S_303x480_500_00_03_02.gray"},
				{"00002537_N_294x439_500_00_03_09.gray",
				    "00002456_N_256x485_500_00_03_09.gray"},
				{"00002534_S_256x418_500_00_03_09.gray",
				    "00002502_S_256x369_500_00_03_09.gray"},
				{"00002550_S_261x479_500_00_03_03.gray",
				    "00002555_N_303x433_500_00_03_03.gray"},
				{"00002521_N_382x516_500_00_03_04.gray",
				    "00002500_N_287x420_500_00_03_04.gray"},
				{"00002546_N_309x489_500_00_03_04.gray",
				    "00002523_N_332x387_500_00_03_04.gray"},
				{"00002497_S_302x428_500_00_03_04.gray",
				    "00002435_A_512x512_500_41_05_04.gray"},
				{"00002561_N_319x391_500_00_03_02.gray",
				    "00002435_N_296x404_500_00_03_02.gray"},
				{"00002558_S_313x499_500_00_03_02.gray",
				    "00002480_S_283x419_500_00_03_02.gray"},
				{"00002504_N_282x461_500_00_03_04.gray",
				    "00002531_S_256x420_500_00_03_04.gray"},
				{"00002516_S_256x420_500_00_03_04.gray",
				    "00002497_N_265x276_500_00_03_04.gray"},
				{"00002466_N_316x475_500_00_03_03.gray",
				    "00002516_N_308x471_500_00_03_03.gray"},
				{"00002541_N_259x447_500_00_03_07.gray",
				    "00002483_N_256x412_500_00_03_07.gray"},
				{"00002531_N_269x430_500_00_03_04.gray",
				    "00002556_N_303x490_500_00_03_04.gray"},
				{"00002456_S_256x394_500_00_03_02.gray",
				    "00002579_S_99x99_500_00_03_02.gray"},
				{"00002551_N_281x405_500_00_03_02.gray",
				    "00002574_N_258x455_500_00_03_02.gray"},
				{"00002550_N_275x533_500_00_03_04.gray",
				    "00002445_M_256x360_500_00_09_04.gray"},
				{"00002561_N_316x402_500_00_03_03.gray",
				    "00002555_S_256x413_500_00_03_03.gray"},
				{"00002516_N_287x433_500_00_03_07.gray",
				    "00002497_S_293x420_500_00_03_07.gray"},
				{"00002434_M_256x360_500_00_09_01.gray",
				    "00002449_U_1600x1500_1000_01_03_01.gray"},
				{"00002569_N_258x467_500_00_03_08.gray",
				    "00002483_S_256x375_500_00_03_08.gray"},
				{"00002458_A_512x512_500_41_05_04.gray",
				    "00002483_S_256x410_500_00_03_04.gray"},
				{"00002472_N_310x420_500_00_03_08.gray",
				    "00002505_S_329x485_500_00_03_08.gray"},
				{"00002579_N_336x452_500_00_03_03.gray",
				    "00002433_U_1600x1500_1000_01_03_03.gray"},
				{"00002439_S_261x411_500_00_03_02.gray",
				    "00002535_S_286x417_500_00_03_02.gray"},
				{"00002558_N_303x492_500_00_03_09.gray",
				    "00002439_N_299x422_500_00_03_09.gray"},
				{"00002458_S_256x437_500_00_03_09.gray",
				    "00002556_S_256x388_500_00_03_09.gray"},
				{"00002434_A_512x512_500_41_05_04.gray",
				    "00002574_S_256x468_500_00_03_04.gray"},
				{"00002579_N_296x438_500_00_03_07.gray",
				    "00002547_S_256x428_500_00_03_07.gray"},
				{"00002547_S_256x433_500_00_03_04.gray",
				    "00002550_S_256x419_500_00_03_04.gray"},
				{"00002480_S_280x449_500_00_03_08.gray",
				    "00002541_N_283x453_500_00_03_08.gray"},
				{"00002560_N_311x453_500_00_03_07.gray",
				    "00002547_S_256x428_500_00_03_07.gray"},
				{"00002541_N_259x447_500_00_03_07.gray",
				    "00002449_U_1600x1500_1000_01_03_07.gray"},
				{"00002497_S_278x409_500_00_03_08.gray",
				    "00002457_U_1600x1500_1000_01_03_08.gray"},
				{"00002533_S_256x391_500_00_03_03.gray",
				    "00002537_N_318x422_500_00_03_03.gray"},
				{"00002456_N_268x478_500_00_03_03.gray",
				    "00002534_N_256x378_500_00_03_03.gray"},
				{"00002521_N_345x544_500_00_03_09.gray",
				    "00002550_N_259x505_500_00_03_09.gray"},
				{"00002495_S_336x493_500_00_03_03.gray",
				    "00002533_S_256x391_500_00_03_03.gray"},
				{"00002472_N_319x403_500_00_03_04.gray",
				    "00002516_S_256x420_500_00_03_04.gray"},
				{"00002531_N_271x360_500_00_03_08.gray",
				    "00002560_N_263x432_500_00_03_08.gray"},
				{"00002537_N_318x422_500_00_03_03.gray",
				    "00002456_U_1600x1500_1000_01_03_03.gray"},
				{"00002551_S_256x425_500_00_03_09.gray",
				    "00002472_N_335x454_500_00_03_09.gray"},
				{"00002516_S_267x435_500_00_03_02.gray",
				    "00002439_S_261x411_500_00_03_02.gray"},
				{"00002515_N_256x427_500_00_03_08.gray",
				    "00002555_N_256x461_500_00_03_08.gray"},
				{"00002483_N_256x441_500_00_03_09.gray",
				    "00002475_N_296x433_500_00_03_09.gray"},
				{"00002488_N_370x505_500_00_03_03.gray",
				    "00002478_N_324x471_500_00_03_03.gray"},
				{"00002578_N_267x446_500_00_03_02.gray",
				    "00002551_S_256x383_500_00_03_02.gray"},
				{"00002445_S_272x442_500_00_03_07.gray",
				    "00002456_M_256x360_500_00_09_07.gray"},
				{"00002541_N_304x508_500_00_03_04.gray",
				    "00002569_S_258x412_500_00_03_04.gray"},
				{"00002555_N_256x356_500_00_03_07.gray",
				    "00002433_A_512x512_500_41_05_07.gray"},
				{"00002569_S_256x427_500_00_03_02.gray",
				    "00002478_S_256x438_500_00_03_02.gray"},
				{"00002574_S_256x444_500_00_03_02.gray",
				    "00002448_S_256x396_500_00_03_02.gray"},
				{"00002466_S_258x445_500_00_03_08.gray",
				    "00002472_S_256x382_500_00_03_08.gray"},
				{"00002561_S_256x363_500_00_03_04.gray",
				    "00002574_N_286x468_500_00_03_04.gray"},
				{"00002483_S_256x361_500_00_03_02.gray",
				    "00002435_M_256x360_500_00_09_02.gray"},
				{"00002546_N_256x450_500_00_03_08.gray",
				    "00002533_S_256x329_500_00_03_08.gray"},
				{"00002456_A_512x512_500_41_05_05.gray",
				    "00002435_M_256x360_500_00_09_05.gray"},
				{"00002480_N_292x424_500_00_03_09.gray",
				    "00002449_U_1600x1500_1000_01_03_09.gray"},
				{"00002541_S_256x470_500_00_03_09.gray",
				    "00002547_N_274x485_500_00_03_09.gray"},
				{"00002480_N_317x453_500_00_03_03.gray",
				    "00002550_S_261x479_500_00_03_03.gray"},
				{"00002574_N_286x468_500_00_03_04.gray",
				    "00002578_S_256x458_500_00_03_04.gray"},
				{"00002457_M_256x360_500_00_09_03.gray",
				    "00002551_N_268x449_500_00_03_03.gray"},
				{"00002515_N_256x412_500_00_03_07.gray",
				    "00002448_A_512x512_500_41_05_07.gray"},
				{"00002569_S_290x443_500_00_03_08.gray",
				    "00002495_S_291x455_500_00_03_08.gray"},
				{"00002505_S_302x480_500_00_03_07.gray",
				    "00002574_S_257x416_500_00_03_07.gray"},
				{"00002574_S_256x468_500_00_03_04.gray",
				    "00002448_S_256x374_500_00_03_04.gray"},
				{"00002495_S_290x513_500_00_03_04.gray",
				    "00002537_S_256x379_500_00_03_04.gray"},
				{"00002523_S_275x358_500_00_03_02.gray",
				    "00002488_S_324x483_500_00_03_02.gray"},
				{"00002433_M_256x360_500_00_09_04.gray",
				    "00002551_S_256x420_500_00_03_04.gray"},
				{"00002516_N_266x469_500_00_03_02.gray",
				    "00002531_S_256x390_500_00_03_02.gray"},
				{"00002531_N_256x363_500_00_03_07.gray",
				    "00002537_S_256x310_500_00_03_07.gray"},
				{"00002504_N_282x461_500_00_03_04.gray",
				    "00002523_S_260x372_500_00_03_04.gray"},
				{"00002535_N_325x408_500_00_03_08.gray",
				    "00002579_N_294x486_500_00_03_08.gray"},
				{"00002569_N_281x455_500_00_03_03.gray",
				    "00002505_N_366x482_500_00_03_03.gray"},
				{"00002523_S_256x357_500_00_03_08.gray",
				    "00002456_U_1600x1500_1000_01_03_08.gray"},
				{"00002579_S_276x433_500_00_03_04.gray",
				    "00002483_S_256x410_500_00_03_04.gray"},
				{"00002484_S_257x339_500_00_03_02.gray",
				    "00002561_S_263x377_500_00_03_02.gray"},
				{"00002515_S_256x419_500_00_03_02.gray",
				    "00002483_S_256x361_500_00_03_02.gray"},
				{"00002574_S_257x416_500_00_03_07.gray",
				    "00002497_N_256x347_500_00_03_07.gray"},
				{"00002515_N_256x460_500_00_03_09.gray",
				    "00002574_N_256x466_500_00_03_09.gray"},
				{"00002457_U_1600x1500_1000_01_03_09.gray",
				    "00002547_N_274x485_500_00_03_09.gray"},
				{"00002497_N_256x347_500_00_03_07.gray",
				    "00002571_S_290x482_500_00_03_07.gray"},
				{"00002555_S_256x474_500_00_03_04.gray",
				    "00002488_N_292x406_500_00_03_04.gray"},
				{"00002534_S_256x418_500_00_03_09.gray",
				    "00002497_S_301x494_500_00_03_09.gray"},
				{"00002521_N_386x515_500_00_03_03.gray",
				    "00002579_N_336x452_500_00_03_03.gray"},
				{"00002433_S_291x487_500_00_03_04.gray",
				    "00002483_S_256x410_500_00_03_04.gray"},
				{"00002555_N_256x461_500_00_03_08.gray",
				    "00002488_N_334x487_500_00_03_08.gray"},
				{"00002556_S_256x373_500_00_03_03.gray",
				    "00002458_N_303x449_500_00_03_03.gray"},
				{"00002495_N_325x413_500_00_03_08.gray",
				    "00002533_N_296x514_500_00_03_08.gray"},
				{"00002542_S_256x425_500_00_03_07.gray",
				    "00002521_S_309x503_500_00_03_07.gray"},
				{"00002535_N_290x426_500_00_03_09.gray",
				    "00002457_S_256x347_500_00_03_09.gray"},
				{"00002542_N_282x477_500_00_03_02.gray",
				    "00002556_N_266x437_500_00_03_02.gray"},
				{"00002555_N_256x438_500_00_03_09.gray",
				    "00002561_S_256x384_500_00_03_09.gray"},
				{"00002480_S_293x429_500_00_03_07.gray",
				    "00002569_S_267x411_500_00_03_07.gray"},
				{"00002516_S_256x420_500_00_03_04.gray",
				    "00002556_N_303x490_500_00_03_04.gray"},
				{"00002484_N_283x358_500_00_03_09.gray",
				    "00002555_S_256x492_500_00_03_09.gray"},
				{"00002541_S_257x502_500_00_03_03.gray",
				    "00002435_U_1600x1500_1000_01_03_03.gray"},
				{"00002556_S_256x378_500_00_03_07.gray",
				    "00002521_S_309x503_500_00_03_07.gray"},
				{"00002560_S_256x418_500_00_03_08.gray",
				    "00002456_S_256x434_500_00_03_08.gray"},
				{"00002523_N_346x370_500_00_03_09.gray",
				    "00002484_S_256x337_500_00_03_09.gray"},
				{"00002537_N_300x457_500_00_03_08.gray",
				    "00002500_S_256x415_500_00_03_08.gray"},
				{"00002484_N_294x383_500_00_03_04.gray",
				    "00002521_N_382x516_500_00_03_04.gray"},
				{"00002449_S_302x436_500_00_03_03.gray",
				    "00002558_N_298x489_500_00_03_03.gray"},
				{"00002551_N_281x405_500_00_03_02.gray",
				    "00002483_N_272x445_500_00_03_02.gray"},
				{"00002458_A_512x512_500_41_05_03.gray",
				    "00002556_S_256x373_500_00_03_03.gray"},
				{"00002505_N_331x443_500_00_03_02.gray",
				    "00002579_N_315x419_500_00_03_02.gray"},
				{"00002480_N_318x452_500_00_03_07.gray",
				    "00002515_S_256x419_500_00_03_07.gray"},
				{"00002495_S_268x437_500_00_03_07.gray",
				    "00002558_N_306x488_500_00_03_07.gray"},
				{"00002458_S_292x447_500_00_03_04.gray",
				    "00002433_U_1600x1500_1000_01_03_04.gray"},
				{"00002502_N_298x446_500_00_03_07.gray",
				    "00002480_S_293x429_500_00_03_07.gray"},
				{"00002497_N_317x520_500_00_03_09.gray",
				    "00002555_N_256x438_500_00_03_09.gray"},
				{"00002480_S_283x419_500_00_03_02.gray",
				    "00002547_N_256x452_500_00_03_02.gray"},
				{"00002533_N_313x475_500_00_03_04.gray",
				    "00002435_A_512x512_500_41_05_04.gray"},
				{"00002466_S_288x420_500_00_03_07.gray",
				    "00002458_N_279x446_500_00_03_07.gray"},
				{"00002531_N_256x368_500_00_03_03.gray",
				    "00002478_S_256x461_500_00_03_03.gray"},
				{"00002535_S_286x417_500_00_03_02.gray",
				    "00002439_U_1600x1500_1000_01_03_02.gray"},
				{"00002515_S_256x425_500_00_03_04.gray",
				    "00002505_N_385x497_500_00_03_04.gray"},
				{"00002495_N_336x463_500_00_03_07.gray",
				    "00002458_U_1600x1500_1000_01_03_07.gray"},
				{"00002504_S_289x435_500_00_03_03.gray",
				    "00002558_S_286x509_500_00_03_03.gray"},
				{"00002472_S_256x364_500_00_03_04.gray",
				    "00002533_S_256x444_500_00_03_04.gray"},
				{"00002523_N_256x308_500_00_03_02.gray",
				    "00002500_S_256x397_500_00_03_02.gray"},
				{"00002546_N_277x489_500_00_03_09.gray",
				    "00002571_S_267x515_500_00_03_09.gray"},
				{"00002515_S_256x419_500_00_03_02.gray",
				    "00002533_S_256x401_500_00_03_02.gray"},
				{"00002521_S_298x520_500_00_03_04.gray",
				    "00002578_S_256x458_500_00_03_04.gray"},
				{"00002533_N_307x541_500_00_03_09.gray",
				    "00002475_S_256x431_500_00_03_09.gray"},
				{"00002483_N_256x412_500_00_03_07.gray",
				    "00002521_S_309x503_500_00_03_07.gray"},
				{"00002547_S_258x460_500_00_03_08.gray",
				    "00002561_S_257x411_500_00_03_08.gray"},
				{"00002542_S_260x419_500_00_03_02.gray",
				    "00002523_N_256x308_500_00_03_02.gray"},
				{"00002472_N_311x384_500_00_03_02.gray",
				    "00002534_N_256x390_500_00_03_02.gray"},
				{"00002556_S_256x373_500_00_03_03.gray",
				    "00002435_A_512x512_500_41_05_03.gray"},
				{"00002571_N_317x501_500_00_03_09.gray",
				    "00002516_N_265x453_500_00_03_09.gray"},
				{"00002521_N_382x516_500_00_03_04.gray",
				    "00002579_N_329x433_500_00_03_04.gray"},
				{"00002560_N_263x432_500_00_03_08.gray",
				    "00002484_S_256x352_500_00_03_08.gray"},
				{"00002456_S_256x394_500_00_03_02.gray",
				    "00002571_S_283x446_500_00_03_02.gray"},
				{"00002475_S_264x421_500_00_03_04.gray",
				    "00002537_S_256x379_500_00_03_04.gray"},
				{"00002550_N_259x505_500_00_03_09.gray",
				    "00002495_N_313x457_500_00_03_09.gray"},
				{"00002574_S_256x468_500_00_03_04.gray",
				    "00002435_M_256x360_500_00_09_04.gray"},
				{"00002521_N_361x490_500_00_03_07.gray",
				    "00002560_S_256x401_500_00_03_07.gray"},
				{"00002578_S_256x446_500_00_03_03.gray",
				    "00002448_M_256x360_500_00_09_03.gray"},
				{"00002515_N_256x412_500_00_03_07.gray",
				    "00002551_N_273x411_500_00_03_07.gray"},
				{"00002550_S_256x419_500_00_03_04.gray",
				    "00002555_N_302x512_500_00_03_04.gray"},
				{"00002560_N_263x432_500_00_03_08.gray",
				    "00002556_N_269x467_500_00_03_08.gray"},
				{"00002516_N_270x443_500_00_03_04.gray",
				    "00002497_N_265x276_500_00_03_04.gray"},
				{"00002433_A_512x512_500_41_05_08.gray",
				    "00002456_N_285x442_500_00_03_08.gray"},
				{"00002495_S_291x455_500_00_03_08.gray",
				    "00002571_N_337x513_500_00_03_08.gray"},
				{"00002535_S_286x455_500_00_03_08.gray",
				    "00002502_N_280x427_500_00_03_08.gray"},
				{"00002475_S_256x431_500_00_03_09.gray",
				    "00002502_N_256x391_500_00_03_09.gray"},
				{"00002488_S_334x470_500_00_03_07.gray",
				    "00002533_N_272x528_500_00_03_07.gray"},
				{"00002535_N_302x417_500_00_03_02.gray",
				    "00002541_N_302x485_500_00_03_02.gray"},
				{"00002578_N_293x434_500_00_03_03.gray",
				    "00002449_N_316x399_500_00_03_03.gray"},
				{"00002523_S_271x388_500_00_03_03.gray",
				    "00002537_S_256x375_500_00_03_03.gray"},
				{"00002516_S_256x431_500_00_03_09.gray",
				    "00002546_N_277x489_500_00_03_09.gray"},
				{"00002435_M_256x360_500_00_09_08.gray",
				    "00002521_N_334x512_500_00_03_08.gray"},
				{"00002483_S_256x375_500_00_03_08.gray",
				    "00002556_S_256x380_500_00_03_08.gray"},
				{"00002497_S_278x409_500_00_03_08.gray",
				    "00002574_S_256x444_500_00_03_08.gray"},
				{"00002448_N_256x397_500_00_03_03.gray",
				    "00002502_S_256x376_500_00_03_03.gray"},
				{"00002531_N_256x368_500_00_03_03.gray",
				    "00002484_S_267x375_500_00_03_03.gray"},
				{"00002497_N_265x276_500_00_03_04.gray",
				    "00002457_M_256x360_500_00_09_04.gray"},
				{"00002445_N_291x500_500_00_03_04.gray",
				    "00002541_N_304x508_500_00_03_04.gray"},
				{"00002445_N_256x441_500_00_03_09.gray",
				    "00002531_S_261x420_500_00_03_09.gray"},
				{"00002502_N_298x446_500_00_03_07.gray",
				    "00002531_N_256x363_500_00_03_07.gray"},
				{"00002475_N_296x433_500_00_03_09.gray",
				    "00002435_U_1600x1500_1000_01_03_09.gray"},
				{"00002542_N_282x479_500_00_03_04.gray",
				    "00002555_N_302x512_500_00_03_04.gray"},
				{"00002458_N_292x445_500_00_03_02.gray",
				    "00002523_N_256x308_500_00_03_02.gray"},
				{"00002480_S_280x449_500_00_03_08.gray",
				    "00002504_S_309x431_500_00_03_08.gray"},
				{"00002516_S_256x420_500_00_03_04.gray",
				    "00002472_N_319x403_500_00_03_04.gray"},
				{"00002515_S_256x425_500_00_03_09.gray",
				    "00002569_N_269x468_500_00_03_09.gray"},
				{"00002542_S_256x429_500_00_03_03.gray",
				    "00002547_N_278x430_500_00_03_03.gray"},
				{"00002571_N_302x477_500_00_03_04.gray",
				    "00002579_N_329x433_500_00_03_04.gray"},
				{"00002504_N_320x470_500_00_03_07.gray",
				    "00002523_S_256x328_500_00_03_07.gray"},
				{"00002497_N_265x276_500_00_03_04.gray",
				    "00002558_S_267x490_500_00_03_04.gray"},
				{"00002466_S_256x463_500_00_03_04.gray",
				    "00002433_M_256x360_500_00_09_04.gray"},
				{"00002484_S_256x337_500_00_03_09.gray",
				    "00002523_N_346x370_500_00_03_09.gray"},
				{"00002569_S_290x443_500_00_03_08.gray",
				    "00002579_N_294x486_500_00_03_08.gray"},
				{"00002542_N_293x451_500_00_03_09.gray",
				    "00002541_N_258x492_500_00_03_09.gray"},
				{"00002435_A_512x512_500_41_05_05.gray",
				    "00002434_U_1600x1500_1000_01_03_05.gray"},
				{"00002535_N_302x468_500_00_03_04.gray",
				    "00002534_S_256x388_500_00_03_04.gray"},
				{"00002516_S_256x431_500_00_03_09.gray",
				    "00002541_S_256x470_500_00_03_09.gray"},
				{"00002448_A_512x512_500_41_05_04.gray",
				    "00002445_M_256x360_500_00_09_04.gray"},
				{"00002434_N_320x437_500_00_03_02.gray",
				    "00002537_N_315x399_500_00_03_02.gray"},
				{"00002542_S_260x419_500_00_03_02.gray",
				    "00002472_N_311x384_500_00_03_02.gray"},
				{"00002546_S_273x471_500_00_03_04.gray",
				    "00002504_S_265x415_500_00_03_04.gray"},
				{"00002523_S_267x374_500_00_03_09.gray",
				    "00002505_S_301x463_500_00_03_09.gray"},
				{"00002579_S_278x444_500_00_03_09.gray",
				    "00002483_S_256x442_500_00_03_09.gray"},
				{"00002561_N_316x402_500_00_03_03.gray",
				    "00002542_N_256x423_500_00_03_03.gray"},
				{"00002541_S_257x502_500_00_03_03.gray",
				    "00002478_N_324x471_500_00_03_03.gray"},
				{"00002556_S_256x373_500_00_03_03.gray",
				    "00002516_N_308x471_500_00_03_03.gray"},
				{"00002578_N_271x466_500_00_03_04.gray",
				    "00002488_S_296x461_500_00_03_04.gray"},
				{"00002569_N_258x467_500_00_03_08.gray",
				    "00002484_S_256x352_500_00_03_08.gray"},
				{"00002435_M_256x360_500_00_09_03.gray",
				    "00002523_S_271x388_500_00_03_03.gray"},
				{"00002541_S_256x496_500_00_03_08.gray",
				    "00002449_N_312x436_500_00_03_08.gray"},
				{"00002578_N_267x446_500_00_03_02.gray",
				    "00002534_S_256x380_500_00_03_02.gray"},
				{"00002535_S_286x455_500_00_03_08.gray",
				    "00002434_U_1600x1500_1000_01_03_08.gray"},
				{"00002561_N_322x405_500_00_03_08.gray",
				    "00002521_S_310x552_500_00_03_08.gray"},
				{"00002483_S_256x442_500_00_03_09.gray",
				    "00002523_N_346x370_500_00_03_09.gray"},
				{"00002558_N_324x452_500_00_03_02.gray",
				    "00002556_N_266x437_500_00_03_02.gray"},
				{"00002448_A_512x512_500_41_05_04.gray",
				    "00002472_S_256x364_500_00_03_04.gray"},
				{"00002500_S_256x397_500_00_03_02.gray",
				    "00002435_A_512x512_500_41_05_02.gray"},
				{"00002551_N_277x425_500_00_03_08.gray",
				    "00002535_N_325x408_500_00_03_08.gray"},
				{"00002546_S_256x469_500_00_03_08.gray",
				    "00002521_S_310x552_500_00_03_08.gray"},
				{"00002504_N_321x501_500_00_03_03.gray",
				    "00002434_A_512x512_500_41_05_03.gray"},
				{"00002534_S_256x388_500_00_03_04.gray",
				    "00002535_N_302x468_500_00_03_04.gray"},
				{"00002579_S_278x444_500_00_03_09.gray",
				    "00002445_S_256x414_500_00_03_09.gray"},
				{"00002495_N_313x457_500_00_03_09.gray",
				    "00002556_N_260x460_500_00_03_09.gray"},
				{"00002488_S_334x470_500_00_03_07.gray",
				    "00002433_S_307x471_500_00_03_07.gray"},
				{"00002531_S_256x420_500_00_03_04.gray",
				    "00002574_S_256x468_500_00_03_04.gray"},
				{"00002504_S_309x431_500_00_03_08.gray",
				    "00002466_N_288x468_500_00_03_08.gray"},
				{"00002472_N_319x403_500_00_03_04.gray",
				    "00002560_N_276x420_500_00_03_04.gray"},
				{"00002523_N_262x372_500_00_03_03.gray",
				    "00002516_N_308x471_500_00_03_03.gray"},
				{"00002551_N_273x411_500_00_03_07.gray",
				    "00002434_M_256x360_500_00_09_07.gray"},
				{"00002579_N_336x452_500_00_03_03.gray",
				    "00002466_N_316x475_500_00_03_03.gray"},
				{"00002497_S_293x420_500_00_03_07.gray",
				    "00002456_S_256x389_500_00_03_07.gray"},
				{"00002505_N_259x386_500_00_03_08.gray",
				    "00002561_N_322x405_500_00_03_08.gray"},
				{"00002456_S_256x434_500_00_03_08.gray",
				    "00002495_N_325x413_500_00_03_08.gray"},
				{"00002480_N_311x449_500_00_03_04.gray",
				    "00002569_N_294x438_500_00_03_04.gray"},
				{"00002574_S_256x444_500_00_03_08.gray",
				    "00002448_N_280x404_500_00_03_08.gray"},
				{"00002556_S_256x373_500_00_03_03.gray",
				    "00002478_N_324x471_500_00_03_03.gray"},
				{"00002466_S_258x445_500_00_03_08.gray",
				    "00002579_S_279x461_500_00_03_08.gray"},
				{"00002523_N_346x370_500_00_03_09.gray",
				    "00002480_N_292x424_500_00_03_09.gray"},
				{"00002458_N_273x484_500_00_03_09.gray",
				    "00002535_S_290x444_500_00_03_09.gray"},
				{"00002521_N_345x544_500_00_03_09.gray",
				    "00002458_U_1600x1500_1000_01_03_09.gray"},
				{"00002500_S_256x394_500_00_03_07.gray",
				    "00002445_U_1600x1500_1000_01_03_07.gray"},
				{"00002574_S_256x470_500_00_03_09.gray",
				    "00002537_S_256x375_500_00_03_09.gray"},
				{"00002484_N_283x358_500_00_03_09.gray",
				    "00002558_S_256x436_500_00_03_09.gray"},
				{"00002571_N_302x477_500_00_03_04.gray",
				    "00002505_N_385x497_500_00_03_04.gray"},
				{"00002475_N_296x432_500_00_03_08.gray",
				    "00002555_N_256x461_500_00_03_08.gray"},
				{"00002542_S_256x448_500_00_03_09.gray",
				    "00002495_N_313x457_500_00_03_09.gray"},
				{"00002495_S_336x493_500_00_03_03.gray",
				    "00002561_S_256x382_500_00_03_03.gray"},
				{"00002480_S_293x429_500_00_03_07.gray",
				    "00002497_N_256x347_500_00_03_07.gray"},
				{"00002574_S_256x444_500_00_03_02.gray",
				    "00002555_N_256x427_500_00_03_02.gray"},
				{"00002457_U_1600x1500_1000_01_03_09.gray",
				    "00002484_S_256x337_500_00_03_09.gray"},
				{"00002546_S_273x471_500_00_03_04.gray",
				    "00002505_S_305x454_500_00_03_04.gray"},
				{"00002578_N_256x435_500_00_03_08.gray",
				    "00002555_N_256x461_500_00_03_08.gray"},
				{"00002571_S_270x487_500_00_03_03.gray",
				    "00002433_N_293x459_500_00_03_03.gray"},
				{"00002495_N_313x457_500_00_03_09.gray",
				    "00002483_N_256x441_500_00_03_09.gray"},
				{"00002502_S_256x379_500_00_03_07.gray",
				    "00002533_N_272x528_500_00_03_07.gray"},
				{"00002478_S_256x404_500_00_03_09.gray",
				    "00002533_S_256x380_500_00_03_09.gray"},
				{"00002435_A_512x512_500_41_05_08.gray",
				    "00002458_N_316x386_500_00_03_08.gray"},
				{"00002434_M_256x360_500_00_09_09.gray",
				    "00002488_N_310x508_500_00_03_09.gray"},
				{"00002478_S_256x461_500_00_03_03.gray",
				    "00002560_N_306x484_500_00_03_03.gray"},
				{"00002502_S_256x377_500_00_03_02.gray",
				    "00002497_N_270x359_500_00_03_02.gray"},
				{"00002475_S_277x454_500_00_03_03.gray",
				    "00002505_N_366x482_500_00_03_03.gray"},
				{"00002555_S_256x468_500_00_03_08.gray",
				    "00002551_S_256x450_500_00_03_08.gray"},
				{"00002434_A_512x512_500_41_05_08.gray",
				    "00002480_S_280x449_500_00_03_08.gray"},
				{"00002505_N_288x440_500_00_03_09.gray",
				    "00002569_N_269x468_500_00_03_09.gray"},
				{"00002515_S_256x425_500_00_03_04.gray",
				    "00002448_A_512x512_500_41_05_04.gray"},
				{"00002449_S_301x422_500_00_03_07.gray",
				    "00002571_N_329x527_500_00_03_07.gray"},
				{"00002537_S_256x367_500_00_03_08.gray",
				    "00002505_S_329x485_500_00_03_08.gray"},
				{"00002504_S_284x456_500_00_03_07.gray",
				    "00002445_A_512x512_500_41_05_07.gray"},
				{"00002495_S_271x435_500_00_03_02.gray",
				    "00002551_N_281x405_500_00_03_02.gray"},
				{"00002497_S_284x386_500_00_03_03.gray",
				    "00002483_S_256x374_500_00_03_03.gray"},
				{"00002558_N_324x452_500_00_03_02.gray",
				    "00002515_N_256x415_500_00_03_02.gray"},
				{"00002531_N_271x360_500_00_03_08.gray",
				    "00002546_N_256x450_500_00_03_08.gray"},
				{"00002556_S_256x378_500_00_03_07.gray",
				    "00002561_N_301x413_500_00_03_07.gray"},
				{"00002546_N_294x441_500_00_03_02.gray",
				    "00002488_S_324x483_500_00_03_02.gray"},
				{"00002505_S_329x485_500_00_03_08.gray",
				    "00002571_S_256x504_500_00_03_08.gray"},
				{"00002478_N_256x482_500_00_03_08.gray",
				    "00002558_S_265x434_500_00_03_08.gray"},
				{"00002531_S_256x374_500_00_03_03.gray",
				    "00002475_S_277x454_500_00_03_03.gray"},
				{"00002558_S_313x499_500_00_03_02.gray",
				    "00002523_S_275x358_500_00_03_02.gray"},
				{"00002571_N_337x513_500_00_03_08.gray",
				    "00002502_N_280x427_500_00_03_08.gray"},
				{"00002521_N_361x490_500_00_03_07.gray",
				    "00002502_S_256x379_500_00_03_07.gray"},
				{"00002534_N_256x367_500_00_03_07.gray",
				    "00002579_S_292x465_500_00_03_07.gray"},
				{"00002534_N_256x367_500_00_03_07.gray",
				    "00002480_N_318x452_500_00_03_07.gray"},
				{"00002449_U_1600x1500_1000_01_03_02.gray",
				    "00002555_S_256x414_500_00_03_02.gray"},
				{"00002558_S_286x509_500_00_03_03.gray",
				    "00002521_S_313x524_500_00_03_03.gray"},
				{"00002483_N_272x445_500_00_03_02.gray",
				    "00002569_N_305x420_500_00_03_02.gray"},
				{"00002480_N_317x453_500_00_03_03.gray",
				    "00002574_N_299x480_500_00_03_03.gray"},
				{"00002569_N_258x467_500_00_03_08.gray",
				    "00002505_N_259x386_500_00_03_08.gray"},
				{"00002495_S_286x455_500_00_03_09.gray",
				    "00002535_N_290x426_500_00_03_09.gray"},
				{"00002571_N_302x477_500_00_03_04.gray",
				    "00002537_S_256x379_500_00_03_04.gray"},
				{"00002457_M_256x360_500_00_09_09.gray",
				    "00002478_N_277x463_500_00_03_09.gray"},
				{"00002466_N_295x403_500_00_03_07.gray",
				    "00002551_S_257x402_500_00_03_07.gray"},
				{"00002502_N_256x391_500_00_03_09.gray",
				    "00002546_N_277x489_500_00_03_09.gray"},
				{"00002500_N_287x420_500_00_03_04.gray",
				    "00002555_S_256x474_500_00_03_04.gray"},
				{"00002502_N_280x427_500_00_03_08.gray",
				    "00002457_S_256x386_500_00_03_08.gray"},
				{"00002547_N_278x430_500_00_03_03.gray",
				    "00002571_N_324x556_500_00_03_03.gray"},
				{"00002483_N_300x430_500_00_03_03.gray",
				    "00002547_S_266x483_500_00_03_03.gray"},
				{"00002434_N_277x475_500_00_03_08.gray",
				    "00002550_S_256x465_500_00_03_08.gray"},
				{"00002537_N_279x392_500_00_03_07.gray",
				    "00002523_N_307x321_500_00_03_07.gray"},
				{"00002546_S_280x469_500_00_03_02.gray",
				    "00002561_S_263x377_500_00_03_02.gray"},
				{"00002560_S_256x419_500_00_03_09.gray",
				    "00002533_S_256x380_500_00_03_09.gray"},
				{"00002558_S_286x509_500_00_03_03.gray",
				    "00002457_M_256x360_500_00_09_03.gray"},
				{"00002445_U_1600x1500_1000_01_03_03.gray",
				    "00002516_N_308x471_500_00_03_03.gray"},
				{"00002578_S_256x416_500_00_03_09.gray",
				    "00002558_N_303x492_500_00_03_09.gray"},
				{"00002495_S_268x437_500_00_03_07.gray",
				    "00002484_N_280x330_500_00_03_07.gray"},
				{"00002541_S_256x491_500_00_03_04.gray",
				    "00002502_S_256x378_500_00_03_04.gray"},
				{"00002433_N_386x486_500_00_03_07.gray",
				    "00002571_S_290x482_500_00_03_07.gray"},
				{"00002569_S_267x411_500_00_03_07.gray",
				    "00002500_N_256x373_500_00_03_07.gray"},
				{"00002504_N_310x458_500_00_03_02.gray",
				    "00002457_S_256x366_500_00_03_02.gray"},
				{"00002475_S_263x392_500_00_03_07.gray",
				    "00002448_U_1600x1500_1000_01_03_07.gray"},
				{"00002502_S_256x376_500_00_03_03.gray",
				    "00002439_S_287x438_500_00_03_03.gray"},
				{"00002541_S_256x496_500_00_03_08.gray",
				    "00002521_N_334x512_500_00_03_08.gray"},
				{"00002521_S_310x552_500_00_03_08.gray",
				    "00002579_S_279x461_500_00_03_08.gray"},
				{"00002561_N_322x405_500_00_03_08.gray",
				    "00002504_N_286x481_500_00_03_08.gray"},
				{"00002579_N_296x438_500_00_03_07.gray",
				    "00002546_S_256x423_500_00_03_07.gray"},
				{"00002561_S_260x379_500_00_03_07.gray",
				    "00002445_N_319x415_500_00_03_07.gray"},
				{"00002533_N_296x433_500_00_03_03.gray",
				    "00002435_M_256x360_500_00_09_03.gray"},
				{"00002483_N_256x412_500_00_03_07.gray",
				    "00002445_N_319x415_500_00_03_07.gray"},
				{"00002484_N_292x362_500_00_03_02.gray",
				    "00002472_N_311x384_500_00_03_02.gray"},
				{"00002478_S_256x461_500_00_03_03.gray",
				    "00002561_S_256x382_500_00_03_03.gray"},
				{"00002500_N_276x386_500_00_03_02.gray",
				    "00002448_A_512x512_500_41_05_02.gray"},
				{"00002541_N_258x492_500_00_03_09.gray",
				    "00002488_S_276x476_500_00_03_09.gray"},
				{"00002531_N_256x375_500_00_03_09.gray",
				    "00002488_N_310x508_500_00_03_09.gray"},
				{"00002537_S_256x375_500_00_03_09.gray",
				    "00002551_N_256x425_500_00_03_09.gray"},
				{"00002535_N_290x426_500_00_03_09.gray",
				    "00002546_S_256x385_500_00_03_09.gray"},
				{"00002475_N_316x374_500_00_03_02.gray",
				    "00002555_N_256x427_500_00_03_02.gray"},
				{"00002578_S_279x475_500_00_03_08.gray",
				    "00002560_N_263x432_500_00_03_08.gray"},
				{"00002478_N_324x468_500_00_03_02.gray",
				    "00002537_N_315x399_500_00_03_02.gray"},
				{"00002531_S_256x390_500_00_03_02.gray",
				    "00002535_N_302x417_500_00_03_02.gray"},
				{"00002435_N_296x404_500_00_03_02.gray",
				    "00002504_N_310x458_500_00_03_02.gray"},
				{"00002495_N_313x457_500_00_03_09.gray",
				    "00002435_M_256x360_500_00_09_09.gray"},
				{"00002466_S_256x442_500_00_03_09.gray",
				    "00002445_A_512x512_500_41_05_09.gray"},
				{"00002578_N_293x434_500_00_03_03.gray",
				    "00002541_N_313x513_500_00_03_03.gray"},
				{"00002483_N_272x445_500_00_03_02.gray",
				    "00002458_U_1600x1500_1000_01_03_02.gray"},
				{"00002456_S_256x416_500_00_03_04.gray",
				    "00002458_N_322x503_500_00_03_04.gray"},
				{"00002574_S_256x468_500_00_03_04.gray",
				    "00002456_N_290x485_500_00_03_04.gray"},
				{"00002505_S_301x463_500_00_03_09.gray",
				    "00002466_S_256x442_500_00_03_09.gray"},
				{"00002556_N_266x437_500_00_03_02.gray",
				    "00002502_S_256x377_500_00_03_02.gray"},
				{"00002542_N_282x477_500_00_03_02.gray",
				    "00002555_S_256x414_500_00_03_02.gray"},
				{"00002560_S_256x401_500_00_03_07.gray",
				    "00002495_N_336x463_500_00_03_07.gray"},
				{"00002504_S_289x435_500_00_03_03.gray",
				    "00002551_S_256x414_500_00_03_03.gray"},
				{"00002558_S_256x436_500_00_03_09.gray",
				    "00002457_A_512x512_500_41_05_09.gray"},
				{"00002534_N_256x390_500_00_03_02.gray",
				    "00002483_N_272x445_500_00_03_02.gray"},
				{"00002534_N_256x412_500_00_03_08.gray",
				    "00002448_N_280x404_500_00_03_08.gray"},
				{"00002445_S_256x436_500_00_03_04.gray",
				    "00002435_U_1600x1500_1000_01_03_04.gray"},
				{"00002561_N_300x422_500_00_03_04.gray",
				    "00002537_S_256x379_500_00_03_04.gray"},
				{"00002449_N_325x482_500_00_03_09.gray",
				    "00002433_U_1600x1500_1000_01_03_09.gray"},
				{"00002445_N_268x453_500_00_03_03.gray",
				    "00002537_N_318x422_500_00_03_03.gray"},
				{"00002546_N_256x423_500_00_03_07.gray",
				    "00002561_S_260x379_500_00_03_07.gray"},
				{"00002560_S_256x401_500_00_03_07.gray",
				    "00002488_N_316x459_500_00_03_07.gray"},
				{"00002502_S_256x376_500_00_03_03.gray",
				    "00002534_S_256x352_500_00_03_03.gray"},
				{"00002505_S_305x454_500_00_03_04.gray",
				    "00002569_N_294x438_500_00_03_04.gray"},
				{"00002541_S_277x472_500_00_03_02.gray",
				    "00002480_S_283x419_500_00_03_02.gray"},
				{"00002550_S_261x479_500_00_03_03.gray",
				    "00002475_N_277x412_500_00_03_03.gray"},
				{"00002488_N_365x494_500_00_03_02.gray",
				    "00002555_S_256x414_500_00_03_02.gray"},
				{"00002480_S_280x449_500_00_03_08.gray",
				    "00002488_S_278x455_500_00_03_08.gray"},
				{"00002534_N_256x434_500_00_03_09.gray",
				    "00002435_N_264x490_500_00_03_09.gray"},
				{"00002537_N_315x399_500_00_03_02.gray",
				    "00002433_A_512x512_500_41_05_02.gray"},
				{"00002541_S_256x470_500_00_03_09.gray",
				    "00002502_N_256x391_500_00_03_09.gray"},
				{"00002500_S_256x415_500_00_03_08.gray",
				    "00002445_S_256x483_500_00_03_08.gray"},
				{"00002484_N_292x362_500_00_03_02.gray",
				    "00002558_N_324x452_500_00_03_02.gray"},
				{"00002495_N_336x463_500_00_03_07.gray",
				    "00002561_N_301x413_500_00_03_07.gray"},
				{"00002433_S_303x480_500_00_03_02.gray",
				    "00002547_S_257x414_500_00_03_02.gray"},
				{"00002504_S_284x456_500_00_03_07.gray",
				    "00002448_U_1600x1500_1000_01_03_07.gray"},
				{"00002558_N_306x488_500_00_03_07.gray",
				    "00002521_S_309x503_500_00_03_07.gray"},
				{"00002574_N_256x395_500_00_03_07.gray",
				    "00002433_A_512x512_500_41_05_07.gray"},
				{"00002433_M_256x360_500_00_09_03.gray",
				    "00002542_N_256x423_500_00_03_03.gray"},
				{"00002515_S_256x436_500_00_03_08.gray",
				    "00002504_S_309x431_500_00_03_08.gray"},
				{"00002433_U_1600x1500_1000_01_03_08.gray",
				    "00002515_N_256x427_500_00_03_08.gray"},
				{"00002457_A_512x512_500_41_05_02.gray",
				    "00002478_S_256x438_500_00_03_02.gray"},
				{"00002558_N_324x452_500_00_03_02.gray",
				    "00002480_N_334x463_500_00_03_02.gray"},
				{"00002555_N_256x356_500_00_03_07.gray",
				    "00002458_A_512x512_500_41_05_07.gray"},
				{"00002439_S_279x448_500_00_03_09.gray",
				    "00002560_S_256x419_500_00_03_09.gray"},
				{"00002515_N_256x460_500_00_03_09.gray",
				    "00002569_S_277x412_500_00_03_09.gray"},
				{"00002488_S_296x482_500_00_03_03.gray",
				    "00002448_U_1600x1500_1000_01_03_03.gray"},
				{"00002483_N_300x430_500_00_03_03.gray",
				    "00002475_S_277x454_500_00_03_03.gray"},
				{"00002555_S_256x474_500_00_03_04.gray",
				    "00002456_A_512x512_500_41_05_04.gray"},
				{"00002569_S_258x412_500_00_03_04.gray",
				    "00002466_N_325x460_500_00_03_04.gray"},
				{"00002449_M_256x360_500_00_09_02.gray",
				    "00002466_S_275x439_500_00_03_02.gray"},
				{"00002574_N_286x468_500_00_03_04.gray",
				    "00002555_N_302x512_500_00_03_04.gray"},
				{"00002542_S_260x419_500_00_03_02.gray",
				    "00002546_N_294x441_500_00_03_02.gray"},
				{"00002475_S_263x392_500_00_03_07.gray",
				    "00002542_N_282x461_500_00_03_07.gray"},
				{"00002504_S_289x435_500_00_03_03.gray",
				    "00002533_N_296x433_500_00_03_03.gray"},
				{"00002448_U_1600x1500_1000_01_03_04.gray",
				    "00002497_N_265x276_500_00_03_04.gray"},
				{"00002521_N_386x515_500_00_03_03.gray",
				    "00002558_S_286x509_500_00_03_03.gray"},
					{"00002500_N_256x373_500_00_03_07.gray",
				    "00002556_N_263x414_500_00_03_07.gray"},
				{"00002550_S_256x401_500_00_03_09.gray",
				    "00002521_S_259x474_500_00_03_09.gray"},
				{"00002457_N_256x387_500_00_03_03.gray",
				    "00002502_S_256x376_500_00_03_03.gray"},
				{"00002488_S_324x483_500_00_03_02.gray",
				    "00002569_N_305x420_500_00_03_02.gray"},
				{"00002502_N_280x427_500_00_03_08.gray",
				    "00002558_S_265x434_500_00_03_08.gray"},
				{"00002535_N_308x468_500_00_03_07.gray",
				    "00002571_S_290x482_500_00_03_07.gray"},
				{"00002488_S_324x483_500_00_03_02.gray",
				    "00002546_N_294x441_500_00_03_02.gray"},
				{"00002515_N_256x427_500_00_03_08.gray",
				    "00002502_S_256x402_500_00_03_08.gray"},
				{"00002516_N_265x453_500_00_03_09.gray",
				    "00002456_M_256x360_500_00_09_09.gray"},
				{"00002456_U_1600x1500_1000_01_03_08.gray",
				    "00002448_N_280x404_500_00_03_08.gray"},
				{"00002456_N_256x485_500_00_03_09.gray",
				    "00002571_N_317x501_500_00_03_09.gray"},
				{"00002578_S_279x475_500_00_03_08.gray",
				    "00002541_S_256x496_500_00_03_08.gray"},
				{"00002578_S_256x458_500_00_03_04.gray",
				    "00002537_S_256x379_500_00_03_04.gray"},
				{"00002531_N_256x375_500_00_03_09.gray",
				    "00002500_S_256x378_500_00_03_09.gray"},
				{"00002555_S_256x474_500_00_03_04.gray",
				    "00002547_S_256x433_500_00_03_04.gray"},
				{"00002516_N_287x433_500_00_03_07.gray",
				    "00002448_M_256x360_500_00_09_07.gray"},
				{"00002542_N_282x477_500_00_03_02.gray",
				    "00002502_S_256x377_500_00_03_02.gray"},
				{"00002523_N_346x370_500_00_03_09.gray",
				    "00002497_N_317x520_500_00_03_09.gray"},
				{"00002574_S_256x454_500_00_03_03.gray",
				    "00002515_N_256x486_500_00_03_03.gray"},
				{"00002495_S_286x455_500_00_03_09.gray",
				    "00002555_S_256x492_500_00_03_09.gray"},
				{"00002541_N_259x447_500_00_03_07.gray",
				    "00002535_S_277x464_500_00_03_07.gray"},
				{"00002500_S_256x399_500_00_03_04.gray",
				    "00002472_S_256x364_500_00_03_04.gray"},
				{"00002550_N_294x522_500_00_03_02.gray",
				    "00002456_U_1600x1500_1000_01_03_02.gray"},
				{"00002571_N_337x513_500_00_03_08.gray",
				    "00002579_N_294x486_500_00_03_08.gray"},
				{"00002547_S_256x433_500_00_03_04.gray",
				    "00002550_N_275x533_500_00_03_04.gray"},
				{"00002458_A_512x512_500_41_05_09.gray",
				    "00002497_N_317x520_500_00_03_09.gray"},
				{"00002533_N_272x528_500_00_03_07.gray",
				    "00002523_N_307x321_500_00_03_07.gray"},
				{"00002569_S_267x411_500_00_03_07.gray",
				    "00002531_N_256x363_500_00_03_07.gray"},
				{"00002542_N_282x477_500_00_03_02.gray",
				    "00002500_N_276x386_500_00_03_02.gray"},
				{"00002523_S_260x372_500_00_03_04.gray",
				    "00002531_N_269x430_500_00_03_04.gray"},
				{"00002488_S_276x476_500_00_03_09.gray",
				    "00002484_N_283x358_500_00_03_09.gray"},
				{"00002561_S_256x363_500_00_03_04.gray",
				    "00002515_N_256x420_500_00_03_04.gray"},
				{"00002546_S_256x469_500_00_03_08.gray",
				    "00002561_N_322x405_500_00_03_08.gray"},
				{"00002478_N_256x482_500_00_03_08.gray",
				    "00002551_N_277x425_500_00_03_08.gray"},
				{"00002505_N_366x482_500_00_03_03.gray",
				    "00002547_S_266x483_500_00_03_03.gray"},
				{"00002541_N_313x513_500_00_03_03.gray",
				    "00002478_S_256x461_500_00_03_03.gray"},
				{"00002531_S_256x374_500_00_03_03.gray",
				    "00002434_U_1600x1500_1000_01_03_03.gray"},
				{"00002515_N_256x460_500_00_03_09.gray",
				    "00002534_N_256x434_500_00_03_09.gray"},
				{"00002542_S_256x425_500_00_03_07.gray",
				    "00002434_A_512x512_500_41_05_07.gray"},
				{"00002578_N_266x408_500_00_03_09.gray",
				    "00002541_N_258x492_500_00_03_09.gray"},
				{"00002579_N_336x452_500_00_03_03.gray",
				    "00002445_A_512x512_500_41_05_03.gray"},
				{"00002551_N_277x425_500_00_03_08.gray",
				    "00002521_N_334x512_500_00_03_08.gray"},
				{"00002535_S_290x444_500_00_03_09.gray",
				    "00002551_S_256x425_500_00_03_09.gray"},
				{"00002556_S_256x388_500_00_03_09.gray",
				    "00002466_S_256x442_500_00_03_09.gray"},
				{"00002472_S_256x364_500_00_03_04.gray",
				    "00002516_S_256x420_500_00_03_04.gray"},
				{"00002534_N_256x378_500_00_03_03.gray",
				    "00002571_N_324x556_500_00_03_03.gray"},
				{"00002466_N_325x460_500_00_03_04.gray",
				    "00002480_N_311x449_500_00_03_04.gray"},
				{"00002445_S_272x442_500_00_03_07.gray",
				    "00002521_N_361x490_500_00_03_07.gray"},
				{"00002515_N_256x412_500_00_03_07.gray",
				    "00002478_N_311x445_500_00_03_07.gray"},
				{"00002505_S_329x485_500_00_03_08.gray",
				    "00002448_U_1600x1500_1000_01_03_08.gray"},
				{"00002484_N_280x330_500_00_03_07.gray",
				    "00002445_A_512x512_500_41_05_07.gray"},
				{"00002556_S_256x380_500_00_03_08.gray",
				    "00002504_S_309x431_500_00_03_08.gray"},
				{"00002556_N_303x490_500_00_03_04.gray",
				    "00002558_S_267x490_500_00_03_04.gray"},
				{"00002448_U_1600x1500_1000_01_03_05.gray",
				    "00002435_M_256x360_500_00_09_05.gray"},
				{"00002541_N_259x447_500_00_03_07.gray",
				    "00002488_N_316x459_500_00_03_07.gray"},
				{"00002516_N_270x443_500_00_03_04.gray",
				    "00002495_S_290x513_500_00_03_04.gray"},
				{"00002495_N_357x419_500_00_03_02.gray",
				    "00002574_N_258x455_500_00_03_02.gray"},
				{"00002497_N_265x276_500_00_03_04.gray",
				    "00002574_S_256x468_500_00_03_04.gray"},
				{"00002537_S_256x345_500_00_03_02.gray",
				    "00002466_S_275x439_500_00_03_02.gray"},
				{"00002574_S_256x444_500_00_03_08.gray",
				    "00002497_S_278x409_500_00_03_08.gray"},
				{"00002504_S_264x482_500_00_03_09.gray",
				    "00002531_N_256x375_500_00_03_09.gray"},
				{"00002556_N_269x467_500_00_03_08.gray",
				    "00002558_N_272x450_500_00_03_08.gray"},
				{"00002480_S_283x445_500_00_03_09.gray",
				    "00002550_S_256x401_500_00_03_09.gray"},
				{"00002546_N_294x441_500_00_03_02.gray",
				    "00002574_N_258x455_500_00_03_02.gray"},
				{"00002521_N_382x516_500_00_03_04.gray",
				    "00002504_N_282x461_500_00_03_04.gray"},
				{"00002466_N_277x477_500_00_03_09.gray",
				    "00002533_N_307x541_500_00_03_09.gray"},
				{"00002497_N_323x455_500_00_03_03.gray",
				    "00002515_S_256x440_500_00_03_03.gray"},
				{"00002500_N_287x420_500_00_03_04.gray",
				    "00002531_S_256x420_500_00_03_04.gray"},
				{"00002551_S_256x420_500_00_03_04.gray",
				    "00002449_U_1600x1500_1000_01_03_04.gray"},
				{"00002535_S_290x444_500_00_03_09.gray",
				    "00002516_S_256x431_500_00_03_09.gray"},
				{"00002571_N_324x556_500_00_03_03.gray",
				    "00002456_N_268x478_500_00_03_03.gray"},
				{"00002484_N_292x362_500_00_03_02.gray",
				    "00002556_N_266x437_500_00_03_02.gray"},
				{"00002480_S_283x445_500_00_03_09.gray",
				    "00002466_N_277x477_500_00_03_09.gray"},
				{"00002480_N_317x453_500_00_03_03.gray",
				    "00002542_N_256x423_500_00_03_03.gray"},
				{"00002534_N_256x367_500_00_03_07.gray",
				    "00002516_S_269x429_500_00_03_07.gray"},
				{"00002484_N_266x361_500_00_03_08.gray",
				    "00002556_N_269x467_500_00_03_08.gray"},
				{"00002551_N_268x449_500_00_03_03.gray",
				    "00002523_N_262x372_500_00_03_03.gray"},
				{"00002533_S_256x401_500_00_03_02.gray",
				    "00002531_S_256x390_500_00_03_02.gray"},
				{"00002502_N_298x446_500_00_03_07.gray",
				    "00002466_N_295x403_500_00_03_07.gray"},
				{"00002516_S_267x435_500_00_03_02.gray",
				    "00002483_S_256x361_500_00_03_02.gray"},
				{"00002458_S_256x399_500_00_03_03.gray",
				    "00002475_S_277x454_500_00_03_03.gray"},
				{"00002515_N_256x486_500_00_03_03.gray",
				    "00002456_U_1600x1500_1000_01_03_03.gray"},
				{"00002433_M_256x360_500_00_09_04.gray",
				    "00002456_M_256x360_500_00_09_04.gray"},
				{"00002537_S_256x375_500_00_03_09.gray",
				    "00002546_N_277x489_500_00_03_09.gray"},
				{"00002502_N_256x391_500_00_03_09.gray",
				    "00002542_S_256x448_500_00_03_09.gray"},
				{"00002480_S_280x449_500_00_03_08.gray",
				    "00002556_N_269x467_500_00_03_08.gray"},
				{"00002445_A_512x512_500_41_05_09.gray",
				    "00002435_U_1600x1500_1000_01_03_09.gray"},
				{"00002551_N_256x420_500_00_03_04.gray",
				    "00002449_S_286x433_500_00_03_04.gray"},
				{"00002457_M_256x360_500_00_09_03.gray",
				    "00002480_S_288x459_500_00_03_03.gray"},
				{"00002483_S_256x374_500_00_03_03.gray",
				    "00002458_N_303x449_500_00_03_03.gray"},
				{"00002521_S_313x524_500_00_03_03.gray",
				    "00002439_S_287x438_500_00_03_03.gray"},
				{"00002533_N_296x514_500_00_03_08.gray",
				    "00002500_N_256x400_500_00_03_08.gray"},
				{"00002478_S_256x405_500_00_03_04.gray",
				    "00002569_S_258x412_500_00_03_04.gray"},
				{"00002504_N_320x470_500_00_03_07.gray",
				    "00002534_N_256x367_500_00_03_07.gray"},
				{"00002448_N_297x402_500_00_03_07.gray",
				    "00002449_A_512x512_500_41_05_07.gray"},
				{"00002435_M_256x360_500_00_09_05.gray",
				    "00002434_M_256x360_500_00_09_05.gray"},
				{"00002535_S_277x464_500_00_03_07.gray",
				    "00002561_N_301x413_500_00_03_07.gray"},
				{"00002502_N_256x373_500_00_03_04.gray",
				    "00002534_S_256x388_500_00_03_04.gray"},
				{"00002546_S_256x385_500_00_03_09.gray",
				    "00002448_U_1600x1500_1000_01_03_09.gray"},
				{"00002505_N_283x363_500_00_03_07.gray",
				    "00002550_N_269x519_500_00_03_07.gray"},
				{"00002505_S_302x480_500_00_03_07.gray",
				    "00002500_N_256x373_500_00_03_07.gray"},
				{"00002558_N_298x489_500_00_03_03.gray",
				    "00002500_N_256x408_500_00_03_03.gray"},
				{"00002579_N_294x486_500_00_03_08.gray",
				    "00002555_N_256x461_500_00_03_08.gray"},
				{"00002439_M_256x360_500_00_09_07.gray",
				    "00002537_N_279x392_500_00_03_07.gray"},
				{"00002497_S_278x409_500_00_03_08.gray",
				    "00002445_S_256x483_500_00_03_08.gray"},
				{"00002439_U_1600x1500_1000_01_03_08.gray",
				    "00002550_N_256x462_500_00_03_08.gray"},
				{"00002502_N_256x327_500_00_03_02.gray",
				    "00002505_N_331x443_500_00_03_02.gray"},
				{"00002516_N_265x453_500_00_03_09.gray",
				    "00002488_S_276x476_500_00_03_09.gray"},
				{"00002500_N_287x420_500_00_03_04.gray",
				    "00002478_N_308x478_500_00_03_04.gray"},
				{"00002505_N_385x497_500_00_03_04.gray",
				    "00002478_S_256x405_500_00_03_04.gray"},
				{"00002475_S_256x411_500_00_03_08.gray",
				    "00002542_N_303x442_500_00_03_08.gray"},
				{"00002523_N_262x372_500_00_03_03.gray",
				    "00002449_U_1600x1500_1000_01_03_03.gray"},
				{"00002495_N_336x463_500_00_03_07.gray",
				    "00002484_N_280x330_500_00_03_07.gray"},
				{"00002537_N_279x392_500_00_03_07.gray",
				    "00002488_N_316x459_500_00_03_07.gray"},
				{"00002569_N_256x424_500_00_03_07.gray",
				    "00002456_A_512x512_500_41_05_07.gray"},
				{"00002569_S_290x485_500_00_03_03.gray",
				    "00002435_M_256x360_500_00_09_03.gray"},
				{"00002466_N_288x468_500_00_03_08.gray",
				    "00002546_S_256x469_500_00_03_08.gray"},
				{"00002574_N_256x422_500_00_03_08.gray",
				    "00002515_S_256x436_500_00_03_08.gray"},
				{"00002439_M_256x360_500_00_09_06.gray",
				    "00002458_A_512x512_500_41_05_06.gray"},
				{"00002480_N_334x463_500_00_03_02.gray",
				    "00002434_N_320x437_500_00_03_02.gray"},
				{"00002478_N_256x482_500_00_03_08.gray",
				    "00002551_N_277x425_500_00_03_08.gray"},
				{"00002579_S_278x444_500_00_03_09.gray",
				    "00002500_N_257x413_500_00_03_09.gray"},
				{"00002558_S_267x490_500_00_03_04.gray",
				    "00002505_S_305x454_500_00_03_04.gray"},
				{"00002456_M_256x360_500_00_09_03.gray",
				    "00002504_S_289x435_500_00_03_03.gray"},
				{"00002556_S_256x388_500_00_03_09.gray",
				    "00002483_S_256x442_500_00_03_09.gray"},
				{"00002542_S_256x425_500_00_03_07.gray",
				    "00002483_S_256x397_500_00_03_07.gray"},
				{"00002502_N_258x332_500_00_03_03.gray",
				    "00002505_N_366x482_500_00_03_03.gray"},
				{"00002531_S_269x402_500_00_03_08.gray",
				    "00002541_S_256x496_500_00_03_08.gray"},
				{"00002531_N_256x363_500_00_03_07.gray",
				    "00002523_N_307x321_500_00_03_07.gray"},
				{"00002472_S_256x344_500_00_03_03.gray",
				    "00002547_N_278x430_500_00_03_03.gray"},
				{"00002550_S_256x465_500_00_03_08.gray",
				    "00002569_N_258x467_500_00_03_08.gray"},
				{"00002521_S_308x483_500_00_03_02.gray",
				    "00002560_S_259x388_500_00_03_02.gray"},
				{"00002579_S_279x461_500_00_03_08.gray",
				    "00002505_S_329x485_500_00_03_08.gray"},
				{"00002515_N_256x486_500_00_03_03.gray",
				    "00002502_N_258x332_500_00_03_03.gray"},
				{"00002497_N_270x359_500_00_03_02.gray",
				    "00002533_N_319x439_500_00_03_02.gray"},
				{"00002439_S_293x482_500_00_03_08.gray",
				    "00002495_S_291x455_500_00_03_08.gray"},
				{"00002497_N_323x455_500_00_03_03.gray",
				    "00002445_N_268x453_500_00_03_03.gray"},
				{"00002558_N_306x488_500_00_03_07.gray",
				    "00002478_S_256x411_500_00_03_07.gray"},
				{"00002488_N_334x487_500_00_03_08.gray",
				    "00002434_U_1600x1500_1000_01_03_08.gray"},
				{"00002574_S_256x470_500_00_03_09.gray",
				    "00002439_N_299x422_500_00_03_09.gray"},
				{"00002561_N_301x413_500_00_03_07.gray",
				    "00002541_S_262x486_500_00_03_07.gray"},
				{"00002542_S_256x425_500_00_03_07.gray",
				    "00002561_S_260x379_500_00_03_07.gray"},
				{"00002542_S_256x425_500_00_03_07.gray",
				    "00002449_N_265x382_500_00_03_07.gray"},
				{"00002439_M_256x360_500_00_09_07.gray",
				    "00002495_N_336x463_500_00_03_07.gray"},
				{"00002561_N_322x405_500_00_03_08.gray",
				    "00002521_N_334x512_500_00_03_08.gray"},
				{"00002531_S_269x402_500_00_03_08.gray",
				    "00002500_S_256x415_500_00_03_08.gray"},
				{"00002495_N_367x378_500_00_03_03.gray",
				    "00002551_S_256x414_500_00_03_03.gray"},
				{"00002466_N_288x468_500_00_03_08.gray",
				    "00002547_N_299x452_500_00_03_08.gray"},
				{"00002531_S_265x408_500_00_03_07.gray",
				    "00002516_S_269x429_500_00_03_07.gray"},
				{"00002449_U_1600x1500_1000_01_03_01.gray",
				    "00002458_U_1600x1500_1000_01_03_01.gray"},
				{"00002571_N_329x527_500_00_03_07.gray",
				    "00002531_N_256x363_500_00_03_07.gray"},
				{"00002478_S_256x435_500_00_03_08.gray",
				    "00002547_N_299x452_500_00_03_08.gray"},
				{"00002537_S_256x375_500_00_03_09.gray",
				    "00002571_S_267x515_500_00_03_09.gray"},
				{"00002515_S_256x425_500_00_03_09.gray",
				    "00002555_S_256x492_500_00_03_09.gray"},
				{"00002475_N_316x374_500_00_03_02.gray",
				    "00002560_N_331x447_500_00_03_02.gray"},
				{"00002458_U_1600x1500_1000_01_03_04.gray",
				    "00002560_S_268x396_500_00_03_04.gray"},
				{"00002555_S_256x414_500_00_03_02.gray",
				    "00002456_S_256x394_500_00_03_02.gray"},
				{"00002579_N_315x419_500_00_03_02.gray",
				    "00002551_N_281x405_500_00_03_02.gray"},
				{"00002475_S_264x421_500_00_03_04.gray",
				    "00002439_U_1600x1500_1000_01_03_04.gray"},
				{"00002542_S_256x448_500_00_03_09.gray",
				    "00002547_N_274x485_500_00_03_09.gray"},
				{"00002502_S_256x378_500_00_03_04.gray",
				    "00002551_N_256x420_500_00_03_04.gray"},
				{"00002558_S_286x509_500_00_03_03.gray",
				    "00002488_S_296x482_500_00_03_03.gray"},
				{"00002533_S_256x329_500_00_03_08.gray",
				    "00002534_S_256x412_500_00_03_08.gray"},
				{"00002560_S_259x388_500_00_03_02.gray",
				    "00002483_N_272x445_500_00_03_02.gray"},
				{"00002497_N_265x276_500_00_03_04.gray",
				    "00002560_N_276x420_500_00_03_04.gray"},
				{"00002495_S_290x513_500_00_03_04.gray",
				    "00002523_N_332x387_500_00_03_04.gray"},
				{"00002475_N_296x433_500_00_03_09.gray",
				    "00002546_N_277x489_500_00_03_09.gray"},
				{"00002574_N_256x466_500_00_03_09.gray",
				    "00002578_S_256x416_500_00_03_09.gray"},
				{"00002516_N_315x469_500_00_03_08.gray",
				    "00002531_S_269x402_500_00_03_08.gray"},
				{"00002483_S_256x374_500_00_03_03.gray",
				    "00002466_N_316x475_500_00_03_03.gray"},
				{"00002472_S_256x344_500_00_03_03.gray",
				    "00002439_A_512x512_500_41_05_03.gray"},
				{"00002483_S_256x374_500_00_03_03.gray",
				    "00002556_N_272x474_500_00_03_03.gray"},
				{"00002497_S_293x420_500_00_03_07.gray",
				    "00002458_S_256x454_500_00_03_07.gray"},
				{"00002480_N_292x424_500_00_03_09.gray",
				    "00002571_N_317x501_500_00_03_09.gray"},
				{"00002561_S_257x411_500_00_03_08.gray",
				    "00002560_S_256x418_500_00_03_08.gray"},
				{"00002534_S_256x412_500_00_03_08.gray",
				    "00002515_N_256x427_500_00_03_08.gray"},
				{"00002475_N_327x452_500_00_03_04.gray",
				    "00002478_S_256x405_500_00_03_04.gray"},
				{"00002521_S_313x524_500_00_03_03.gray",
				    "00002505_N_366x482_500_00_03_03.gray"},
				{"00002478_S_256x405_500_00_03_04.gray",
				    "00002546_S_273x471_500_00_03_04.gray"},
				{"00002546_N_256x450_500_00_03_08.gray",
				    "00002439_U_1600x1500_1000_01_03_08.gray"},
				{"00002500_N_276x386_500_00_03_02.gray",
				    "00002448_M_256x360_500_00_09_02.gray"},
				{"00002466_S_256x463_500_00_03_04.gray",
				    "00002480_S_268x468_500_00_03_04.gray"},
				{"00002550_S_256x503_500_00_03_07.gray",
				    "00002578_S_256x432_500_00_03_07.gray"},
				{"00002483_S_256x410_500_00_03_04.gray",
				    "00002515_N_256x420_500_00_03_04.gray"},
				{"00002550_S_256x503_500_00_03_07.gray",
				    "00002483_N_256x412_500_00_03_07.gray"},
				{"00002483_N_256x412_500_00_03_07.gray",
				    "00002488_N_316x459_500_00_03_07.gray"},
				{"00002497_S_278x409_500_00_03_08.gray",
				    "00002558_S_265x434_500_00_03_08.gray"},
				{"00002504_N_286x481_500_00_03_08.gray",
				    "00002569_N_258x467_500_00_03_08.gray"},
				{"00002521_S_313x524_500_00_03_03.gray",
				    "00002445_S_265x477_500_00_03_03.gray"},
				{"00002542_S_260x419_500_00_03_02.gray",
				    "00002504_N_310x458_500_00_03_02.gray"},
				{"00002555_N_303x433_500_00_03_03.gray",
				    "00002534_N_256x378_500_00_03_03.gray"},
				{"00002547_N_278x430_500_00_03_03.gray",
				    "00002515_N_256x486_500_00_03_03.gray"},
				{"00002497_N_256x347_500_00_03_07.gray",
				    "00002495_N_336x463_500_00_03_07.gray"},
				{"00002475_S_263x392_500_00_03_07.gray",
				    "00002448_S_256x384_500_00_03_07.gray"},
				{"00002547_N_278x430_500_00_03_03.gray",
				    "00002535_S_279x428_500_00_03_03.gray"},
				{"00002547_S_256x478_500_00_03_09.gray",
				    "00002456_N_256x485_500_00_03_09.gray"},
				{"00002534_N_256x378_500_00_03_03.gray",
				    "00002504_S_289x435_500_00_03_03.gray"},
				{"00002542_N_282x461_500_00_03_07.gray",
				    "00002521_S_309x503_500_00_03_07.gray"},
				{"00002466_S_288x420_500_00_03_07.gray",
				    "00002531_S_265x408_500_00_03_07.gray"},
				{"00002480_N_311x449_500_00_03_04.gray",
				    "00002556_N_303x490_500_00_03_04.gray"},
				{"00002445_M_256x360_500_00_09_02.gray",
				    "00002458_M_256x360_500_00_09_02.gray"},
				{"00002556_S_256x388_500_00_03_09.gray",
				    "00002551_S_256x425_500_00_03_09.gray"},
				{"00002558_S_313x420_500_00_03_07.gray",
				    "00002541_S_262x486_500_00_03_07.gray"},
				{"00002497_S_302x428_500_00_03_04.gray",
				    "00002523_S_260x372_500_00_03_04.gray"},
				{"00002574_S_256x444_500_00_03_08.gray",
				    "00002542_S_256x426_500_00_03_08.gray"},
				{"00002480_S_283x445_500_00_03_09.gray",
				    "00002578_S_256x416_500_00_03_09.gray"},
				{"00002516_S_256x431_500_00_03_09.gray",
				    "00002569_S_277x412_500_00_03_09.gray"},
				{"00002561_N_319x391_500_00_03_02.gray",
				    "00002531_N_256x393_500_00_03_02.gray"},
				{"00002555_S_256x422_500_00_03_07.gray",
				    "00002515_S_256x419_500_00_03_07.gray"},
				{"00002457_M_256x360_500_00_09_03.gray",
				    "00002541_S_257x502_500_00_03_03.gray"},
				{"00002505_S_301x463_500_00_03_09.gray",
				    "00002561_N_303x427_500_00_03_09.gray"},
				{"00002537_S_256x310_500_00_03_07.gray",
				    "00002578_S_256x432_500_00_03_07.gray"},
				{"00002531_S_269x402_500_00_03_08.gray",
				    "00002495_S_291x455_500_00_03_08.gray"},
				{"00002500_S_256x399_500_00_03_04.gray",
				    "00002495_N_321x394_500_00_03_04.gray"},
				{"00002434_S_268x426_500_00_03_04.gray",
				    "00002456_M_256x360_500_00_09_04.gray"},
				{"00002534_N_256x367_500_00_03_07.gray",
				    "00002504_S_284x456_500_00_03_07.gray"},
				{"00002516_S_267x435_500_00_03_02.gray",
				    "00002558_S_313x499_500_00_03_02.gray"},
				{"00002560_N_263x432_500_00_03_08.gray",
				    "00002457_A_512x512_500_41_05_08.gray"},
				{"00002551_S_256x450_500_00_03_08.gray",
				    "00002472_S_256x382_500_00_03_08.gray"},
				{"00002579_N_311x490_500_00_03_09.gray",
				    "00002439_N_299x422_500_00_03_09.gray"},
				{"00002569_N_281x455_500_00_03_03.gray",
				    "00002560_S_258x408_500_00_03_03.gray"},
				{"00002484_S_273x386_500_00_03_04.gray",
				    "00002439_A_512x512_500_41_05_04.gray"},
				{"00002472_S_256x381_500_00_03_07.gray",
				    "00002505_S_302x480_500_00_03_07.gray"},
				{"00002495_N_336x463_500_00_03_07.gray",
				    "00002439_N_299x440_500_00_03_07.gray"},
				{"00002457_M_256x360_500_00_09_06.gray",
				    "00002456_U_1600x1500_1000_01_03_06.gray"},
				{"00002541_S_256x470_500_00_03_09.gray",
				    "00002480_N_292x424_500_00_03_09.gray"},
				{"00002550_N_259x505_500_00_03_09.gray",
				    "00002578_N_266x408_500_00_03_09.gray"},
				{"00002533_S_256x424_500_00_03_07.gray",
				    "00002448_N_297x402_500_00_03_07.gray"},
				{"00002483_S_256x361_500_00_03_02.gray",
				    "00002560_S_259x388_500_00_03_02.gray"},
				{"00002456_N_274x409_500_00_03_07.gray",
				    "00002546_S_256x423_500_00_03_07.gray"},
				{"00002574_S_256x468_500_00_03_04.gray",
				    "00002458_N_322x503_500_00_03_04.gray"},
				{"00002500_S_256x399_500_00_03_04.gray",
				    "00002478_S_256x405_500_00_03_04.gray"},
				{"00002475_S_277x454_500_00_03_03.gray",
				    "00002516_S_261x436_500_00_03_03.gray"},
				{"00002472_S_256x364_500_00_03_04.gray",
				    "00002515_S_256x425_500_00_03_04.gray"},
				{"00002439_U_1600x1500_1000_01_03_02.gray",
				    "00002523_N_256x308_500_00_03_02.gray"},
				{"00002500_S_256x378_500_00_03_09.gray",
				    "00002521_N_345x544_500_00_03_09.gray"},
				{"00002500_N_276x386_500_00_03_02.gray",
				    "00002531_N_256x393_500_00_03_02.gray"},
				{"00002475_S_277x454_500_00_03_03.gray",
				    "00002500_S_256x409_500_00_03_03.gray"},
				{"00002521_N_345x544_500_00_03_09.gray",
				    "00002541_S_256x470_500_00_03_09.gray"},
				{"00002541_N_313x513_500_00_03_03.gray",
				    "00002495_S_336x493_500_00_03_03.gray"},
				{"00002551_N_268x449_500_00_03_03.gray",
				    "00002502_N_258x332_500_00_03_03.gray"},
				{"00002504_S_284x456_500_00_03_07.gray",
				    "00002488_N_316x459_500_00_03_07.gray"},
				{"00002483_S_256x397_500_00_03_07.gray",
				    "00002561_S_260x379_500_00_03_07.gray"},
				{"00002533_N_296x433_500_00_03_03.gray",
				    "00002551_N_268x449_500_00_03_03.gray"},
				{"00002550_N_256x462_500_00_03_08.gray",
				    "00002534_N_256x412_500_00_03_08.gray"},
				{"00002574_N_299x480_500_00_03_03.gray",
				    "00002555_N_303x433_500_00_03_03.gray"},
				{"00002433_S_303x480_500_00_03_02.gray",
				    "00002515_S_256x419_500_00_03_02.gray"},
				{"00002571_N_302x477_500_00_03_04.gray",
				    "00002445_A_512x512_500_41_05_04.gray"},
				{"00002535_S_277x464_500_00_03_07.gray",
				    "00002542_S_256x425_500_00_03_07.gray"},
				{"00002504_N_282x461_500_00_03_04.gray",
				    "00002435_S_256x357_500_00_03_04.gray"},
				{"00002495_S_291x455_500_00_03_08.gray",
				    "00002555_S_256x468_500_00_03_08.gray"},
				{"00002541_S_277x472_500_00_03_02.gray",
				    "00002556_S_256x346_500_00_03_02.gray"},
				{"00002475_N_296x432_500_00_03_08.gray",
				    "00002521_S_310x552_500_00_03_08.gray"},
				{"00002458_M_256x360_500_00_09_02.gray",
				    "00002483_N_272x445_500_00_03_02.gray"},
				{"00002448_A_512x512_500_41_05_09.gray",
				    "00002523_N_346x370_500_00_03_09.gray"},
				{"00002480_S_283x419_500_00_03_02.gray",
				    "00002475_N_316x374_500_00_03_02.gray"},
				{"00002504_N_282x461_500_00_03_04.gray",
				    "00002497_N_265x276_500_00_03_04.gray"},
				{"00002579_N_336x452_500_00_03_03.gray",
				    "00002561_N_316x402_500_00_03_03.gray"},
				{"00002483_S_256x374_500_00_03_03.gray",
				    "00002480_S_288x459_500_00_03_03.gray"},
				{"00002480_N_295x429_500_00_03_08.gray",
				    "00002500_N_256x400_500_00_03_08.gray"},
				{"00002500_S_256x394_500_00_03_07.gray",
				    "00002541_N_259x447_500_00_03_07.gray"},
				{"00002502_S_256x379_500_00_03_07.gray",
				    "00002475_N_312x388_500_00_03_07.gray"},
				{"00002457_A_512x512_500_41_05_08.gray",
				    "00002502_S_256x402_500_00_03_08.gray"},
				{"00002546_S_256x385_500_00_03_09.gray",
				    "00002534_S_256x418_500_00_03_09.gray"},
				{"00002547_N_299x452_500_00_03_08.gray",
				    "00002515_N_256x427_500_00_03_08.gray"},
				{"00002578_S_256x446_500_00_03_03.gray",
				    "00002560_S_258x408_500_00_03_03.gray"},
				{"00002537_N_279x392_500_00_03_07.gray",
				    "00002561_S_260x379_500_00_03_07.gray"},
				{"00002574_S_256x470_500_00_03_09.gray",
				    "00002578_N_266x408_500_00_03_09.gray"},
				{"00002488_N_365x494_500_00_03_02.gray",
				    "00002515_S_256x419_500_00_03_02.gray"},
				{"00002551_N_268x449_500_00_03_03.gray",
				    "00002515_N_256x486_500_00_03_03.gray"},
				{"00002497_S_284x386_500_00_03_03.gray",
				    "00002533_N_296x433_500_00_03_03.gray"},
				{"00002571_N_317x501_500_00_03_09.gray",
				    "00002458_N_273x484_500_00_03_09.gray"},
				{"00002531_S_256x374_500_00_03_03.gray",
				    "00002502_N_258x332_500_00_03_03.gray"},
				{"00002521_N_382x516_500_00_03_04.gray",
				    "00002558_N_348x559_500_00_03_04.gray"},
				{"00002531_S_261x420_500_00_03_09.gray",
				    "00002535_S_290x444_500_00_03_09.gray"},
				{"00002551_N_277x425_500_00_03_08.gray",
				    "00002433_A_512x512_500_41_05_08.gray"},
				{"00002541_N_304x508_500_00_03_04.gray",
				    "00002478_N_308x478_500_00_03_04.gray"},
				{"00002574_S_256x444_500_00_03_02.gray",
				    "00002515_S_256x419_500_00_03_02.gray"},
				{"00002521_S_309x503_500_00_03_07.gray",
				    "00002551_S_257x402_500_00_03_07.gray"},
				{"00002497_S_293x420_500_00_03_07.gray",
				    "00002547_N_256x474_500_00_03_07.gray"},
				{"00002542_N_303x442_500_00_03_08.gray",
				    "00002478_N_256x482_500_00_03_08.gray"},
				{"00002521_S_309x503_500_00_03_07.gray",
				    "00002551_N_273x411_500_00_03_07.gray"},
				{"00002434_S_264x407_500_00_03_03.gray",
				    "00002445_S_265x477_500_00_03_03.gray"},
				{"00002574_N_256x466_500_00_03_09.gray",
				    "00002478_N_277x463_500_00_03_09.gray"},
				{"00002502_N_258x332_500_00_03_03.gray",
				    "00002456_U_1600x1500_1000_01_03_03.gray"},
				{"00002546_N_309x489_500_00_03_04.gray",
				    "00002500_N_287x420_500_00_03_04.gray"},
				{"00002505_N_366x482_500_00_03_03.gray",
				    "00002439_N_330x381_500_00_03_03.gray"},
				{"00002531_S_256x374_500_00_03_03.gray",
				    "00002472_S_256x344_500_00_03_03.gray"},
				{"00002533_S_256x329_500_00_03_08.gray",
				    "00002484_S_256x352_500_00_03_08.gray"},
				{"00002433_A_512x512_500_41_05_08.gray",
				    "00002531_S_269x402_500_00_03_08.gray"},
				{"00002484_S_256x337_500_00_03_09.gray",
				    "00002449_M_256x360_500_00_09_09.gray"},
				{"00002504_N_282x461_500_00_03_04.gray",
				    "00002502_S_256x378_500_00_03_04.gray"},
				{"00002579_N_329x433_500_00_03_04.gray",
				    "00002558_S_267x490_500_00_03_04.gray"},
				{"00002546_N_294x441_500_00_03_02.gray",
				    "00002579_N_315x419_500_00_03_02.gray"},
				{"00002516_N_266x469_500_00_03_02.gray",
				    "00002497_S_293x414_500_00_03_02.gray"},
				{"00002550_N_294x522_500_00_03_02.gray",
				    "00002555_S_256x414_500_00_03_02.gray"},
				{"00002547_S_256x478_500_00_03_09.gray",
				    "00002505_S_301x463_500_00_03_09.gray"},
				{"00002484_S_273x386_500_00_03_04.gray",
				    "00002433_A_512x512_500_41_05_04.gray"},
				{"00002516_N_266x469_500_00_03_02.gray",
				    "00002556_S_256x346_500_00_03_02.gray"},
				{"00002555_S_256x413_500_00_03_03.gray",
				    "00002458_A_512x512_500_41_05_03.gray"},
				{"00002579_N_296x438_500_00_03_07.gray",
				    "00002435_M_256x360_500_00_09_07.gray"},
				{"00002547_S_256x428_500_00_03_07.gray",
				    "00002497_S_293x420_500_00_03_07.gray"},
				{"00002551_N_281x405_500_00_03_02.gray",
				    "00002458_M_256x360_500_00_09_02.gray"},
				{"00002535_S_286x455_500_00_03_08.gray",
				    "00002551_N_277x425_500_00_03_08.gray"},
				{"00002558_N_298x489_500_00_03_03.gray",
				    "00002547_N_278x430_500_00_03_03.gray"},
				{"00002551_S_256x425_500_00_03_09.gray",
				    "00002555_N_256x438_500_00_03_09.gray"},
				{"00002439_A_512x512_500_41_05_04.gray",
				    "00002555_S_256x474_500_00_03_04.gray"},
				{"00002541_N_258x492_500_00_03_09.gray",
				    "00002547_S_256x478_500_00_03_09.gray"},
				{"00002578_N_256x435_500_00_03_08.gray",
				    "00002561_S_257x411_500_00_03_08.gray"},
				{"00002484_N_266x361_500_00_03_08.gray",
				    "00002541_N_283x453_500_00_03_08.gray"},
				{"00002484_N_284x350_500_00_03_03.gray",
				    "00002533_N_296x433_500_00_03_03.gray"},
				{"00002533_N_319x439_500_00_03_02.gray",
				    "00002579_S_99x99_500_00_03_02.gray"},
				{"00002521_S_313x524_500_00_03_03.gray",
				    "00002542_S_256x429_500_00_03_03.gray"},
				{"00002478_S_256x405_500_00_03_04.gray",
				    "00002531_N_269x430_500_00_03_04.gray"},
				{"00002484_N_266x361_500_00_03_08.gray",
				    "00002547_S_258x460_500_00_03_08.gray"},
				{"00002466_N_290x427_500_00_03_02.gray",
				    "00002516_S_267x435_500_00_03_02.gray"},
				{"00002560_N_306x484_500_00_03_03.gray",
				    "00002531_N_256x368_500_00_03_03.gray"},
				{"00002574_S_257x416_500_00_03_07.gray",
				    "00002569_S_267x411_500_00_03_07.gray"},
				{"00002475_N_296x432_500_00_03_08.gray",
				    "00002433_A_512x512_500_41_05_08.gray"},
				{"00002541_N_302x485_500_00_03_02.gray",
				    "00002445_A_512x512_500_41_05_02.gray"},
				{"00002523_N_262x372_500_00_03_03.gray",
				    "00002556_S_256x373_500_00_03_03.gray"},
				{"00002458_S_256x437_500_00_03_09.gray",
				    "00002531_S_261x420_500_00_03_09.gray"},
				{"00002448_N_256x397_500_00_03_03.gray",
				    "00002433_M_256x360_500_00_09_03.gray"},
				{"00002445_U_1600x1500_1000_01_03_07.gray",
				    "00002500_N_256x373_500_00_03_07.gray"},
				{"00002475_S_281x408_500_00_03_02.gray",
				    "00002556_S_256x346_500_00_03_02.gray"},
				{"00002472_S_256x322_500_00_03_02.gray",
				    "00002488_N_365x494_500_00_03_02.gray"},
				{"00002439_U_1600x1500_1000_01_03_07.gray",
				    "00002504_N_320x470_500_00_03_07.gray"},
				{"00002556_N_260x460_500_00_03_09.gray",
				    "00002505_N_288x440_500_00_03_09.gray"},
				{"00002497_N_280x412_500_00_03_08.gray",
				    "00002537_S_256x367_500_00_03_08.gray"},
				{"00002561_N_319x391_500_00_03_02.gray",
				    "00002556_N_266x437_500_00_03_02.gray"},
				{"00002495_S_271x435_500_00_03_02.gray",
				    "00002579_S_99x99_500_00_03_02.gray"},
				{"00002555_N_256x427_500_00_03_02.gray",
				    "00002537_N_315x399_500_00_03_02.gray"},
				{"00002546_N_256x423_500_00_03_07.gray",
				    "00002504_N_320x470_500_00_03_07.gray"},
				{"00002433_A_512x512_500_41_05_01.gray",
				    "00002458_U_1600x1500_1000_01_03_01.gray"},
				{"00002561_S_256x384_500_00_03_09.gray",
				    "00002550_S_256x401_500_00_03_09.gray"},
				{"00002466_N_277x477_500_00_03_09.gray",
				    "00002541_N_258x492_500_00_03_09.gray"},
				{"00002434_M_256x360_500_00_09_04.gray",
				    "00002533_S_256x444_500_00_03_04.gray"},
				{"00002547_N_299x452_500_00_03_08.gray",
				    "00002475_S_256x411_500_00_03_08.gray"},
				{"00002500_S_256x409_500_00_03_03.gray",
				    "00002504_S_289x435_500_00_03_03.gray"},
				{"00002556_S_256x380_500_00_03_08.gray",
				    "00002550_N_256x462_500_00_03_08.gray"},
				{"00002547_S_266x483_500_00_03_03.gray",
				    "00002534_S_256x352_500_00_03_03.gray"},
				{"00002531_N_256x368_500_00_03_03.gray",
				    "00002478_N_324x471_500_00_03_03.gray"},
				{"00002448_U_1600x1500_1000_01_03_08.gray",
				    "00002560_N_263x432_500_00_03_08.gray"},
				{"00002551_S_256x450_500_00_03_08.gray",
				    "00002439_A_512x512_500_41_05_08.gray"},
				{"00002466_S_258x445_500_00_03_08.gray",
				    "00002439_A_512x512_500_41_05_08.gray"},
				{"00002488_S_296x461_500_00_03_04.gray",
				    "00002449_A_512x512_500_41_05_04.gray"},
				{"00002556_N_263x414_500_00_03_07.gray",
				    "00002435_M_256x360_500_00_09_07.gray"},
				{"00002483_N_256x441_500_00_03_09.gray",
				    "00002488_S_276x476_500_00_03_09.gray"},
				{"00002456_M_256x360_500_00_09_07.gray",
				    "00002448_N_297x402_500_00_03_07.gray"},
				{"00002521_S_313x524_500_00_03_03.gray",
				    "00002502_S_256x376_500_00_03_03.gray"},
				{"00002434_A_512x512_500_41_05_08.gray",
				    "00002435_A_512x512_500_41_05_08.gray"},
				{"00002546_N_256x450_500_00_03_08.gray",
				    "00002531_N_271x360_500_00_03_08.gray"},
				{"00002488_N_365x494_500_00_03_02.gray",
				    "00002457_N_287x423_500_00_03_02.gray"},
				{"00002535_N_302x468_500_00_03_04.gray",
				    "00002556_S_256x432_500_00_03_04.gray"},
				{"00002480_N_334x463_500_00_03_02.gray",
				    "00002466_N_290x427_500_00_03_02.gray"},

				/* Other */
				{"00002480_S_283x419_500_00_03_02.gray",
				    "black_500x500_500_29_00_00.gray"},
				{"00002480_S_283x419_500_00_03_02.gray",
				    "canary_500x500_500_29_00_00.gray"},
				{"00002480_S_283x419_500_00_03_02.gray",
				    "gradient_500x500_500_29_00_00.gray"},
				{"00002480_S_283x419_500_00_03_02.gray",
				    "rects_500x500_500_29_00_00.gray"},
				{"00002480_S_283x419_500_00_03_02.gray",
				    "white_500x500_500_29_00_00.gray"},
				{"black_500x500_500_29_00_00.gray",
				    "00002480_S_283x419_500_00_03_02.gray"},
				{"black_500x500_500_29_00_00.gray",
				    "canary_500x500_500_29_00_00.gray"},
				{"black_500x500_500_29_00_00.gray",
				    "gradient_500x500_500_29_00_00.gray"},
				{"black_500x500_500_29_00_00.gray",
				    "rects_500x500_500_29_00_00.gray"},
				{"black_500x500_500_29_00_00.gray",
				    "white_500x500_500_29_00_00.gray"},
				{"canary_500x500_500_29_00_00.gray",
				    "00002480_S_283x419_500_00_03_02.gray"},
				{"canary_500x500_500_29_00_00.gray",
				    "black_500x500_500_29_00_00.gray"},
				{"canary_500x500_500_29_00_00.gray",
				    "gradient_500x500_500_29_00_00.gray"},
				{"canary_500x500_500_29_00_00.gray",
				    "rects_500x500_500_29_00_00.gray"},
				{"canary_500x500_500_29_00_00.gray",
				    "white_500x500_500_29_00_00.gray"},
				{"gradient_500x500_500_29_00_00.gray",
				    "00002480_S_283x419_500_00_03_02.gray"},
				{"gradient_500x500_500_29_00_00.gray",
				    "black_500x500_500_29_00_00.gray"},
				{"gradient_500x500_500_29_00_00.gray",
				    "canary_500x500_500_29_00_00.gray"},
				{"gradient_500x500_500_29_00_00.gray",
				    "rects_500x500_500_29_00_00.gray"},
				{"gradient_500x500_500_29_00_00.gray",
				    "white_500x500_500_29_00_00.gray"},
				{"rects_500x500_500_29_00_00.gray",
				    "00002480_S_283x419_500_00_03_02.gray"},
				{"rects_500x500_500_29_00_00.gray",
				    "black_500x500_500_29_00_00.gray"},
				{"rects_500x500_500_29_00_00.gray",
				    "canary_500x500_500_29_00_00.gray"},
				{"rects_500x500_500_29_00_00.gray",
				    "gradient_500x500_500_29_00_00.gray"},
				{"rects_500x500_500_29_00_00.gray",
				    "white_500x500_500_29_00_00.gray"},
				{"white_500x500_500_29_00_00.gray",
				    "00002480_S_283x419_500_00_03_02.gray"},
				{"white_500x500_500_29_00_00.gray",
				    "black_500x500_500_29_00_00.gray"},
				{"white_500x500_500_29_00_00.gray",
				    "canary_500x500_500_29_00_00.gray"},
				{"white_500x500_500_29_00_00.gray",
				    "gradient_500x500_500_29_00_00.gray"},
				{"white_500x500_500_29_00_00.gray",
				    "rects_500x500_500_29_00_00.gray"}
			};
		}
	}
}

#endif /* PFTIII_VALIDATION_DATA_H_ */
