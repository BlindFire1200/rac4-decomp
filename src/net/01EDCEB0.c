#include "common.h"

extern void (*D_001BCBBC[])(s32, s32);
extern s32 D_001BC9C4[];

/* Calls the net callback (if one is registered) with the fourth argument and a global value, then returns 36. */
s32 func_01EDCEB0(s32 a0, s32 a1, s32 a2, s32 a3) {
    void (*fp)(s32, s32) = D_001BCBBC[0];
    s32 v = a3;
    if (fp != 0) {
        fp(v, D_001BC9C4[0]);
    }
    return 0x24;
}
