#include "common.h"

// Scales +0x70 of the moby (and of the moby linked at pvar+0x348) from its class's +0x24.

typedef struct Type3 {
    char _p0[0x24];
    f32 f24;
} Type3;

typedef struct Type1 Type1;

typedef struct Type2 {
    char _p0[0x348];
    Type1 *f348;
} Type2;

struct Type1 {
    char _p0[0x24];
    Type3 *f24;
    char _p28[0x70 - 0x28];
    f32 f70;
    char _p74[0xAC - 0x74];
    Type2 *fAC;
};

void func_L01_004D3140(Type1 *arg0, f32 arg1) {
    Type1 *other;

    arg0->f70 = arg0->f24->f24 * arg1;
    other = arg0->fAC->f348;
    if (other != 0) {
        other->f70 = other->f24->f24 * arg1;
    }
}
