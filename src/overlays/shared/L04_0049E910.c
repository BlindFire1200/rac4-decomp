#include "common.h"

typedef struct Inner2 {
    char pad0[0x2B8];
    u32 f2B8;
} Inner2;

typedef struct Inner1 {
    char pad0[0x2D0];
    Inner2 *f2D0;
} Inner1;

typedef struct Outer {
    char pad0[0xAC];
    Inner1 *fAC;
} Outer;

s32 func_L04_0049E910(Outer *arg0) {
    return arg0->fAC->f2D0->f2B8 != 0;
}
