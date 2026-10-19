#include "common.h"

typedef s32 (*Callback)(s32, s32, s32, s32, s32, s32);
extern Callback *func_L00_005DEBD0(s32, s32, s32);

// Dispatch to the callback registered under id 0x1E29, or return 0 when none is
// registered.
s32 func_L01_00550790(s32 unused0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    Callback *callback = func_L00_005DEBD0(0x1E29, 0, 4);
    if (callback == 0) return 0;
    return (*callback)(arg1, arg2, arg3, arg4, arg5, arg6);
}
