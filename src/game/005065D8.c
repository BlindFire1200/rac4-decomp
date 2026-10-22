#include "common.h"

extern void func_00506508(s32, s32, s32);

/* Thin wrapper: forwards arg0 to func_00506508, forces its second argument to 1, and passes arg1 as the third. */
void func_005065D8(s32 arg0, s32 arg1) {
    func_00506508(arg0, 1, arg1);
}
