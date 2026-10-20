#include "common.h"

// Decrement the counter +0x1F4 of entry arg1 (0x1E0 bytes each) of the pvar table.

typedef struct Type2 {
    char _p0[0x1F4];
    s32 f1F4;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L08_004D1238(Type1 *arg0, s32 arg1) {
    Type2 *e = (Type2 *)((u8 *)arg0->fAC + arg1 * 0x1E0);

    e->f1F4--;
}
