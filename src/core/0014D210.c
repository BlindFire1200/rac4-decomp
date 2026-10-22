/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 func_0014D8E8(s32 **arg0);
extern s32 func_0014DED8(void *arg0, s32 arg1, f32 arg2);
extern s32 *(*D_0016F740_[])(s32, s32);
#define D_0016F740 (D_0016F740_[0])

/* Allocates and initialises the child object of the validated parent. */
s32 func_0014D210(u8 *arg0) {
    u8 *holder;
    u8 *obj;

    if (arg0 == 0 || *(s64 *)arg0 != 0xFACE) {
        return 0x17D4;
    }
    holder = *(u8 **)(arg0 + 0x1C);
    obj = (u8 *)D_0016F740(1, 0x20);
    *(u8 **)(holder + 0x4C) = obj;
    if (obj == 0) {
        return 0x1770;
    }
    if (func_0014DED8(obj + 4, 0xA0, 8000.0f) != 0) {
        return 0x1770;
    }
    if (func_0014D8E8((s32 **)(obj + 8)) != 0) {
        return 0x1770;
    }
    *(u8 **)obj = arg0;
    *(u16 *)(obj + 0x14) = 0;
    *(u8 *)(obj + 0x1E) = 0;
    return 0;
}
