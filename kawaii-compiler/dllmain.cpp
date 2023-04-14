#include <iostream> // starts the disk writer
#include <cstdint> // starts the compiler
#include <string> // makes a string
#include <thread> // makes threads
#include "addresses.h" // makes addys
int main() { // start the main function
 
} // end the main function
ROBLOX_INT ROBLOX_C2 DllMain(ROBLOX_DWORD m, ROBLOX_DWORD r, ROBLOX_INT l) { // start the dll main function
 switch (r) // switch the reason
 { // start the switch
  case 1: // if its ready then
   std::thread(main).detach(); // start the main function
   break; // break out of the case
  } // end the switch
 return TRUE;
} // end the dll main function

