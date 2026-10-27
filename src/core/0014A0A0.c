#include "common.h"

/* Returns the float at index arg2 of the array at arg0, the index clamped to 0 when arg2 >= arg1. */
f32 func_0014A0A0(f32 *arg0, s32 arg1, s32 arg2) {
    s32 idx = (arg2 >= arg1) ? 0 : arg2;
    return arg0[idx];
}
