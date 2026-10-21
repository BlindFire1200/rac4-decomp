/* cflags: -mno-split-addresses */
#include "common.h"

void func_L05_004D6808(s32 arg0, s32 arg1) {
    u32 var_a0;
    s32 var_v0;

    var_a0 = (u32)(arg0 + 0x4C);
    var_v0 = 3;
    do {
        *(s32 *)var_a0 = arg1;
        var_v0 -= 1;
        var_a0 -= 4;
    } while (var_v0 >= 0);
}
