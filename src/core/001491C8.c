/* cflags: -fno-opt-stack */
#include "common.h"

extern void (*D_0016F744_[])(s32);
#define D_0016F744 (D_0016F744_[0])

// Frees the object held by the pointer, clears it and returns 0.
s32 func_001491C8(s32 *arg0) {
    if (*arg0 != 0) {
        D_0016F744(*arg0);
        *arg0 = 0;
    }
    return 0;
}
