#include "common.h"

/* Returns whether the signed value at arg0 lies within the inclusive range arg1[0]..arg1[1]. */
s32 func_01EA8E18(s32 *arg0, s32 *arg1) {
    s32 r;
    s32 v;
    s32 t;

    v = *arg0;
    r = 0;
    if (v >= arg1[0]) {
        t = arg1[1] < v;
        r = t == 0;
    }
    return r;
}
