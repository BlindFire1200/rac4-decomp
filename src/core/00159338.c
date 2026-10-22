#include "common.h"

extern void func_00158C60(s32, s32, void *, s32, s32);

// Stores arg0 in a local slot and passes its address to func_00158C60 along with arg1 and arg2.
void func_00159338(s32 arg0, s32 arg1, s32 arg2) {
    s32 local = arg0;
    func_00158C60(0x30, 4, &local, arg1, arg2);
}
