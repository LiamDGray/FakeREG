# FakeREG
Stub library presenting same interface as REG-1 driver DLL

Contains a Visual Studio 2019 solution that builds FakeREG.DLL.

FakeREG.DLL implements functions with the same names and interfaces as Psyleron’s driver DLL for its REG-1.  

This was done to enable Liam to create a Python wrapper to call into the DLL, and to test that wrapper.

psyreg.h was written by Liam to match the API https://www.psyleron.com/sdkdoc/index.html

psyreg.py was generated from psyreg.h by using https://github.com/davidjamesca/ctypesgen

