#include "common.h"

// Call func_L00_007107F0, then copy +0x40 of arg1 to +0x5C.

typedef struct Type2 {
    char _p0[0x40];
    s32 f40;
} Type2;

typedef struct Type1 {
    char _p0[0x5C];
    s32 f5C;
} Type1;

extern void func_L00_007107F0(Type1 *arg0, Type2 *arg1);

void func_L00_00713318(Type1 *arg0, Type2 *arg1) {
    func_L00_007107F0(arg0, arg1);
    arg0->f5C = arg1->f40;
}
