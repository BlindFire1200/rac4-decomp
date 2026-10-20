#include "common.h"

// Set the object's method table to arg1 and call its first method with (arg2, arg3, arg4).

typedef struct Type1 Type1;

typedef struct Type2 {
    s32 (*f0)(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3);
} Type2;

struct Type1 {
    Type2 *f0;
};

s32 func_L00_0051EBD0(Type1 *arg0, Type2 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->f0 = arg1;
    return arg1->f0(arg0, arg2, arg3, arg4);
}
