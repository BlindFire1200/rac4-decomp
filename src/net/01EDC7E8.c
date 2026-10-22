#include "common.h"

/* Calls the registered network callback with the fourth argument and the net global when one is set, then returns 28. */
extern s32 D_001BCB88[];
extern s32 D_001BC990[];

typedef void (*net_cb_t)(s32, s32);

s32 func_01EDC7E8(s32 a0, s32 a1, s32 a2, s32 a3) {
    net_cb_t cb = (net_cb_t)D_001BCB88[0];
    if (cb != 0) {
        cb(a3, D_001BC990[0]);
    }
    return 28;
}
