#include "common.h"

// Compare two buffers by length (+0xC), then by content (+0x10) with func_0011A2DC.

typedef struct Type1 {
    char _p0[0xC];
    s32 fC;
    s32 f10;
} Type1;

extern s32 func_0011A2DC(s32 arg0, s32 arg1, s32 arg2);

s32 func_L00_0051CC98(Type1 *arg0, Type1 *arg1) {
    s32 d = arg0->fC - arg1->fC;

    if (d != 0) {
        return d;
    }
    return func_0011A2DC(arg0->f10, arg1->f10, arg0->fC);
}
