#include "common.h"

extern void (*D_001BCB80[])(s32, s32);
extern s32 D_001BC988[];

// Hands the request to the installed network callback when one is present, then returns protocol id 28.
s32 func_01EDC778(s32 a0, s32 a1, s32 a2, s32 a3) {
    if (D_001BCB80[0] != 0) {
        D_001BCB80[0](a3, D_001BC988[0]);
    }
    return 28;
}
