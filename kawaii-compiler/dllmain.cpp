#include <Windows.h>
#include <iostream>
#include <cstdint>
#include <string>
#include <thread>

int main() {

}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        std::thread(main).detach();
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

