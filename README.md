### oscarsandersonWrapper 

is an improve work of the magnificient Oscar Sanderson ISO8583 Library widely use 
c, C++ project I have not seen any wrapper for C++ that are public and with Interface
of CMake so I added, probably for public I wont update anymore but this is a useful
for someone that is looking it. from my side is free, at any case anything that is needed
please send me message on issues or PR. feel free to share it. remember read bellow this line
original work belongs to Oscar Sanderson bellow is the information regarding to it. 


#### Build 
```
    mkdir build
    cd build 
    cmake .. <some flags....>
    cmake --build . 
    (OPTIONAL) cmake --install
```

#### Using in C++ 

please include this file OscarSandersonWrapper.h, example bellow.
```
#include "OscarSandersonWrapper.h"
...
using namespace OscarSanderson;
...
using OscarSanderson::DL_ISO8583_DEFS_1993_GetHandler;
...
OscarSanderson::DL_ISO8583_DEFS_1993_GetHandler(nullptr, nullptr,...);

```

##### To do

- Adapt function calls.
- create String Wrappers
- Implement Test probably GMOCK or Catcher.


#####  ORIGINAL SOURCE FROM THIS
Copied from Oscar Sanderson's DL ISO-8583 C Library (v0.4)

http://www.oscarsanderson.com/iso-8583/

CONTENTS
--------

This package contains the following source code files:

  - demo.c

      Demo application source, with message packing/unpacking example

  - benchmark.c
  
      Benchmark source, to benchmark pack/unpack operations

  - dl_c_iso8583_v0_0_3 (16th July 2008)

      DL ISO-8583 library source files

  - dl_c_common_v0_0_2 (14th October 2007)

      DL Common source files (used by DL ISO-8583)

  - benchmark / demo
  
      Sample MSVC 6.0 project files

COMPILATION
-----------

Simply compile all the provided source code to run the demo application, from
there you can easily integrate the DL ISO-8583 library into other projects.

If using MSVC 6.0 then simply open the applicable DSW file.

CHANGE HISTORY
--------------

This version includes the following changes:

  [Bug-fix] Fixed issue in 'VarLen_Get' (dl_iso8583_fields.c) which resulted in
            the length being incorrectly determined (during unpack) for any
            variable length field with a length equal to or exeeding 100

BUGS / SUGGESTIONS
------------------

Please email any bugs or suggestions to 'o.sanderson@gmail.com'.



### New Add as CMakeLists project