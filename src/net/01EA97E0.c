#include "common.h"

// Stores the low byte of arg1 through arg0 when arg0 is non-null; returns 0 on success, 2 when arg0 is null.
s32 func_01EA97E0(u8 *arg0, s32 arg1) {
    u8 val = arg1;
    s32 var_v0;

    var_v0 = 2;
    if (arg0 != NULL) {
        *arg0 = val;
        var_v0 = 0;
    }
    return var_v0;
}
