/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Inner {
    char pad0[0x800];
    s32 f800;
} Inner;

typedef struct Outer {
    char pad0[0xAC];
    Inner *inner;
} Outer;

extern Outer *D_0021EBD0[];
#define D_0021EBD0 (D_0021EBD0[0])

s32 func_L01_003CC418(void) {
    return D_0021EBD0->inner->f800;
}
