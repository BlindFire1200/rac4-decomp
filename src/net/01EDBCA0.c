#include "common.h"

/* Calls the net callback stored in D_001BCA48 with the 4th argument and D_001BC850, then returns 0x20. */
extern void (*D_001BCA48[])(s32, s32);
extern s32 D_001BC850[];

s32 func_01EDBCA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fp)(s32, s32) = D_001BCA48[0];

    if (fp) {
        fp(arg3, D_001BC850[0]);
    }
    return 0x20;
}
