#include "common.h"

// Validates the object and reads a 16-bit value out of its child.
s32 func_0014D3E8(u8 *arg0, u16 *arg1) {
    u8 *p;
    u8 *q;

    if (arg1 == 0) {
        return 0x181A;
    }
    if (arg0 == 0 || *(s64 *)arg0 != 0xFACE) {
        return 0x17D4;
    }
    if (arg0[0x18] != 0xA) {
        return 0x17DE;
    }
    p = *(u8 **)(arg0 + 0x1C);
    q = *(u8 **)(p + 0x4C);
    *arg1 = *(u16 *)(q + 0x1C);
    return 0;
}
