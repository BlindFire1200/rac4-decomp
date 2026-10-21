#include "common.h"

typedef struct Inner {
    char pad0[0x74];
    f32 f74;
} Inner;

typedef struct Outer {
    char pad0[0xAC];
    Inner *inner;
} Outer;

f32 func_L01_00481780(Outer *arg0) {
    return arg0->inner->f74;
}
