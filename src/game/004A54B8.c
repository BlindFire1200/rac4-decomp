#include "common.h"

extern u8 D_00307F68[];

void func_004A54B8(s32 arg0) {
    u8 *ptr;
    ptr = D_00307F68 + (arg0 * 0x50);
    *(s32 *)(ptr + 0x40) = 2;
}
