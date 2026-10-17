#include "common.h"

extern u8 D_003B5050[];

// Return whether a table byte is nonzero. The entry is chosen by the row and,
// for a non-null object, by its +0x54C and +0x558 bytes.
s32 func_L01_005337D0(s32 row, u8 *object) {
    s32 index = 0;
    if (object != 0) index = object[0x54C] * 4 + object[0x558];
    return D_003B5050[row * 0x10 + index * 0x80] != 0;
}
