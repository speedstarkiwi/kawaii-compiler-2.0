#pragma once

#include <Windows.h>

typedef union addresses {
#define RBX_ADDY_OBF_DEOBF(x) x+0x400000-3932160
#define x(x) x + GetModuleHandleA(JOB_OBJECT_UILIMIT_NONE) - 0x400000
#define r_print_address x(RBX_ADDY_OBF_DEOBF(0xCE1C00))
} addresses;

namespace lua { struct {
#define r_top_offset 0x0
};};
