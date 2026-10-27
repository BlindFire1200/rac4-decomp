/* cflags: -fno-opt-stack */
#include "common.h"

extern void func_001481C0(s32, s32, s32);
extern s32 func_0014A6A8(s32 arg0, s32 arg1, s32 arg2);

void func_0014A500(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 cap = arg0[0];
    s32 head = arg0[1];
    s32 buf = arg0[2];
    s32 idx = func_0014A6A8(arg1, head, cap);
    s32 first = cap - idx;

    if (first >= arg2) {
        func_001481C0(buf + idx * 4, arg3, arg2 * 4);
    } else {
        func_001481C0(buf + idx * 4, arg3, first * 4);
        func_001481C0(buf, arg3 + first * 4, (arg2 - first) * 4);
    }
    arg0[1] = func_0014A6A8(arg2, head, cap);
}
