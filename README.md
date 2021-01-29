# FakeREG
Stub library presenting same interface as REG-1 driver DLL

Contains a Visual Studio 2019 solution that builds FakeREG.DLL.  (Tested on Windows 10 x64.)

FakeREG.DLL implements the same interfaces as the driver DLL supplied with the Psyleron REG-1.

This was done to enable creation of a Python wrapper to call into the DLL, and to test that wrapper.

The wrapper, psyreg.py, was generated from psyreg.h by using https://github.com/davidjamesca/ctypesgen

psyreg.h was written to match the API https://www.psyleron.com/sdkdoc/index.html
