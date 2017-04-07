//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_MAJORITY_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_MAJORITY_HPP_INCLUDED

  /*!
    @ingroup group-predicates
    @defgroup real-majority majority (function object)

    This function object returns @ref [True](@ref constant-True) if at least two inputs
    are not @ref [Zero](@ref constant-Zero) else @ref [False](@ref constant-False).

    @headerref{<boost/simd/function/majority.hpp>}

    @par Description

      @code
      as_logical_t<Value> majority(Value const& x, Value const& y, Value const& z);
      @endcode

    @par Note

     Using `majority(x,y,z)` is similar to: `(x!= 0)+(y!= 0)+(z!= 0) >= 2`

    @par Example:

      @snippet majority.cpp majority

    @par Possible output:

      @snippet majority.txt majority

  **/

#include <boost/simd/function/scalar/majority.hpp>
#include <boost/simd/function/simd/majority.hpp>

#endif
