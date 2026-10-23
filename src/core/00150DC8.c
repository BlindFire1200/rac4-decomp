/* cflags: -fno-opt-stack */
#include "common.h"

extern void func_00150370(s32 *arg0);
extern void (*D_0016F744_[])(s32);

/* Frees the three objects referenced by the arguments. */
s32 func_00150DC8(u32 **arg0, u32 **arg1, u32 **arg2) {
    u32 *p0;
    u32 *p1;
    u32 *p2;
    u32 *q;

    p0 = *arg2;
    p2 = *arg0;
    p1 = *arg1;
    if (p0 != 0) {
        func_00150370((s32 *)p0);
        D_0016F744_[0]((s32)p0);
    }
    if (p1 != 0) {
        func_00150370((s32 *)p1);
        D_0016F744_[0]((s32)p1);
    }
    if (p2 != 0) {
        func_00150370((s32 *)p2);
        q = (u32 *)p2[1];
        if (q != 0) {
            D_0016F744_[0]((s32)q);
            p2[1] = 0;
        }
        D_0016F744_[0]((s32)p2);
    }
    return 0;
}
