//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_FMA_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_FMA_HPP_INCLUDED

  /*!
    @ingroup group-arithmetic
    @defgroup real-fma fma (function object)

    This function object computes the (fused) multiply add of these three parameters.

    @headerref{<boost/simd/function/fma.hpp>}

    @par Description

      @code
      Value fma(Value const& x, Value const& y, Value const& z);
      @endcode

    @par Decorators

    - std_ for floating entries to call directly std::fma. This generally implies pedantic
      fma behaviour, but in no way improved performances.
    - pedantic_ ensures the fma properties and allows SIMD acceleration if available.

    @par Notes
    The call `fma(x, y, z)` is similar to `x*y+z`

    But really conformant fused multiply/add also implies

    - only one rounding

    - no "intermediate" overflow

    fma provides this for all integral types and also each time it is reasonable
    in terms of performance for floating ones (i.e. if the system has the hard
    wired capability).

    If you need pedantic fma capabilities in all circumstances in your own
    code you can use the pedantic_ or std_ decorator
    (although both can be very expensive).

    @see ( %real ) [fms](@ref real-fms), [fnma](@ref real-fnma), [fnms](@ref real-fnms)

    @par Example:

      @snippet fma.cpp fma

    @par Possible output:

      @snippet fma.txt fma
  **/

#include <boost/simd/function/scalar/fma.hpp>
#include <boost/simd/function/simd/fma.hpp>

#endif
