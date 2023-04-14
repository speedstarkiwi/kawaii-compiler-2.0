#pragma once
#include <Windows.h>
#define ROBLOX_HN GetModuleHandleA
#define ROBLOX_C__	__
#define ROBLOX_C1	ROBLOX_C__##cdecl
#define ROBLOX_C2	ROBLOX_C__##stdcall
#define ROBLOX_C3	ROBLOX_C__##thiscall
#define ROBLOX_C4	ROBLOX_C__##fastcall
#define ROBLOX_C5	ROBLOX_C__##declspec
#define ROBLOX_C6	ROBLOX_C__##vectorcall
#define ROBLOX_C7	ROBLOX_C__##forceinline
#define ROBLOX_C8	ROBLOX_C__##declspec
#define ROBLOX_C9	ROBLOX_C__##forceinline
#define ROBLOX_C10	ROBLOX_C__##virtual_inheritance
#define ROBLOX_C11	ROBLOX_C__##forceinline
#define ROBLOX_C12	ROBLOX_C__##asm
#define ROBLOX_C13	ROBLOX_C__##cdecl
#define ROBLOX_C14	ROBLOX_C__##assume
#define ROBLOX_ZERO	0
#define NULL	0x00000000
#define NOTHIN	VOID
#define rein	reinterpret_cast
#define angle(a1,a2)	a1<a2>
#define a(x,t)	(angle(rein,t)(x))
typedef union addresses {
#define ROBLOX_INT	int
#define ROBLOX_DWORD	DWORD
#define ROBLOX_H(N)	ROBLOX_ZERO##x##N
#define ROBLOX_D(N)	ROBLOX_ZERO##N
#define ROBLOX_STR	std::string
#define ROBLOX_FUNC_CREATE(a1,a2,a3,...)	a(a1,a2(a3*)(__VA_ARGS__))
#define ROBLOX_FUNC_CREATE2(a1,a2,a3)	a(a1,a2(a3*)())
#define RBX_ADDY_OBF_DEOBF(x)	x+ROBLOX_H(400000)-ROBLOX_D(3932160)
#define RBX_BASE	ROBLOX_H(40000)
#define x(x)	x+a(ROBLOX_HN(NULL),ROBLOX_DWORD)-RBX_BASE
#define x2(x)	x
#define r_print_address	x(RBX_ADDY_OBF_DEOBF(ROBLOX_H(CE1C00)))
#define r_print_ccv	ROBLOX_C1
#define r_print_return	NOTHIN
#define r_print	x2(ROBLOX_FUNC_CREATE(r_print_address,r_print_return,r_print_ccv, ROBLOX_DWORD a1, ROBLOX_INT txt))
#define r_scheduler_address	x(RBX_ADDY_OBF_DEOBF(ROBLOX_H(726840)))
#define r_scheduler_ccv	ROBLOX_C13
#define r_scheduler_return	ROBLOX_DWORD
#define r_scheduler	x2(ROBLOX_FUNC_CREATE2(r_scheduler_address,r_scheduler_return,r_scheduler_ccv))
#define r_deserializer_address	x(RBX_ADDY_OBF_DEOBF(ROBLOX_H(34ABB0)))
#define r_deserializer_ccv	ROBLOX_C1
#define r_deserializer_return	ROBLOX_DWORD
#define r_deserializer	x2(ROBLOX_FUNC_CREATE(r_deserializer_address,r_deserializer_return,r_deserializer_ccv, ROBLOX_INT rL, ROBLOX_STR* c, ROBLOX_DWORD txt, ROBLOX_DWORD idk))
#define r_spawn_address	x(RBX_ADDY_OBF_DEOBF(ROBLOX_H(3D0ED0)))
#define r_spawn_ccv	ROBLOX_C13
#define r_spawn_return	ROBLOX_DWORD
#define r_spawn	x2(ROBLOX_FUNC_CREATE(r_spawn_address,r_spawn_return,r_spawn_ccv, ROBLOX_DWORD rL))
} addresses;
namespace lua {
struct offsets {
#define r_s_js ROBLOX_H(134)
#define r_s_je ROBLOX_D(312)
#define r_j_dm ROBLOX_H(28)
};};