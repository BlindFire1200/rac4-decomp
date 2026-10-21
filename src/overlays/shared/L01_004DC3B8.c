#include "common.h"

typedef struct Inner {
    char pad0[4];
    u8 f4;
    u8 f5;
    char pad6[2];
    s32 f8;
} Inner;

typedef struct Outer {
    char pad0[0xAC];
    Inner *inner;
} Outer;

void func_L01_004DC3B8(Outer *arg0, s32 arg1) {
    Inner *inner = arg0->inner;
    inner->f5 = 1;
    inner->f8 = arg1;
    inner->f4 = 1;
}
