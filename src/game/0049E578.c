#include "common.h"

extern void func_00505328(s32, s32);

// Calls func_00505328 with an address built from arg0 and arg1 and the constant 0x80808080.
void func_0049E578(s32 arg0, s32 arg1) {
    s32 t;

    t = (arg1 * 2) + 0x130006;
    func_00505328((arg0 << 6) + t, 0x80808080);
}
