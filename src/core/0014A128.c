#include "common.h"

/* Copies the two floats at index arg0 of an 8-byte-stride array into *arg3, clamping the index to 0 when arg0 >= arg2. */
void func_0014A128(u32 arg0, f32 *arg1, u32 arg2, f32 *arg3) {
    u32 idx = (arg0 < arg2) ? arg0 : 0;
    f32 *src = (f32 *)((u8 *)arg1 + idx * 8);
    arg3[0] = src[0];
    arg3[1] = src[1];
}
