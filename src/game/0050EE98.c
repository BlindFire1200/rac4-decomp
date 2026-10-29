#include "common.h"

// Reads the floats at offsets 0x28 and 0x2C of the sub-object at +0x40 into *arg1 and *arg2, and returns 1.
s32 func_0050EE98(void *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = *(f32 *)(*(u8 **)((u8 *)arg0 + 0x40) + 0x28);
    *arg2 = *(f32 *)(*(u8 **)((u8 *)arg0 + 0x40) + 0x2C);
    return 1;
}
