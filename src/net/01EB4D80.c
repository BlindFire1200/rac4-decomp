#include "common.h"

// Assemble a big-endian 32-bit value from the four bytes at offset 4.
s32 func_01EB4D80(u8 *p) {
    s32 v;
    v = p[4];
    v <<= 8;
    v += p[5];
    v <<= 8;
    v += p[6];
    v <<= 8;
    v += p[7];
    return v;
}
