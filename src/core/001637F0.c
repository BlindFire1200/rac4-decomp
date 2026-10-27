#include "common.h"

extern u8 D_21D940_[];

/* Zeroes the words at offsets 8 and 4 of the global block. */
void func_001637F0(void) {
    u8 *p = D_21D940_;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
}
