#include "common.h"

extern s32 D_001BCB70[];
extern s32 D_001BC978[];

/* Calls the optional callback stored in D_001BCB70 with the fourth argument and D_001BC978, then returns 0x118. */
s32 func_01EDC698(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCB70[0] != 0) {
        ((void (*)(s32, s32))D_001BCB70[0])(arg3, D_001BC978[0]);
    }
    return 0x118;
}
