#include "common.h"

extern u8 D_003E2F48[];

/* Returns the address of record arg0 (0x30 bytes each) in the D_003E2F48 table. */
void *func_0054A9B0(s32 arg0) {
    return (arg0 * 0x30) + D_003E2F48;
}
