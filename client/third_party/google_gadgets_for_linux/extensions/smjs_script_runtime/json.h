/*
  Copyright 2008 Google Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#ifndef EXTENSIONS_SMJS_SCRIPT_RUNTIME_JSON_H__
#define EXTENSIONS_SMJS_SCRIPT_RUNTIME_JSON_H__

#include <string>
#include "libmozjs_glue.h"

namespace ggadget {
namespace smjs {

/**
 * Encodes a JavaScript value into JSON string.
 */
JSBool JSONEncode(JSContext *cx, jsval js_val, std::string *json);

/**
 * Decodes a JSON string into a JavaScript value.
 */
JSBool JSONDecode(JSContext *cx, const char *json, jsval *js_val);

} // namespace smjs
} // namespace ggadget

#endif  // EXTENSIONS_SMJS_SCRIPT_RUNTIME_JSON_H__
