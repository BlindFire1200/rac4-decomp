#include "common.h"

typedef struct {
    u8 f00[0x70];
    void *f70;
    u8 f74[0x12];
    s16 f86;
} Type1;

typedef struct {
    u8 f00[0x9C];
    f32 f9C;
    f32 fA0;
} Type2;

typedef struct {
    u8 f00[0x50];
    Type1 *f50;
    u8 f54[0x41C];
} Type3;

extern Type3 D_0022CA80[];

/* Writes two float fields of the object at index arg0 when they are non-zero. */
void func_L00_0058E120(s32 arg0, f32 fparg0, f32 fparg1) {
    Type1 *t1;
    Type2 *t2;
    Type3 *p;

    p = (Type3 *)(arg0 * 0x470 + (u32)&D_0022CA80[0]);
    t1 = p->f50;
    if (t1->f86 != 0) {
        return;
    }
    t2 = (Type2 *)((u8 *)t1->f70 + 0x60);
    if (fparg0 != 0.0f) {
        t2->f9C = fparg0;
    }
    if (fparg1 != 0.0f) {
        t2->fA0 = fparg1;
    }
}
