#include <Windows.h>
#include <iostream>
#include <cstdint>
#include <string>
#include <thread>
#include "addresses.h"
int main() {
	r_print(0, (int)"Penis!");
}
BOOL ROBLOX_C2 DllMain(ROBLOX_DWORD m, ROBLOX_DWORD r, ROBLOX_INT l) {
 switch (r)
 {
  case 1:
   std::thread(main).detach();
   break;
  }
 return TRUE;
}

