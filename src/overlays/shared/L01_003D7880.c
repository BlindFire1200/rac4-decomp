#include "common.h"

typedef struct Inner {
    char pad0[0x48B];
    u8 f48B;
} Inner;

typedef struct Outer {
    char pad0[0xAC];
    Inner *inner;
} Outer;

void func_L01_003D7880(Outer *arg0) {
    arg0->inner->f48B = 1;
}
