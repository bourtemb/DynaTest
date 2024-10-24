# DynaTest

## Description
A simple Tango class which can be used to test the Tango dynamic attributes features.

It was created to experiment with Tango dynamic attributes features and to help
identifying the current limitations.

## Build
- `cmake -B build -S .`
- `cmake --build build`

If this does not work for your Tango installation, you can use Pogo to regenerate a Makefile or a CMakefile.txt that fits your install settings.

## How to use?

This class provides some device properties which can be used to define the names of the DoubleRO, DoubleRW, LongRO and LongRW scalar dynamic we want to be created.
These properties are:
- DynDoubleROAttrNames
- DynDoubleRWAttrNames
- DynLongROAttrNames
- DynLongRWAttrNames

These properties are of type array of string.
This means that if you edit these properties from jive, you must put 1 attribute name per line.

## cppTango#814 investigations

As described in https://github.com/tango-controls/cpptango/issues/814, it is currently impossible to get a server like DynaTest exporting several devices in the same process which are creating dynamic attributes with the same name but a different types or Read/Write type.
If the devices are created in different processes (different device server instances), it is possible.

To show this limitation, you can load the DynaTest-\*.txt files into jive (File -> load property file).

These property files will create 3 different DynaTest device server instances:
- DynaTest/test: which is exporting 2 devices (test/dyna/1 and test/dyna/2) which are creating each 4 dynamic attributes of the same names but with different types or read/write types. If you start this device server, you will see that some dynamic attributes are not created.
- DynaTest/test1: exporting test/dyna/test1 which has exactly the same properties as test/dyna/1 - All dynamic attributes created successfully
- DynaTest/test2: exporting test/dyna/test2 which has exactly the same properties as test/dyna/2 - All dynamic attributes created successfully
