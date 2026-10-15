#include "common.h"

// Return the word at +0xE0.
s32 func_L01_0066615C(u8 *object) {
    return *(s32 *)(object + 0xE0);
}
