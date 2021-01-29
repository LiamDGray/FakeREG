#ifndef FAKEREG_H
#define FAKEREG_H
#include "framework.h"
#include "pch.h"

// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the FAKEREG_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// FAKEREG_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FAKEREG_EXPORTS
#define FAKEREG_API __declspec(dllexport)
#else
#define FAKEREG_API __declspec(dllimport)
#endif

// This class is exported from the dll
class FAKEREG_API CFakeREG {
public:
	CFakeREG(void);
	// TODO: add your methods here.
};

extern FAKEREG_API int nFakeREG;

FAKEREG_API int fnFakeREG(void);

#endif
