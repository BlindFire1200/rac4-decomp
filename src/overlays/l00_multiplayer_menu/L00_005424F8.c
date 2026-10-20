#include "common.h"

// qsort-style comparison of two object pointers by +0xC.

typedef struct Type2 {
    char _p0[0xC];
    s32 fC;
} Type2;

s32 func_L00_005424F8(Type2 **arg0, Type2 **arg1) {
    return (*arg0)->fC - (*arg1)->fC;
}
