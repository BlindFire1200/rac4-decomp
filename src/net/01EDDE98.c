#include "common.h"

extern void (*D_001BCC1C[])(s32, s32);
extern s32 D_001BCA24[];

/* Calls the optional net callback with the last argument and a global value, then returns 28. */
s32 func_01EDDE98(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fp)(s32, s32) = D_001BCC1C[0];
    if (fp != 0) {
        fp(arg3, D_001BCA24[0]);
    }
    return 28;
}
