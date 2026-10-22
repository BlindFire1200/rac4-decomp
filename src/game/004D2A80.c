#include "common.h"

// Calls the callback at +0x10 of the current object's 0x1C-byte D_31B6B0 entry with a zero argument.
extern s32 func_00505B20(void);
extern u8 D_31B6B0[];

void func_004D2A80(void) {
    u8 *entry = D_31B6B0 + func_00505B20() * 0x1C;
    ((void (*)(s32))(*(s32 *)(entry + 0x10)))(0);
}
