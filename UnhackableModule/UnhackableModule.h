#ifndef MODULE_H
#define MODULE_H

// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the UNHACKABLEMODULE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// UNHACKABLEMODULE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef UNHACKABLEMODULE_EXPORTS
#define UNHACKABLEMODULE_API __declspec(dllexport)
#else
#define UNHACKABLEMODULE_API __declspec(dllimport)
#endif

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <tchar.h>
#include <strsafe.h>


// This class is exported from the dll
class UNHACKABLEMODULE_API CUnhackableModule {
public:
	CUnhackableModule(void);
};

#ifdef __cplusplus
extern "C" {
#endif

	extern UNHACKABLEMODULE_API int nUnhackableModule;

	UNHACKABLEMODULE_API int fnUnhackableModule(void);

#ifdef __cplusplus
}
#endif

#endif

