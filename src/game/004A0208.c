#include "common.h"

extern u8 D_307254[];

/* Returns the word at offset 0x2C of the 512-byte record arg0 in D_307254. */
s32 func_004A0208(s32 arg0) {
    s32 *p = (s32 *)(D_307254 + (arg0 << 9));
    return p[11];
}
