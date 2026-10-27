#include "common.h"

extern s32 D_00167F38_[];
#define D_00167F38 (D_00167F38_[0])

// Clears the word at +0x12C of the object that D_00167F38 points to, and returns 0.
s32 func_01EC97B8(void) {
    *(s32 *)((u8 *)D_00167F38 + 0x12C) = 0;
    return 0;
}
