// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

#include <simd_bench.hpp>
#include <boost/simd/pack.hpp>
#include <boost/simd/type/complex.hpp>
#include <boost/simd/type/complex/function/sqrt.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

 struct sqrt_bench
{
  template < class T >
  BOOST_FORCEINLINE bs::complex<T> operator()(const T & r, const T & i) const BOOST_NOEXCEPT
  {
    bs::complex<T> z{r, i};
    return bs::cmplx::sqrt(z);
  }
};

DEFINE_SIMD_BENCH(simd_sqrt, sqrt_bench());

DEFINE_BENCH_MAIN()
{
  nsb::for_each<simd_sqrt, float>(-10, 10, -10, 10);
}


