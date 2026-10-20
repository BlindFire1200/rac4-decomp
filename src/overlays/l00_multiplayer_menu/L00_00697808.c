#include "common.h"

// Store arg1 at +0x2670 of *arg0 when it is not negative.

typedef struct Type2 {
    char _p0[0x2670];
    s32 f2670;
} Type2;

void func_L00_00697808(Type2 **arg0, s32 arg1) {
    if (arg1 >= 0) {
        (*arg0)->f2670 = arg1;
    }
}
