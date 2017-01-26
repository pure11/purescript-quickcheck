///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Gen.hh
// Copyright   :  (c) Andy Arvanitis 2016
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
// Quickcheck FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#ifndef Test_QuickCheck_Gen_FFI_HH
#define Test_QuickCheck_Gen_FFI_HH

#include "PureScript/PureScript.hh"

namespace Test_QuickCheck_Gen {
  using namespace PureScript;

  // foreign import float32ToInt32 :: Number -> Int
  //
  inline auto float32ToInt32(const double d) -> int {
    static_assert(sizeof(float) == sizeof(int), "sizes must match");
    const float f = static_cast<float>(d);
    const int * i = reinterpret_cast<const int*>(&f);
    return *i;
  }

}

#endif // Test_QuickCheck_Gen_FFI_HH
