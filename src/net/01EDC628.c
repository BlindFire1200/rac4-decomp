#include "common.h"

extern void (*D_001BCB68[])(s32, s32);
extern s32 D_001BC970[];

/* Forwards the fourth argument to the registered net callback, if one is set. */
s32 func_01EDC628(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCB68[0] != 0) {
        D_001BCB68[0](arg3, D_001BC970[0]);
    }
    return 0x1C;
}
