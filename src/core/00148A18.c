/* cflags: -fno-opt-stack */
#include "common.h"

extern void (*D_0016F744_[])(s32);

// Releases the object and its child object.
s32 func_00148A18(s32 **arg0) {
    s32 *p = *arg0;

    if (p != 0) {
        if (p[2] != 0) {
            D_0016F744_[0](p[2]);
            p[2] = 0;
        }
        D_0016F744_[0](p);
    }
    return 0;
}
