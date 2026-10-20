#include "common.h"

// Set pvar+0xF4 and send event 2.

typedef struct Type2 {
    char _p0[0xF4];
    u8 fF4;
} Type2;

typedef struct Type1 {
    char _p0[0xAC];
    Type2 *fAC;
} Type1;

extern void func_L01_00591BD8(Type1 *arg0, s32 arg1, s32 arg2);

void func_L01_004E4D98(Type1 *arg0) {
    arg0->fAC->fF4 = 1;
    func_L01_00591BD8(arg0, 2, -1);
}
