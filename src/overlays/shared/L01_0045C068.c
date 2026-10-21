#include "common.h"

typedef struct Inner {
    char pad0[0x616];
    u8 f616;
} Inner;

typedef struct Outer {
    char pad0[0xAC];
    Inner *inner;
} Outer;

s32 func_L01_0045C068(Outer *arg0) {
    return arg0->inner->f616 != 0;
}
