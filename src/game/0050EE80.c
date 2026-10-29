#include "common.h"

// Reads the float at offset 0x3C of the sub-object at +0x40 into *arg1 and returns 1.
s32 func_0050EE80(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)(*(u8 **)((u8 *)arg0 + 0x40) + 0x3C);
    return 1;
}
