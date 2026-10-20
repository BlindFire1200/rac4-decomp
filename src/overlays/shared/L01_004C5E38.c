#include "common.h"

// On event 1, clear pvar+0xF0 and call func_004C7120(moby, 5).

typedef struct Type2 {
    char _p0[0xF0];
    s32 fF0;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

extern void func_004C7120(Type1 *arg0, s32 arg1);

void func_L01_004C5E38(Type1 *arg0, s32 arg1) {
    Type2 *p = arg0->fAC;

    if (arg1 == 1) {
        p->fF0 = 0;
        func_004C7120(arg0, 5);
    }
}
