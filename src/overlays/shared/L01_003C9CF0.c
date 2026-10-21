#include "common.h"

s32 func_L01_003C9C18(u8 *a0);

void func_L01_003C9CF0(u8 *a0) {
    u8 *s0 = *(u8 **)(a0 + 0xAC);
    if (func_L01_003C9C18(a0)) {
        s0[0x7F] = 1;
    }
}
