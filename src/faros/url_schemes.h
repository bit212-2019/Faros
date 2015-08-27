/**
 * This file is part of Faros.
 * 
 * Copyright 2015 Frank Duerr
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#ifndef URL_SCHEMES_H
#define URL_SCHEMES_H

// Arduino IDE has problems with enums passed as function parameters.
// Interestingly, you cannot declare the enum type in the file
// with a function having a parameter of this enum type. The workaround
// is to out-source the enum declaration to a separate file (as this
// one here).  
enum url_schemes {http_www_dot, https_www_dot, http, https};

#endif

