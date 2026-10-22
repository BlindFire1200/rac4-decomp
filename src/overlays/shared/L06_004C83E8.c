#include "common.h"

/* Accumulates a product of two lookup tables into the sub-object's counter, doubling it when the sub-object's flag is set. */
typedef struct Type2 {
    u8 f00[0x88];
    s32 f88;
    s32 f8C;
    s16 f90;
    u8 f94[0x2C];
} Type2;

typedef struct Type1 {
    u8 f00[0xAC];
    Type2 *fAC;
} Type1;

extern s32 D_003A4F70[];

s32 D_00222030[2] = {0, 0};

void func_L06_004C83E8(Type1 *arg0, s32 arg1, s32 arg2) {
    s32 v = D_00222030[arg1] * D_003A4F70[arg2];
    Type2 *p = arg0->fAC;
    s32 f90 = p->f90;
    s32 f88 = p->f88;
    s32 d = v * 2;

    if (f90 != 0) {
        v = d;
    }
    p->f88 = f88 + v;
}
