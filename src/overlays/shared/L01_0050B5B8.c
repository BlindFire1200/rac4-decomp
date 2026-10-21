#include "common.h"

// Release the handle at pvar+0x74C with func_L01_0050AF48, or call func_L01_0050AED0 when there is none.

typedef struct Type2 {
    char _p0[0x74C];
    s32 f74C;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

extern void func_L01_0050AF48(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_L01_0050AED0(Type1 *arg0, s32 arg1);

void func_L01_0050B5B8(Type1 *arg0) {
    Type2 *p = arg0->fAC;

    if (p->f74C != -1) {
        func_L01_0050AF48(arg0, p->f74C, -1, 0);
        p->f74C = -1;
    } else {
        func_L01_0050AED0(arg0, -1);
    }
}
