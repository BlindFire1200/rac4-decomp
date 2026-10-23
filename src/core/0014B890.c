/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 *(*D_0016F740_[])(s32, s32);

// Allocates a 12-byte record, initialises it with the given float.
s32 func_0014B890(s32 **arg0, f32 arg1) {
    *arg0 = D_0016F740_[0](1, 0xC);
    if (*arg0 == 0) {
        return 1;
    }
    (*arg0)[0] = 0;
    (*arg0)[1] = 0;
    ((f32 *)(*arg0))[2] = arg1;
    return 0;
}
