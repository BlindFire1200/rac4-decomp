#include "common.h"

/* Calls func_01F087F8 with the object and 0, then func_01EEA034 on the sub-object at +0xB8 with 1. */
extern void func_01EEA034(s32, s32);
extern void func_01F087F8(s32, s32);

void func_01F08888(s32 arg0) {
    func_01F087F8(arg0, 0);
    func_01EEA034(arg0 + 0xB8, 1);
}
