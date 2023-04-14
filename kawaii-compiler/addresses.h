#pragma once
#include <Windows.h>
#define NULL 0x00000000
#define rein reinterpret_cast
#define angle(a1,a2) a1<a2>
typedef union addresses {
#define ROBLOX_FUNC_CREATE(a1,a2,a3,...) (a2(a3*)(__VA_ARGS__))(a1)
#define ROBLOX_FUNC_CREATE2(a1,a2,a3) (a2(a3*)())(a1)
#define RBX_ADDY_OBF_DEOBF(x)	x+0x400000-3932160
#define RBX_BASE	0x40000
#define x(x)	x+GetModuleHandleA(NULL)-RBX_BASE
#define x2(x)	x
#define r_print_address x(RBX_ADDY_OBF_DEOBF(0xCE1C00))
#define r_print_ccv __cdecl
#define r_print_return int
#define r_print x2(ROBLOX_FUNC_CREATE2(r_print_address,r_print_return,r_print_ccv, int a1, int txt))
#define r_scheduler_address x(RBX_ADDY_OBF_DEOBF(0x726840))
#define r_scheduler_ccv __cdecl
#define r_scheduler_return int
#define r_scheduler x2(ROBLOX_FUNC_CREATE(r_scheduler_address,r_scheduler_return,r_scheduler_ccv))
#define r_deserializer_address x(RBX_ADDY_OBF_DEOBF(0x34ABB0))
#define r_deserializer_ccv __cdecl
#define r_deserializer_return int
#define r_deserializer x2(ROBLOX_FUNC_CREATE2(r_deserializer_address,r_deserializer_return,r_deserializer_ccv, int rL, std::string c, int txt, int idk))
#define r_spawn_address x(RBX_ADDY_OBF_DEOBF(0x3D0ED0))
#define r_spawn_ccv __cdecl
#define r_spawn_return int
#define r_spawn x2(ROBLOX_FUNC_CREATE2(r_spawn_address,r_spawn_return,r_spawn_ccv, int rL))
} addresses;
namespace lua {
struct offsets {
#define r_s_js 0x134
#define r_s_je 312
#define r_j_dm 0x28
};};
#define c(x,t) (angle(rein,t)(x))