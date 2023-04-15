//#pragma once // who knows what this does
#include	<Windows.h> // install windows on the pc
#include	<string> // install string on the pc
#undef NULL // get out of here
#define ROBLOX_HN GetModuleHandleA // define the function for get the roblox
#define ROBLOX_C1	__cdecl // define the cdecl calling convention
#define ROBLOX_C2	__stdcall // define the stdcall calling convention
#define ROBLOX_C3	__thiscall // define the thiscall calling convention
#define ROBLOX_C4	__fastcall // define the fastcall calling convention
#define ROBLOX_C5	__declspec // define the declspec calling convention
#define ROBLOX_C6	__vectorcall // define the vectorcall calling convention
#define ROBLOX_C7	__forceinline // define the forceinline calling convention
#define ROBLOX_C8	__declspec // define the declspec calling convention
#define ROBLOX_C9	__pascal // define the pascal calling convention
#define ROBLOX_C10	__virtual_inheritance // define the virtual_inheritance calling convention
#define ROBLOX_C11	__forceinline // define the forceinline calling convention
#define ROBLOX_C12	__asm // define the asm calling convention
#define ROBLOX_C13	__cdecl // define the cdecl calling convention
#define ROBLOX_C14	__assume // define the assume calling convention
#define r_dots ... // define the things
#define r_W	while // define the while (loop)
#define r_F	for // define the for (loop)
#define r_I	if // define the if (condition)
#define r_D	do // define the do (axon 2027)
#define r_TD	typedef // define the typedef (like define)
#define r_U	union // define the union (like struct)
#define r_NS	namespace // define the namespace (like struct)
#define r_S	struct // define the struct (group of things)
#define r_SW	switch // define the switch (if)
#define r_CA	case // define the case (fast if)
#define r_R	return // define the return (exit program)
#define r_E	else // define the else (more ifs)
#define r_B	break // define the break (halt loop until more stuff)
#define r_C	continue // define the continue (exit loop and continue function)
#define r_Z	sizeof // define the sizeof (axon)
#define vp void* // localize a void* for performace reasons
#define ROBLOX // true that this is roblox and this is also for voider void
#define ROBLOX_E(a1,a2)	(a1==a2) // define the equal sign
#define ROBLOX_U(a1,a2)	(a1<a2) // define the under sign
#define ROBLOX_O(a1,a2)	(a1>a2) // define the over sign
#define ROBLOX_M(a1,a2)	(a1*a2) // define the muiltiply sign
#define ROBLOX_A(a1,a2)	(a1+a2) // define the add
#define ROBLOX_S(a1,a2)	(a1-a2) // define the minus sign
#define ROBLOX_AA(a1,a2)	(a1+=a2) // define the inlined add
#define NULL	0x00000000 // define the number
#define NOTHIN	VOID // define the nothing
#define rein	reinterpret_cast // define the caster
#define angle(a1,a2)	a1<a2> // define this syntax (DONT CHANGE)
#define s(n,v)	n=v; // create a setter
#define s2(t,n,v)	t n=v // create a better setter
#define s22(t,n,v)	t n=v; // create a other better setter
#define a(x,t)	(angle(rein,t)(x)) // create the cast
#define a2(x,t)	(*angle(rein,t*)(x)) // create the pcast
r_TD r_U addresses { // start the addys
#define ROBLOX_INT	int // define ints
#define ROBLOX_T LPTHREAD_START_ROUTINE
#define ROBLOX_DWORD	DWORD // define dword
#define ROBLOX_ZERO	0 // define number zero for use
#define ROBLOX_ONE	ROBLOX_A(ROBLOX_ZERO,1) // define number one for use
#define ROBLOX_H(N)	0x##N // create the hexer
#define ROBLOX_D(N)	N // create a decimel (MUST BE N)
#define ROBLOX_STR	std::string // define the string
#define ROBLOX_FUNC_CREATE(a1,a2,a3,...)	a(a1,a2(a3*)(__VA_ARGS__)) // define the function creater
#define ROBLOX_FUNC_CREATE2(a1,a2,a3)	a(a1,a2(a3*)()) // define the function creator
#define RBX_ADDY_OBF_DEOBF(x)	ROBLOX_S(ROBLOX_A(x,ROBLOX_H(400000)),ROBLOX_D(3932160)) // define the addy unhasher
#define RBX_BASE	ROBLOX_H(40000) // define the base of the roblox
#define x(x)	ROBLOX_A(x,ROBLOX_S(a(ROBLOX_HN(NULL),ROBLOX_DWORD),RBX_BASE)) // create the unencrypt algorithm
#define x2(x)	x // create the translater
#define r_print_address	x(RBX_ADDY_OBF_DEOBF(ROBLOX_H(CE1C00))) // define the address
#define r_print_ccv	ROBLOX_C1 // define the calling convention
#define r_print_return	NOTHIN // define the return type
#define r_print	x2(ROBLOX_FUNC_CREATE(r_print_address,r_print_return,r_print_ccv,ROBLOX_DWORD a1,ROBLOX_INT txt,r_dots)) // define the function
#define r_scheduler_address	x(RBX_ADDY_OBF_DEOBF(ROBLOX_H(726840))) // define the address
#define r_scheduler_ccv	ROBLOX_C13 // define the calling convention
#define r_scheduler_return	ROBLOX_DWORD // define the return type
#define r_scheduler	x2(ROBLOX_FUNC_CREATE2(r_scheduler_address,r_scheduler_return,r_scheduler_ccv)) // define the function
#define r_deserializer_address	x(RBX_ADDY_OBF_DEOBF(ROBLOX_H(34ABB0))) // define the address
#define r_deserializer_ccv	ROBLOX_C1 // define the calling convention
#define r_deserializer_return	ROBLOX_DWORD // define the return type
#define r_deserializer	x2(ROBLOX_FUNC_CREATE(r_deserializer_address,r_deserializer_return,r_deserializer_ccv,ROBLOX_INT rL,ROBLOX_STR*c,ROBLOX_DWORD txt,ROBLOX_DWORD idk)) // define the function
#define r_spawn_address	x(RBX_ADDY_OBF_DEOBF(ROBLOX_H(3D0ED0))) // define the address
#define r_spawn_ccv	ROBLOX_C13 // define the calling convention
#define r_spawn_return	ROBLOX_DWORD // define the return type
#define r_spawn	x2(ROBLOX_FUNC_CREATE(r_spawn_address,r_spawn_return,r_spawn_ccv,ROBLOX_DWORD rL)) // define the function
} addresses; // end the addys union
r_NS lua { // notify of possible lua activity
#define w(x)	t n=v; // create a better setter
r_S offsets { // start the offset
#define ROBLOX_GOT(g,o,t)	(a2(ROBLOX_A(ROBLOX_DWORD(g),ROBLOX_D(o)),t)) // define the got thing for offset
#define ROBLOX_GO(g,o)	(a2(ROBLOX_A(ROBLOX_DWORD(g),ROBLOX_D(o)),ROBLOX_DWORD)) // define the go thing for offset
#define r_s_js	ROBLOX_H(134) // define of the r_s_js offset
#define r_s_je	ROBLOX_D(312) // define of the r_s_je offset
#define r_j_n	ROBLOX_H(10) // define of the r_j_dm offset
#define r_j_c	ROBLOX_H(130) // define of the r_sj_sc offset
#define r_sc_l(x)	ROBLOX_S(ROBLOX_GO(x,244),ROBLOX_A(x,244))
#define RBX_AXONJOB "WaitingHybridScriptsJob" // define the axon lol
};}; // end the offset and the lua possibilitys
#define ROBLOX_START_MAIN CreateThread(NULL, NULL, (ROBLOX_T)(main), (vp)m, NULL, NULL); // define the main start method
#define ROBLOX_END_MAIN 

#define r_STR_STRING c_str() // define to converts a str to a string