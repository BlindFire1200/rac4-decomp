#include "common.h"

extern void func_00497580(s32 *, s32, s32);
extern void func_00497628(s32 *, s32, s32);

// Compute an updated value of the word at value_ptr (func_00497580 when mode is
// nonzero, func_00497628 otherwise). When it differs, run before(), store it
// and run after(); returns 1 when it changed, else 0.
s32 func_004976C8(s32 *value_ptr, s32 param_a, s32 mode, void (*before)(void), void (*after)(void), s32 param_b) {
    s32 updated = *value_ptr;
    if (mode != 0) func_00497580(&updated, param_a, param_b);
    else func_00497628(&updated, param_a, param_b);
    if (*value_ptr == updated) return 0;
    if (before != 0) before();
    *value_ptr = updated;
    if (after != 0) after();
    return 1;
}
