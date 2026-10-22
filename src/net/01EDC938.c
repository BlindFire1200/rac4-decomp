#include "common.h"

extern void (*D_001BCBAC[])(s32, s32);
extern s32 D_001BC9B4[];

/* Calls the optional net callback hook with the fourth argument and the global flag word, then returns 452. */
s32 func_01EDC938(s32 param0, s32 param1, s32 param2, s32 param3) {
    void (*hook)(s32, s32) = D_001BCBAC[0];
    if (hook != 0) {
        hook(param3, D_001BC9B4[0]);
    }
    return 452;
}
