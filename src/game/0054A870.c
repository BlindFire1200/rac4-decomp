#include "common.h"

extern void func_00420E68(s32 arg0);

/* Forwards its second argument to func_00420E68, then returns. */
void func_0054A870(s32 arg0, s32 arg1) {
    func_00420E68(arg1);
}
