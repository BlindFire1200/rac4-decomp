#include "common.h"

extern void func_004700B0(void *arg0, s32 arg1, s32 arg2, s32 arg3);
/* Passes arg0 on with arg1's low three bytes, one per argument register after the first. */
void func_00479580(void *arg0, s32 arg1) {
    s32 hi = (arg1 >> 16) & 0xFF;
    s32 mid = (arg1 >> 8) & 0xFF;

    func_004700B0(arg0, arg1 & 0xFF, mid, hi);
}
