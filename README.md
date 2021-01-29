# FakeREG

Python wrapper for REG-1 driver DLL, and a fake header and DLL used to generate and test the wrapper. For Windows only, because the REG-1’s DLL works only on Windows.
Contains:
1. Visual Studio 2019 solution that builds FakeREG.DLL. (Can build 32-bit or 64-bit versions, but tested on Windows 10 x64.)  FakeREG.DLL implements the same interfaces as the driver DLL supplied with the Psyleron REG-1.
2. This was done to enable creation of a Python wrapper to call into the DLL, and to test that wrapper.
3. The wrapper, psyreg.py, was generated from psyreg.h by using https://github.com/davidjamesca/ctypesgen after psyreg.h was written to match the API https://www.psyleron.com/sdkdoc/index.html

Usage example:

Python example based on https://www.psyleron.com/reg1_sdk_csample.html :

  import psyreg
  iNewSources = psyreg.PsyREGEnumerateSources()
  Source = psyreg.PsyREGGetSource( 0 )    
  bResult = psyreg.PsyREGOpen( Source )
  iResult = psyreg.PsyREGGetBytes( Source, rgucReadBuffer, 256, FALSE )
  # OR: iResult = psyreg.PsyREGGetBits( Source, rgucReadBuffer, 256, FALSE )
  psyreg.PsyREGClose( Source );

Work in progress! Currently doesn’t work yet.
