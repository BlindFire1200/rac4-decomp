#include "common.h"

// Pushes the 16-byte value at +0xA0 into a 32-entry ring (+0x26F0):
// +0x2C78 is the write index, +0x2C7C the count (capped at 32).

typedef int u128 __attribute__((mode(TI)));

typedef struct Type1 {
    char _p0[0xA0];
    u128 fA0;
    char _pB0[0x26F0 - 0xB0];
    u128 f26F0[32];
    char _p28F0[0x2C78 - 0x28F0];
    s32 f2C78;
    s32 f2C7C;
} Type1;

void func_L00_006D1B48(Type1 *arg0) {
    s32 n;

    ((u128 *)((u8 *)arg0 + 0x26F0))[arg0->f2C78] = arg0->fA0;
    arg0->f2C78 = (arg0->f2C78 + 1) % 32;
    n = arg0->f2C7C + 1;
    arg0->f2C7C = (n < 33) ? n : 32;
}
