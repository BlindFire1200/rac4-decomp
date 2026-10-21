#include "common.h"

typedef struct Inner {
    char pad0[0x16];
    u8 f16;
} Inner;

typedef struct Outer {
    char pad0[0xAC];
    Inner *inner;
} Outer;

s32 func_L01_00446760(Outer *arg0) {
    return arg0->inner->f16 == 1;
}
