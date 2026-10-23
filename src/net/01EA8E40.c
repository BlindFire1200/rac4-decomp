#include "common.h"

/* Returns whether the unsigned value at arg0 lies within the inclusive range arg1[0]..arg1[1]. */
s32 func_01EA8E40(u32 *arg0, u32 *arg1) {
    s32 r;
    u32 v;
    s32 t;

    v = *arg0;
    r = 0;
    if (v >= arg1[0]) {
        t = arg1[1] < v;
        r = t == 0;
    }
    return r;
}
