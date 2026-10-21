#include "common.h"

typedef s32 (*ActionCallback)(s32, s32, s32, f32, s32);
extern ActionCallback *func_L00_005DEBD0(s32, s32, s32);

/* Look up action callback 0x200F and forward the remaining args to it, or return 0. */
s32 func_L04_00503AF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg, s32 arg4) {
    ActionCallback *cb = func_L00_005DEBD0(0x200F, 0, 4);
    if (cb == 0) {
        return 0;
    }
    return (*cb)(arg1, arg2, arg3, farg, arg4);
}
