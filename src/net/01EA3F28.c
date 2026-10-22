#include "common.h"

extern s32 func_0011A370(s32, char *, s32);
extern char D_001AFD80[];

/* Returns 10 when the handle is null, otherwise clears it through func_0011A370 and returns 0. */
s32 func_01EA3F28(s32 a0) {
    s32 var_v0;

    var_v0 = 0xA;
    if (a0 != 0) {
        func_0011A370(a0, D_001AFD80, 0x28);
        var_v0 = 0;
    }
    return var_v0;
}
