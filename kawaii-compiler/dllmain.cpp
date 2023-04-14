#include <Windows.h>
#include <iostream>
#include <cstdint>
#include <string>
#include <thread>
#include "addresses.h"
int main() {
	r_print(0, (int)"Penis!");
}
BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
	 {
    case DLL_PROCESS_ATTACH:
        std::thread(main).detach();
		break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

