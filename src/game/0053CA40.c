#include "common.h"

extern s32 func_0053C9F0();

// Calls func_0053C9F0 with the caller's two arguments and 0, and returns whether the result is nonzero.
s32 func_0053CA40(void *arg0, s32 arg1) {
    return func_0053C9F0(arg0, arg1, 0) != 0;
}
