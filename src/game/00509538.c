#include "common.h"
extern s32 func_0050EE40(void *, s32, s16, s16, s32);
extern s32 D_00220B68;
s32 func_00509538(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4) {
    s32 (*method)(void *, s32);
    method = *(s32 (**)(void *, s32))((u8 *)*(void **)((u8 *)arg0 + 8) + 0x14);
    if (method(arg0, D_00220B68) != 0) {
        func_0050EE40(arg0, arg1, arg2, arg3, arg4);
        return 1;
    }
    return 0;
}
