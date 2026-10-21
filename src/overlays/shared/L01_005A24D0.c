#include "common.h"

void *func_005A16E8();

// Store the halfword value at +0x2C of the record func_005A16E8 returns.
void func_L01_005A24D0(s32 unused0, s32 value) {
    *(s16 *)((u8 *)func_005A16E8() + 0x2C) = value;
}
