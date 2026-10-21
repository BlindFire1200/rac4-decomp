#include "common.h"

// True when func_L00_005206A8(+0x4, 0x10, arg1, 0, arg2, arg3, 0x12) returns 0.

typedef struct Type1 {
    char _p0[0x4];
    s32 f4;
} Type1;

extern s32 func_L00_005206A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

s32 func_L00_00526370(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_L00_005206A8(arg0->f4, 0x10, arg1, 0, arg2, arg3, 0x12) == 0;
}
