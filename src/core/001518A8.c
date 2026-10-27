#include "common.h"

/* Copies the byte at offset 0x5C of the object at offset 0x1C into *a1; returns 0. */
s32 func_001518A8(u8 *a0, u8 *a1) {
    *a1 = *(*(u8 **)(a0 + 0x1C) + 0x5C);
    return 0;
}
