#include "common.h"

typedef struct Inner {
    char pad0[0x2B8];
    u32 f2B8;
} Inner;

typedef struct Outer {
    char pad0[0x2E0];
    Inner *inner;
} Outer;

s32 func_L01_004E7F68(void *arg0, Outer *arg1) {
    return arg1->inner->f2B8 != 0;
}
