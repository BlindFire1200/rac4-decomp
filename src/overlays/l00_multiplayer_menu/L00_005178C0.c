#include "common.h"

// In state 3 call func_L00_0051B208 on +0x1C, else func_L00_00519578 on its +0x4; return 0.

typedef struct Type2 {
    char _p0[0x4];
    s32 f4;
} Type2;

typedef struct Type1 {
    char _p0[0x14];
    s32 f14;
    char _p18[0x1C - 0x18];
    Type2 * f1C;
} Type1;

extern void func_L00_0051B208(Type2 *arg0);
extern void func_L00_00519578(s32 arg0, s32 arg1, s32 arg2);

s32 func_L00_005178C0(Type1 *arg0, s32 arg1, s32 arg2) {
    if (arg0->f14 == 3) {
        func_L00_0051B208(arg0->f1C);
    } else {
        func_L00_00519578(arg0->f1C->f4, arg1, arg2);
    }
    return 0;
}
