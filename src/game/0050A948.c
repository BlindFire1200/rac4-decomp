#include "common.h"

extern s32 D_00220B58;
extern void func_0050C058(void *, s32, s32);

// If the object supports D_00220B58 (checked with the method at +0x14 of its +8
// table), run func_0050C058 with the two arguments and return 1; otherwise
// return 0.
s32 func_0050A948(void *arg0, s32 arg1, s32 arg2) {
    u8 *object = arg0;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(arg0, D_00220B58) != 0) {
        func_0050C058(arg0, arg1, arg2);
        return 1;
    }
    return 0;
}
