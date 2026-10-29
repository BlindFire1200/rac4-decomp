#include "common.h"

extern void (*D_1BCA44[])(s32, s32);
extern s32 D_1BC84C[];

// Calls the optional callback stored in D_1BCA44 with the fourth argument and D_1BC84C[0], then returns 0x1C.
s32 func_01EDBC68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fp)(s32, s32) = D_1BCA44[0];

    if (fp) {
        fp(arg3, D_1BC84C[0]);
    }
    return 0x1C;
}
