#include "common.h"

/* Calls the function pointer at *(u8 **)(a0 + 0xD8) + 0xC with (0x11, 0x800). */
void func_0015654C(u8 *a0) {
    u32 v = *(u32 *)(a0 + 0xD8);
    v = *(u32 *)(v + 0xC);
    ((void (*)(u8 *, s32, s32))v)(a0, 0x11, 0x800);
}
