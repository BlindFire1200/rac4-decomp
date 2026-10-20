#include "common.h"

// Parse one letter 'A'..'[' at arg0: store its index in *arg1 and the next position in *arg2.

s32 func_L00_00709A78(u8 *arg0, s32 *arg1, u8 **arg2) {
    s32 r = 0;

    if (arg0[0] >= 'A' && arg0[0] <= 'Z' + 1) {
        if (arg1 != 0) {
            *arg1 = arg0[0] - 'A';
        }
        if (arg2 != 0) {
            *arg2 = arg0 + 1;
        }
        r = 1;
    }
    return r;
}
