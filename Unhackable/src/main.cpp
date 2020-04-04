
#include <windows.h>
#include <iostream>

typedef int(__cdecl *fnUnhackableModule)();

int main()
{
    //AllocConsole();
    HMODULE ourModule = NULL;

    // Dynamically load the UnhackableModule DLL into a separated thread.
    ourModule = LoadLibrary(L"UNHACKABLEMODULE.dll");

    fnUnhackableModule fnMod = (fnUnhackableModule)GetProcAddress(ourModule, "fnUnhackableModule");

    // Get the Handle with 0x1 flag aka pin_ex.
    if (GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_PIN, L"UNHACKABLEMODULE.dll", &ourModule))
    {
        std::cout << "Loaded our Module..\n";
        fnMod();
    }

    std::cout << "Free Library..\n";
    FreeLibrary(ourModule);
    Sleep(2500);
    std::cout << "Trying again...\n";
    FreeLibrary(ourModule);
    Sleep(2500);

    MessageBox(NULL, TEXT("FUCK IT"), TEXT("NOTHING TO SEE HERE"), MB_OK);

    return 0;
}