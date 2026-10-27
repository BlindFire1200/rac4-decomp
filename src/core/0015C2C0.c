#include "common.h"

extern struct S D_00172160[];
// Clears the byte at +0x624 of D_00172160 and copies arg0+0x18 to the word at +0x628.
void func_0015C2C0(void *arg0) {
    u8 *p = (u8 *)D_00172160;
    *(u8 *)(p + 0x624) = 0;
    *(s32 *)(p + 0x628) = *(s32 *)((u8 *)arg0 + 0x18);
}
