#include "common.h"

extern void func_00547F58();

// Passes the caller's first two arguments and the negation of the third to func_00547F58.
void func_00547FF8(void *arg0, s32 arg1, s32 arg2) {
    func_00547F58(arg0, arg1, -arg2);
}
