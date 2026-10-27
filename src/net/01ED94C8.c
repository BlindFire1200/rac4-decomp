/* cflags: -mno-split-addresses */
#include "common.h"

extern s32 D_1B7908[];

/* Returns D_1B7908[arg0] when arg0 is below 2, otherwise 1. */
s32 func_01ED94C8(u32 arg0) {
    u32 off;
    s32 var_v0;

    off = arg0 * 4;
    var_v0 = 1;
    if (arg0 < 2U) {
        var_v0 = *(s32 *)((u32)D_1B7908 + off);
    }
    return var_v0;
}
