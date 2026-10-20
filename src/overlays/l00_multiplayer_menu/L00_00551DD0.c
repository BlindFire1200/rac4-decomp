#include "common.h"

// Call func_L00_00545EA8(arg0, arg1, +0x4, 0).

typedef struct Type1 {
    char _p0[0x4];
    s32 f4;
} Type1;

extern void func_L00_00545EA8(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_L00_00551DD0(Type1 *arg0, s32 arg1) {
    func_L00_00545EA8(arg0, arg1, arg0->f4, 0);
}
