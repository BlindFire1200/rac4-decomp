#include "common.h"

extern void func_00420E20(s32 arg0, s32 arg1);

/* Forwards its second and third arguments to func_00420E20, then returns. */
void func_0054A850(s32 arg0, s32 arg1, s32 arg2) {
    func_00420E20(arg1, arg2);
}
