#include "common.h"

extern u8 D_309840[];
void func_0049A6B0(s32, s32);

// Clear bit index of the mask at D_309840. When no bit is left set the state
// word at +4 to 4 or 3 depending on the +0x25 byte, otherwise run func_0049A6B0
// with 0x400 for that index.
void func_004B4DE0(s32 index) {
    s32 value = *(s32 *)D_309840 & ~(1 << index);
    *(s32 *)D_309840 = value;
    if (value == 0) {
        if (D_309840[0x25] != 0) *(s32 *)(D_309840 + 4) = 4;
        else *(s32 *)(D_309840 + 4) = 3;
    } else {
        func_0049A6B0(index, 0x400);
    }
}
