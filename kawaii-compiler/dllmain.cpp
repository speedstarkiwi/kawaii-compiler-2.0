#include <iostream> // starts the disk writer
#include <cstdint> // starts the compiler
#include <string> // makes a string
#include <thread> // makes threads
#include "scheduler.cpp" // makes scheduler
ROBLOX_INT main(ROBLOX) { // start the main function
 r_print(ROBLOX_ONE,(int)"akwaii"); // introduce yourself
	r_F(s2(ROBLOX_DWORD,ROBLOX_D(j),ROBLOX_GO(r_scheduler(),r_s_js));ROBLOX_U(j,ROBLOX_GO(r_scheduler(),r_s_je));ROBLOX_AA(j,ROBLOX_M(ROBLOX_ONE,ROBLOX_M(ROBLOX_A(ROBLOX_ONE,ROBLOX_ONE), r_Z(ROBLOX_DWORD))))) { // start the f area
		s2(ROBLOX_DWORD,ROBLOX_D(j2),ROBLOX_GO(j,ROBLOX_ZERO)); // define j2
		r_print(ROBLOX_ZERO, (ROBLOX_INT)(ROBLOX_GOT(j2, r_j_n, ROBLOX_STR).c_str())); // print that
	} // end the for
} // end the main function
ROBLOX_INT ROBLOX_C2 DllMain(ROBLOX_DWORD m, ROBLOX_DWORD r, ROBLOX_INT l) { // start the dll main function
 r_SW(r) // switch the reason
 { // start the switch
  r_CA(ROBLOX_ONE) : // if its ready then
   std::thread(main).detach(); // start the main function
   r_B ROBLOX; // break out of the case
  } // end the switch
 r_R(ROBLOX_ONE); // return it
} // end the dll main function

