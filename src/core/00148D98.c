/* cflags: -fno-opt-stack */
#include "common.h"

extern void (*D_0016F744_[])(s32);

// Frees the object held by the pointer, clears it and returns 0.
s32 func_00148D98(s32 *arg0) {
    if (*arg0 != 0) {
        D_0016F744_[0](*arg0);
        *arg0 = 0;
    }
    return 0;
}
