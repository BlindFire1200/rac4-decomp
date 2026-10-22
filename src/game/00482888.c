#include "common.h"

extern void func_00481298(s32, s32, s32 *, s32 *, s32 *, s32);

/* Wrapper: forwards two incoming arguments to func_00481298 together with pointers into a local buffer. */
void func_00482888(s32 arg0, s32 arg1, s32 arg2) {
    s32 buf[8];
    func_00481298(arg0, arg1, &buf[1], &buf[4], &buf[0], arg2);
}
