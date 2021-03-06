// Copyright (c) 2014-2021 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#include "test.hpp"
#include "verify_ifmt.hpp"

namespace TAO_PEGTL_NAMESPACE
{
   void unit_test()
   {
      verify_ifmt< if_must_else >( result_type::global_failure );
   }

}  // namespace TAO_PEGTL_NAMESPACE

#include "main.hpp"
