#include "common.h"

extern s32 D_00171BA8_[];

static inline s32 bitCount(s32 i) {
    s32 n = 0;
    if (i != 0xF) {
        if (i != 0x23) {
            n = 0xF;
        }
    }
    return n;
}

static inline s32 bitTest(s32 i, s32 j) {
    s32 k = i % 20;
    return (D_00171BA8_[k] >> j) & 1;
}

s32 func_004FC408(void) {
    s32 total = 0;
    s32 i;
    s32 j;

    for (i = 1; i < 0x10; i++) {
        s32 n = bitCount(i);
        for (j = 0; j < n; j++) {
            total += bitTest(i - 1, j);
        }
    }
    return total;
}
