#include "common.h"

extern s32 D_001BCBB0[];
extern s32 D_001BC9B8[];

typedef void (*net_cb_t)(s32, s32);

/* Calls the registered network callback, if any, with the 4th argument and a global value, then returns 28. */
s32 func_01EDCA18(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    net_cb_t cb = (net_cb_t)D_001BCBB0[0];
    if (cb != 0) {
        cb(arg3, D_001BC9B8[0]);
    }
    return 28;
}
