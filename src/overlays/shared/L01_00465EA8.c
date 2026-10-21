#include "common.h"

typedef struct Inner {
    char pad0[0xC];
    u8 fC;
} Inner;

typedef struct Outer {
    char pad0[0xAC];
    Inner *inner;
} Outer;

void func_L01_00465EA8(Outer *arg0) {
    arg0->inner->fC = 0;
}
