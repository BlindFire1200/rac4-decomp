#include "common.h"

// Return the float +0x1C of the object func_L00_0069D9B8 finds for +0x14.

typedef struct Type2 {
    char _p0[0x1C];
    f32 f1C;
} Type2;

typedef struct Type1 {
    char _p0[0x14];
    s32 f14;
} Type1;

extern Type2 *func_L00_0069D9B8(s32 arg0);

f32 func_L00_00711080(Type1 *arg0) {
    return func_L00_0069D9B8(arg0->f14)->f1C;
}
