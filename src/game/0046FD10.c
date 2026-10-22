#include "common.h"

extern u8 D_26AFC0[];

// Clear the flag byte at D_26AFC0[arg0->fE * 8 + 4].
void func_0046FD10(u8 *arg0) {
    s32 i = *(s16 *)(arg0 + 0xE);
    u8 *p = (u8 *)(i * 8 + (u32)D_26AFC0);
    p[4] = 0;
}
