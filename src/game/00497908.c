#include "common.h"

extern u8 D_2F32B8[];

// Clears the bits of arg1 in the word at offset 8 of the per-index record.
void func_00497908(s32 arg0, s32 arg1) {
    u8 *base = D_2F32B8;

    base += 8;
    *(s32 *)(base + arg0 * 0x54) &= ~arg1;
}
