#include "common.h"

// Add 600 to pvar+0x90.

typedef struct Type2 {
    char _p0[0x90];
    u16 f90;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L06_004C8430(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    p->f90 += 600;
}
