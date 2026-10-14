#include "common.h"

extern void func_L00_006FF798(s32, s32);

// Loads struct fields and calls function
void func_L00_006CE468(void *arg0) {
    s32 val1 = *(s32 *)((u8 *)arg0 + 0x26E4);
    s32 val2 = *(s32 *)((u8 *)arg0 + 0x2318);
    func_L00_006FF798(val1, val2);
}
