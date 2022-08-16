// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=19937e8e0f9281513073c78b9152dd4afd3cc233$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_TEST_TEST_SERVER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_TEST_TEST_SERVER_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/test/cef_test_server_capi.h"
#include "include/test/cef_test_server.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefTestServerCToCpp : public CefCToCppRefCounted<CefTestServerCToCpp,
                                                       CefTestServer,
                                                       cef_test_server_t> {
 public:
  CefTestServerCToCpp();
  virtual ~CefTestServerCToCpp();

  // CefTestServer methods.
  void Stop() override;
  CefString GetOrigin() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_TEST_TEST_SERVER_CTOCPP_H_