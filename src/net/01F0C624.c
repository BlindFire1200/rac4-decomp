/* cflags: -mno-split-addresses */
#include "common.h"

// Computes a start/end pair into a 12-byte packet and copies that packet to the global D_001B8440.
typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
} Type1;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Type3;

typedef struct {
    u64 f0 __attribute__((packed));
    s32 f8;
} Type2;

extern Type2 D_001B8440;

s32 func_01F0C624(Type1 *arg0, void *arg1, Type3 *arg2) {
    s32 temp_a3;
    s32 v8;
    s32 vC;

    temp_a3 = arg0->f14;
    v8 = arg0->f8;
    vC = arg0->fC;
    arg2->f0 = v8 + temp_a3;
    arg2->f4 = vC - temp_a3;
    D_001B8440 = *(Type2 *)arg2;
    return 1;
}
