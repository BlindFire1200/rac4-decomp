/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 *(*D_0016F740_[])(s32, s32);

/* Allocates a 12-byte object, stores 5.0f in it and reports failure. */
s32 func_001502F8(s32 *arg0) {
    s32 *p;
    s32 r = 0;

    if (arg0 == 0) {
        return 1;
    }
    *arg0 = 0;
    p = D_0016F740_[0](1, 0xC);
    if (p == 0) {
        r = 1;
    } else {
        *arg0 = p;
        *(f32 *)((u8 *)p + 8) = 5.0f;
    }
    return r;
}
