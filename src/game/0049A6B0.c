#include "common.h"

extern u8 D_306D20[];

// Clear the bits of arg1 in the words at +0x8 and +0xC of 16-byte entry arg0 of D_306D20.
void func_0049A6B0(s32 arg0, s32 arg1) {
    s32 *e = (s32 *)(D_306D20 + arg0 * 16);
    s32 mask = ~arg1;
    e[2] = e[2] & mask;
    e[3] = e[3] & mask;
}
