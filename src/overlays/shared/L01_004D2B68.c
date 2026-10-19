#include "common.h"

// Return whether the type halfword at +0xBC is 0x1A47.
s32 func_L01_004D2B68(u8 *object) {
    return *(s16 *)(object + 0xBC) == 0x1A47;
}
