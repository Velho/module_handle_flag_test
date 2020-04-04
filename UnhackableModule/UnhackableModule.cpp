// UnhackableModule.cpp : Defines the exported functions for the DLL.
//


#include "UnhackableModule.h"

#include <windows.h>
#include <tchar.h>
#include <strsafe.h>

// This is an example of an exported variable
UNHACKABLEMODULE_API int nUnhackableModule=0;

// This is an example of an exported function.
UNHACKABLEMODULE_API int fnUnhackableModule(void)
{
    HANDLE hStdout;

    TCHAR buffer[255];
    size_t stringLength;
    DWORD charWritten;

    // Get the standard output.
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    StringCchPrintf(buffer, 255, TEXT("Currently running..."));
    StringCchLength(buffer, 255, &stringLength);

    // Print to output.
    WriteConsole(hStdout, buffer, (DWORD)stringLength, &charWritten, NULL);

    // Sleep for 5000 ms.
    Sleep(5000);
    return 0;
}

// This is the constructor of a class that has been exported.
CUnhackableModule::CUnhackableModule()
{
    return;
}
