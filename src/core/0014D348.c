#include "common.h"

// Validates the object and stores a 16-bit value in its child.
s32 func_0014D348(u8 *arg0, u16 arg1) {
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
    *(u16 *)(q + 0x1A) = arg1;
    return 0;
}
