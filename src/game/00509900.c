#include "common.h"

extern s32 D_00220B58;

s32 func_00509900(void *arg0, s32 *arg1, s32 *arg2) {
    u8 *object = arg0;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(arg0, D_00220B58) != 0) {
        *arg1 = (*(u32 *)(object + 0xC) >> 9) & 3;
        *arg2 = (*(u32 *)(object + 0xC) >> 11) & 3;
        return 1;
    }
    return 0;
}
