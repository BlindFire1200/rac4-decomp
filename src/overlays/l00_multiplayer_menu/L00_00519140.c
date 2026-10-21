#include "common.h"

// Call func_L00_005206A8(+0x4, 0x12, arg1, 2, arg2, arg3, 0x12).

typedef struct Type1 {
    char _p0[0x4];
    s32 f4;
} Type1;

extern void func_L00_005206A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

void func_L00_00519140(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_L00_005206A8(arg0->f4, 0x12, arg1, 2, arg2, arg3, 0x12);
}
