/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 *(*D_0016F740_[])(s32, s32);

// Allocates a 12-byte record and a 4-byte child, initialising both.
s32 func_0014D8E8(s32 **arg0) {
    s32 *p;
    s32 *q;

    if (arg0 == 0) {
        return 1;
    }
    *arg0 = 0;
    p = D_0016F740_[0](1, 0xC);
    if (p == 0) {
        return 1;
    }
    *arg0 = p;
    q = D_0016F740_[0](0x21, 4);
    p[0] = q;
    if (q == 0) {
        return 1;
    }
    p[1] = 0;
    *(u16 *)((u8 *)p + 8) = 0;
    return 0;
}
