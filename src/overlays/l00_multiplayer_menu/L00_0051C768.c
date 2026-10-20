#include "common.h"

// Clear +0x8 and set bits 0xD of +0x14 in the object at +0x4.

typedef struct Type2 {
    char _p0[0x8];
    s32 f8;
    char _pC[0x14 - 0xC];
    s32 f14;
} Type2;

typedef struct Type1 {
    char _p0[0x4];
    Type2 * f4;
} Type1;

void func_L00_0051C768(Type1 *arg0) {
    arg0->f4->f8 = 0;
    arg0->f4->f14 |= 0xD;
}
