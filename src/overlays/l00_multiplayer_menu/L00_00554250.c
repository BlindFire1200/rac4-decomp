#include "common.h"

// Store arg1 at +0x17; the first time (bit 2 of +0x16 clear) set that bit and count it in +0x0.

typedef struct Type1 {
    u64 f0;
    char _p8[0x16 - 0x8];
    u8 f16;
    u8 f17;
} Type1;

void func_L00_00554250(Type1 *arg0, s32 arg1) {
    if ((arg0->f16 & 4) == 0) {
        arg0->f16 |= 4;
        arg0->f0++;
    }
    arg0->f17 = arg1;
}
