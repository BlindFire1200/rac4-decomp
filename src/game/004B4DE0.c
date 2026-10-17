#include "common.h"
extern u8 D_309840[];
void func_0049A6B0(s32, s32);
void func_004B4DE0(s32 arg0) {
    s32 value = *(s32 *)D_309840 & ~(1 << arg0);
    *(s32 *)D_309840 = value;
    if (value == 0) {
        if (D_309840[0x25] != 0) *(s32 *)(D_309840 + 4) = 4;
        else *(s32 *)(D_309840 + 4) = 3;
    } else {
        func_0049A6B0(arg0, 0x400);
    }
}
