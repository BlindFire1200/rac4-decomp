#include "common.h"

// Forward event arg1 to func_L01_00591BD8, turning event 1 into 2 while pvar+0x90 is set.

typedef struct Type2 {
    char _p0[0x90];
    s32 f90;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

extern void func_L01_00591BD8(Type1 *arg0, s32 arg1, s32 arg2);

void func_L01_0050C1F0(Type1 *arg0, s32 arg1) {
    if (arg0->fAC->f90 != 0 && arg1 == 1) {
        func_L01_00591BD8(arg0, 2, -1);
    } else {
        func_L01_00591BD8(arg0, arg1, -1);
    }
}
