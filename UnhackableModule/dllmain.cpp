// dllmain.cpp : Defines the entry point for the DLL application.
#include "UnhackableModule.h"

static bool g_isrunning = true;


//BOOL APIENTRY DllMain( HMODULE hModule,
//                       DWORD  ul_reason_for_call,
//                       LPVOID lpReserved
//                     )
//{
//    switch (ul_reason_for_call)
//    {
//    case DLL_PROCESS_ATTACH:
//        while (g_isrunning) {
//
//        }
//        break;
//    case DLL_THREAD_ATTACH:
//        break;
//    case DLL_THREAD_DETACH:
//    case DLL_PROCESS_DETACH:
//
//        if (!g_isrunning) {
//            HANDLE hStdout;
//
//            TCHAR buffer[255];
//            size_t stringLength;
//            DWORD charWritten;
//
//            // Get the standard output.
//            hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
//            StringCchPrintf(buffer, 255, TEXT("Currently detaching from the process...."));
//            StringCchLength(buffer, 255, &stringLength);
//
//            // Print to output.
//            WriteConsole(hStdout, buffer, (DWORD)stringLength, &charWritten, NULL);
//
//            // Sleep for 5000 ms.
//            Sleep(5000);
//            MessageBox(NULL, (LPCTSTR)TEXT("Stuff"), TEXT("Detaching"), MB_OK);
//        }
//
//        break;
//    }
//    return TRUE;
//}

