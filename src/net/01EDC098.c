#include "common.h"

/* Calls the optional net callback stored at D_001BCA94 with the fourth argument and D_001BC89C, then returns 112. */

typedef void (*net_cb_t)(s32, s32);

extern net_cb_t D_001BCA94[];
extern s32 D_001BC89C[];

s32 func_01EDC098(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    net_cb_t cb = D_001BCA94[0];
    if (cb) {
        cb(arg3, D_001BC89C[0]);
    }
    return 112;
}
