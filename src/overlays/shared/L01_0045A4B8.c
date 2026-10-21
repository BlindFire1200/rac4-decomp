#include "common.h"

// Set +0x74 of the object at pvar+0x5F0 from the mode at pvar+0x618 (0: 1, 1: 0x100, 2: 0x200), plus bits 6.

typedef struct Type3 {
    char _p0[0x74];
    u16 f74;
} Type3;

typedef struct Type2 {
    char _p0[0x5F0];
    Type3 *f5F0;
    char _p5F4[0x618 - 0x5F4];
    u8 f618;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L01_0045A4B8(Type1 *arg0) {
    Type2 *p = arg0->fAC;
    Type3 *o = p->f5F0;

    o->f74 = 0;
    switch (p->f618) {
    case 0:
        o->f74 = 1;
        break;
    case 1:
        o->f74 = 0x100;
        break;
    case 2:
        o->f74 = 0x200;
        break;
    }
    o->f74 |= 6;
}
