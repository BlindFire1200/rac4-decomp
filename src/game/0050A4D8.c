#include "common.h"
extern s32 func_0050DE18(void *, s32, s32, s32, s32);
extern s32 D_1D8DC;

/* Call method and optionally invoke handler */
s32 func_0050A4D8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void **ptr_struct;
    s32 (*method)(s32, s32);
    s32 result;

    ptr_struct = (void **)((u8 *)arg0 + 0x8);
    method = (s32 (*)(s32))*(s32 *)((u8 *)*ptr_struct + 0x14);

    result = method((s32)arg0, D_1D8DC);

    if (result != 0) {
        func_0050DE18(arg0, arg1, arg2, arg3, arg4);
        return 1;
    }
    return 0;
}
