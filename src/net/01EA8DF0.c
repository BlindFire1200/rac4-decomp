#include "common.h"

/* Returns whether the byte at arg0 lies within the inclusive range arg1[0]..arg1[1]. */
s32 func_01EA8DF0(u8 *arg0, u8 *arg1) {
    s32 c;
    s32 r;
    u8 v;

    v = *arg0;
    r = 0;
    if (v >= arg1[0]) {
        c = arg1[1] < v;
        r = c == 0;
    }
    return r;
}
