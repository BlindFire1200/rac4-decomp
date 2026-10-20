#include "common.h"

// Set pvar+0x0 to arg1 when it changes, and copy it to +0x10/+0x12 of the linked moby's pvar.

typedef struct Type4 {
    char _p0[0x10];
    s16 f10;
    s16 f12;
} Type4;

typedef struct Type3 {
    char _p0[0xAC];
    Type4 *fAC;
} Type3;

typedef struct Type2 {
    u8 f0;
    char _p1[0x10 - 0x1];
    Type3 *f10;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

void func_L41_003E2AE0(Type1 *arg0, s32 arg1) {
    Type2 *p = arg0->fAC;
    Type4 *q;

    if (p != 0 && p->f0 != arg1) {
        p->f0 = arg1;
        if (p->f10 != 0) {
            q = p->f10->fAC;
            if (q != 0) {
                q->f12 = arg1;
                q->f10 = arg1;
            }
        }
    }
}
