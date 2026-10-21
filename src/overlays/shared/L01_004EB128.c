#include "common.h"

typedef struct Inner {
    char pad0[0x2E0];
    char *f2E0;
} Inner;

typedef struct Outer {
    char pad0[0xAC];
    Inner *inner;
} Outer;

void *func_L01_004EB128(Outer *arg0) {
    return arg0->inner->f2E0 + 0x250;
}
