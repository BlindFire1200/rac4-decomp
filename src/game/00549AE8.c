#include "common.h"

extern u8 D_003E52B8[];

// Return the address of the 0x38-byte entry at index arg0 of D_003E52B8.
void *func_00549AE8(s32 arg0) {
    return D_003E52B8 + arg0 * 0x38;
}
