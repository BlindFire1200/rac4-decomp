#include "common.h"

/* Stores four floats into a record at +0x18, +0x1C, +0x24 and +0x28. */
void func_01EF3C50(void *arg0, f32 a, f32 b, f32 c, f32 d) {
    *(f32 *)((u8 *)arg0 + 0x18) = a;
    *(f32 *)((u8 *)arg0 + 0x1C) = b;
    *(f32 *)((u8 *)arg0 + 0x24) = c;
    *(f32 *)((u8 *)arg0 + 0x28) = d;
}
