#include "common.h"

extern u8 D_00172160[];

// Clear the words at offsets 0x484 and 0x48C of D_00172160.
void func_0015C730(void) {
    u8 *p = D_00172160;
    *(s32 *)(p + 0x48C) = 0;
    *(s32 *)(p + 0x484) = 0;
}
