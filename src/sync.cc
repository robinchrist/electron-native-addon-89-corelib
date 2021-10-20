/*********************************************************************
 * NAN - Native Abstractions for Node.js
 *
 * Copyright (c) 2018 NAN contributors
 *
 * MIT License <https://github.com/nodejs/nan/blob/master/LICENSE.md>
 ********************************************************************/

#include <nan.h>
#include "sync.h"  // NOLINT(build/include)
//#include "macro-inferno.h"

namespace CVO::node {
  // Simple synchronous access to the `Estimate()` function
  NAN_METHOD(CalculateSync) {
    v8::Local<v8::Array> resultArray = Nan::New<v8::Array>(9);
    for (auto i = 0; i < 9; i++) {
      Nan::Set(resultArray, i, Nan::New(float(i)));
    }
    info.GetReturnValue().Set(resultArray);
  }

}
