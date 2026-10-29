#include "common.h"

u32 D_0021F150 = 0;
s32 D_21DAE4 = 0;

// Check if arg0 < 5, set globals and return 1, else return 0.
s32 func_00465AB0(u32 arg0) {
    if (arg0 >= 5U) {
        return 0;
    }
    D_0021F150 = arg0;
    D_21DAE4 |= 0x1000;
    return 1;
}
