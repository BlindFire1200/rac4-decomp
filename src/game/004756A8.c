#include "common.h"

/* Computes arg0 + (s32)((arg1 - arg0) * fparg0): a linear blend between two ints scaled by a float factor. */
s32 func_004756A8(s32 arg0, s32 arg1, f32 fparg0) {
    return arg0 + (s32)((arg1 - arg0) * fparg0);
}
