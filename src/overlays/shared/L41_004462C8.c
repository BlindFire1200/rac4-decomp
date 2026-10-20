#include "common.h"

// Reset flags +0x34 (bits 0x41 off, bit 0x1000 from the class) and +0x98 of the moby and its two linked mobys.

typedef struct Type3 {
    char _p0[0x10];
    s32 f10;
    char _p14[0x44 - 0x14];
    u16 f44;
} Type3;

typedef struct Type1 {
    char _p0[0x24];
    Type3 *f24;
    char _p28[0x34 - 0x28];
    u16 f34;
    char _p36[0x98 - 0x36];
    s32 f98;
    char _p9C[0xAC - 0x9C];
    struct Type2 *fAC;
} Type1;

typedef struct Type2 {
    char _p0[0x18];
    Type1 *f18;
    Type1 *f1C;
} Type2;

void func_L41_004462C8(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (p->f18 != 0) {
        p->f18->f34 &= 0xFFBE;
        p->f18->f34 |= p->f18->f24->f44 & 0x1000;
        p->f18->f98 = p->f18->f24->f10;
    }
    if (p->f1C != 0) {
        p->f1C->f34 &= 0xFFBE;
        p->f1C->f34 |= p->f1C->f24->f44 & 0x1000;
        p->f1C->f98 = p->f1C->f24->f10;
    }
    arg0->f34 &= 0xFFBE;
    arg0->f34 |= arg0->f24->f44 & 0x1000;
    arg0->f98 = arg0->f24->f10;
}
