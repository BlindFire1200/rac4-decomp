#include "common.h"

extern s32 D_00220B58;

s32 func_0050A870(void *arg0, s32 mask, s32 enable) {
    u8 *object = arg0;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(arg0, D_00220B58) != 0) {
        if (enable != 0) {
            *(u32 *)(object + 0xC) |= mask;
        } else {
            *(u32 *)(object + 0xC) &= ~mask;
        }
        return 1;
    }
    return 0;
}
