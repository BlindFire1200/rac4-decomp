#include "common.h"

typedef int u128 __attribute__((mode(TI)));

// Stores the header fields of an object at arg0: a 128-bit value, two words, a float, a flag word, and a zero byte.
void func_004742B0(void *arg0, s32 arg1, s32 arg2, u128 arg3, f32 arg4) {
    *(u128 *)((u8 *)arg0 + 0x0) = arg3;
    *(s32 *)((u8 *)arg0 + 0x10) = arg1;
    *(s32 *)((u8 *)arg0 + 0x14) = arg2;
    *(f32 *)((u8 *)arg0 + 0x1C) = arg4;
    *(s32 *)((u8 *)arg0 + 0x20) = 1;
    *(u8 *)((u8 *)arg0 + 0x19) = 0;
}
