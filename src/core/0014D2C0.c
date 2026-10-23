/* cflags: -fno-opt-stack */
#include "common.h"

extern void (*D_0016F744_[])(s32);

s32 func_0014DFB0(s32 *);
s32 func_0014D970(s32 *);

// Validates the object and releases its children.
s32 func_0014D2C0(u8 *arg0) {
    u8 *holder;
    u8 *obj;

    if (arg0 == 0 || *(s64 *)arg0 != 0xFACE) {
        return 0x17D4;
    }
    if (arg0[0x18] != 0xA) {
        return 0x17DE;
    }
    holder = *(u8 **)(arg0 + 0x1C);
    obj = *(u8 **)(holder + 0x4C);
    if (func_0014DFB0((s32 *)(obj + 4)) != 0) {
        return 0x17E8;
    }
    if (func_0014D970((s32 *)(obj + 8)) != 0) {
        return 0x17E8;
    }
    if (obj != 0) {
        D_0016F744_[0]((s32)obj);
    }
    return 0;
}
