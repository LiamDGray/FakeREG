#ifndef PSYREG_H
#define PSYREG_H

#include "FakeREG.h"

// Defines

#define 	TRUE   1
#define 	FALSE   0

// Typedefs

typedef int 	BOOL;
typedef unsigned long 	bs_status;

// LDG's guess:
typedef int DataSource;

// LDG's guess: define as null
#define PSYREG_API FAKEREG_API

// Functions

PSYREG_API int 	PsyREGAPIVersion ();
PSYREG_API unsigned long 	PsyREGAPIBuild ();
PSYREG_API int 	PsyREGEnumerateSources ();
PSYREG_API unsigned int 	PsyREGGetSourceCount ();
PSYREG_API void 	PsyREGClearSources ();
PSYREG_API DataSource 	PsyREGGetSource (unsigned int uiIndex);
PSYREG_API void 	PsyREGReleaseSource (DataSource source);
PSYREG_API BOOL 	PsyREGOpen (DataSource source);
PSYREG_API void 	PsyREGClose (DataSource source);
PSYREG_API void 	PsyREGReset (DataSource source);
PSYREG_API BOOL 	PsyREGOpened (DataSource source);
PSYREG_API bs_status 	PsyREGGetStatus (DataSource source);
PSYREG_API const char * 	PsyREGGetDeviceType (DataSource source, char *szBuf);
PSYREG_API unsigned short * 	PsyREGGetDeviceTypeBSTR (DataSource source);
PSYREG_API const char * 	PsyREGGetDeviceId (DataSource source, char *szBuf);
PSYREG_API unsigned short * 	PsyREGGetDeviceIdBSTR (DataSource source);
PSYREG_API BOOL 	PsyREGGetBit (DataSource source, unsigned char *pucBuf);
PSYREG_API BOOL 	PsyREGGetByte (DataSource source, unsigned char *pucBuf);
PSYREG_API int 	PsyREGGetBits (DataSource source, unsigned char *pucBuf, int iMaxBits, BOOL bBlock);
PSYREG_API int 	PsyREGGetBytes (DataSource source, unsigned char *pucBuf, int iMaxBytes, BOOL bBlock);

// Variables

const int 	PSYREG_API_VERSION = 1;
const DataSource 	INVALID_DATASOURCE = -1;
const bs_status 	BSS_GOOD = 0x0000;
const bs_status 	BSS_CONNECTING = 0x0001;
const bs_status 	BSS_WAITING = 0x0002;
const bs_status 	BSS_BUSY = 0x0004;
const bs_status 	BSS_NODEVICE = 0x0008;
const bs_status 	BSS_READERROR = 0x0010;
const bs_status 	BSS_BADCFG = 0x0020;
const bs_status 	BSS_CANTPROCESS = 0x0040;
const bs_status 	BSS_INITERROR = 0x0080;
const bs_status 	BSS_TIMEOUT = 0x0100;
const bs_status 	BSS_GENERALERROR = 0x8000;
const bs_status 	BSS_INVALID = 0x0200;

#endif