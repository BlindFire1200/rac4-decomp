#include "common.h"

// Return whether the state byte at +0x20 is 1.
s32 func_L01_003D3EA0(u8 *object) {
    return *(u8 *)(object + 0x20) == 1;
}
