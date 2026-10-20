#include "common.h"

typedef struct {
    u8 f0[0x50];
    void *f50;
    u8 f54[0x470 - 0x54];
} Type1;

typedef struct {
    u8 f0[0x70];
    void *f70;
    u8 f74[0x12];
    s16 f86;
} Type2;

typedef struct {
    u8 f0[0x159];
    u8 f159;
} Type3;

extern Type1 D_0022CA80[];

void func_L00_0058E210(s32 arg0) {
    Type1 *p = &D_0022CA80[arg0];
    Type2 *q = p->f50;

    if (q->f86 == 0) {
        ((Type3 *)q->f70)->f159 = 1;
    }
}
