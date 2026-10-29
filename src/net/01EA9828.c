#include "common.h"

// Stores a 16-bit value through arg0 as two bytes, high byte at +1; returns 0 on success, 2 when arg0 is null.
s32 func_01EA9828(u8 *arg0, s32 arg1) {
    u8 hi;
    s32 var_v0;
    u16 val = arg1;

    hi = val >> 8;
    var_v0 = 2;
    if (arg0 != NULL) {
        arg0[0] = val;
        var_v0 = 0;
        arg0[1] = hi;
    }
    return var_v0;
}
