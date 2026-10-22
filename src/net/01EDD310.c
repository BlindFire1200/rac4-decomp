#include "common.h"

typedef void (*net_callback_t)(s32, s32);

extern net_callback_t D_001BCBD8[];
extern s32 D_001BC9E0[];

/* Dispatches the fourth argument to the registered network callback together with the current session id, then returns 0x1C. */
s32 func_01EDD310(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    net_callback_t callback = D_001BCBD8[0];
    if (callback != 0) {
        callback(arg3, D_001BC9E0[0]);
    }
    return 0x1C;
}
