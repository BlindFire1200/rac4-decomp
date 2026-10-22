#include "common.h"

// Validates the object and stores a small value in its child.
s32 func_0014D390(u8 *arg0, u16 arg1) {
    u8 *p;
    u8 *q;

    if (arg0 == 0 || *(s64 *)arg0 != 0xFACE) {
        return 0x17D4;
    }
    if (arg0[0x18] != 0xA) {
        return 0x17DE;
    }
    p = *(u8 **)(arg0 + 0x1C);
    q = *(u8 **)(p + 0x4C);
    if (arg1 >= 0x100) {
        return 0x1968;
    }
    *(u16 *)(q + 0x18) = arg1;
    return 0;
}
