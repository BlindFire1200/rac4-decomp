#include "common.h"

// Tests a 16-bit flag field of the object's sub-struct against a mask; returns nonzero if any bit is set.
s32 func_0050EF68(u8 *a0, s32 a1) {
    return (*(u16 *)(*(u8 **)(a0 + 0x40) + 0x40) & a1) != 0;
}
