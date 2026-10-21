#include "common.h"

typedef struct Inner {
    char pad0[0x4];
    u8 f4;
    u8 f5;
} Inner;

typedef struct Outer {
    char pad0[0xAC];
    Inner *fAC;
} Outer;

// sets two flag bytes of the object at arg0->fAC to 1
void func_L01_004DC548(Outer *o) {
    Inner *i = o->fAC;

    i->f4 = 1;
    i->f5 = 1;
}
