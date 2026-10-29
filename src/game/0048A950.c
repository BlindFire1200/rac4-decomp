#include "common.h"

s32 D_0021F358 = 0;

// Increments the counter D_0021F358, sets the halfword at +0x10 to 0xFFFF and the byte at +8 to 0.
void func_0048A950(void *arg0) {
    D_0021F358++;
    *(u16 *)((u8 *)arg0 + 0x10) = 0xFFFF;
    *(u8 *)((u8 *)arg0 + 0x8) = 0;
}
