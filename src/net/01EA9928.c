#include "common.h"

/* Stores the low halfword of arg1 through arg0, high byte at +0 and low byte at +1; returns 0 on success, 2 when arg0 is null. */
s32 func_01EA9928(u8 *arg0, s32 arg1) {
    u16 val = arg1;
    u8 hi = val >> 8;
    s32 var_v0;

    var_v0 = 2;
    if (arg0 != NULL) {
        arg0[0] = hi;
        var_v0 = 0;
        arg0[1] = val;
    }
    return var_v0;
}
