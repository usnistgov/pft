/*
 * This software was developed at the National Institute of Standards and
 * Technology (NIST) by employees of the Federal Government in the course
 * of their official duties. Pursuant to title 17 Section 105 of the
 * United States Code, this software is not subject to copyright protection
 * and is in the public domain. NIST assumes no responsibility whatsoever for
 * its use by other parties, and makes no guarantees, expressed or implied,
 * about its quality, reliability, or any other characteristic.
 */

#ifndef PFTIII_VALIDATION_UTILS_H_
#define PFTIII_VALIDATION_UTILS_H_

namespace PFTIII
{
	namespace Validation
	{
		/**
		 * @brief
		 * Cast an enumeration to its underlying integral value.
		 *
		 * @param t
		 * Item of enumeration type.
		 *
		 * @return
		 * Integral representation of t.
		 */
		template<typename T,
		    typename = typename std::enable_if<std::is_enum<T>::value>>
		typename std::underlying_type<T>::type
		e2i(
		    const T t)
		{
			return (static_cast<
			    typename std::underlying_type<T>::type>(t));
		}

		/**
		 * @brief
		 * Abbreviation for for std::to_string for integral types.
		 *
		 * @param t
		 * Item of integral type.
		 *
		 * @return
		 * String representation of t.
		 */
		template<typename T,
		    typename = typename
		    std::enable_if<std::is_integral<T>::value>>
		typename std::string
		ts(
		    const T t)
		{
			return (std::to_string(t));
		}

		/**
		 * @brief
		 * Obtain string value of an enumeration's underlying integral
		 * value.
		 *
		 * @param t
		 * Item of enumeration type.
		 *
		 * @return
		 * String representation of integral value of t.
		 */
		template<typename T,
		    typename = typename std::enable_if<std::is_enum<T>::value>>
		typename std::string
		e2i2s(
		    const T t)
		{
			return (ts(e2i(t)));
		}
	}
}

#endif /* PFTIII_VALIDATION_UTILS_H_ */
