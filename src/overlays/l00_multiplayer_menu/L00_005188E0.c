#include "common.h"

// Option 1 forwards arg2 as request 0x103 to the object at +0x1C; others return 0x2722.

typedef struct Type1 {
    char _p0[0x1C];
    s32 f1C;
} Type1;

extern s32 func_L00_0051EE28(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_L00_005188E0(Type1 *arg0, s32 arg1, s32 arg2) {
    s32 r;

    if (arg1 == 1) {
        r = func_L00_0051EE28(arg0->f1C, 0x103, 0, arg2);
    } else {
        r = 0x2722;
    }
    return r;
}
