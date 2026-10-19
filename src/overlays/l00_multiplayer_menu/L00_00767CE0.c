#include "common.h"

void func_0011D9A8(s32, u8 *, s32);
extern u8 D_002217E8[];

// Run func_0011D9A8 for three consecutive 8-byte slots of dest with D_002217E8
// and the values at the matching words (sibling of func_L00_00767C60).
void func_L00_00767CE0(s32 dest, s32 values) {
    s32 value_ptr = values;
    s32 out = dest;
    u32 count = 0;
    do {
        count += 1;
        func_0011D9A8(out, D_002217E8, value_ptr);
        value_ptr += 4;
        out += 8;
    } while (count < 3U);
}
