// FakeREG.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "FakeREG.h"
#include "psyreg.h"

#undef PSYREG_API
#define PSYREG_API FAKEREG_API

// This is an example of an exported variable
FAKEREG_API int nFakeREG=0;

// This is an example of an exported function.
FAKEREG_API int fnFakeREG(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CFakeREG::CFakeREG()
{
    return;
}

PSYREG_API int 	PsyREGAPIVersion()
{
    return 0;
}

PSYREG_API unsigned long 	PsyREGAPIBuild()
{
    return 0;
}

PSYREG_API int 	PsyREGEnumerateSources()
{
    return 0;
}

PSYREG_API unsigned int 	PsyREGGetSourceCount()
{
    return 0;
}

PSYREG_API void 	PsyREGClearSources()
{
    return;
}

PSYREG_API DataSource 	PsyREGGetSource(unsigned int uiIndex)
{
    return 0;
}

PSYREG_API void 	PsyREGReleaseSource(DataSource source)
{
    return;
}

PSYREG_API BOOL 	PsyREGOpen(DataSource source)
{
    return TRUE;
}

PSYREG_API void 	PsyREGClose(DataSource source)
{
    return;
}

PSYREG_API void 	PsyREGReset(DataSource source)
{
    return;
}

PSYREG_API BOOL 	PsyREGOpened(DataSource source)
{
    return 0;
}

PSYREG_API bs_status 	PsyREGGetStatus(DataSource source)
{
    return 0;
}

PSYREG_API const char* PsyREGGetDeviceType(DataSource source, char* szBuf)
{
    static const char dummy = 0;
    return &dummy;
}

PSYREG_API unsigned short* PsyREGGetDeviceTypeBSTR(DataSource source)
{
    static unsigned short dummy = 0;
    return &dummy;
}

PSYREG_API const char* PsyREGGetDeviceId(DataSource source, char* szBuf)
{
    static const char dummy = 0;
    return &dummy;
}

PSYREG_API unsigned short* PsyREGGetDeviceIdBSTR(DataSource source)
{
    static unsigned short dummy = 0;
    return &dummy;
}

PSYREG_API BOOL 	PsyREGGetBit(DataSource source, unsigned char* pucBuf)
{
    return 0;
}

PSYREG_API BOOL 	PsyREGGetByte(DataSource source, unsigned char* pucBuf)
{
    return 0;
}

PSYREG_API int 	PsyREGGetBits(DataSource source, unsigned char* pucBuf, int iMaxBits, BOOL bBlock)
{
    return 0;
}

PSYREG_API int 	PsyREGGetBytes(DataSource source, unsigned char* pucBuf, int iMaxBytes, BOOL bBlock)
{
    return 0;
}
