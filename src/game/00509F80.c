#include "common.h"
/* C adapted from public RAC4 func_00509F80 at1e460f3a; layout offsets measured per destination. */

extern s32 D_00220B5C;

s32 func_00509F80(void *arg0, f32 fparg0, f32 fparg1) {
    u8 *object = arg0;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(arg0, D_00220B5C) != 0) {
        *(f32 *)(object + 0x14) = fparg0;
        *(f32 *)(object + 0x18) = fparg1;
        return 1;
    }
    return 0;
}
