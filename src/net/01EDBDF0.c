#include "common.h"

extern s32 D_001BCA6C[];
extern s32 D_001BC874[];

/* Calls the callback registered at D_001BCA6C (if any) with the fourth argument and D_001BC874, then returns 32. */
s32 func_01EDBDF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fp)(s32, s32) = (void (*)(s32, s32))D_001BCA6C[0];

    if (fp != 0) {
        fp(arg3, D_001BC874[0]);
    }
    return 0x20;
}
