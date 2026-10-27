#include "common.h"

extern u8 D_001A0198[];

/* Stores the address of D_001A0198 through arg0 and 0x4A through arg1. */
void func_00149150(void **arg0, s32 *arg1) {
    *arg0 = D_001A0198;
    *arg1 = 0x4A;
}
