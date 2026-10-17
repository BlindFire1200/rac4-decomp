#include "common.h"

extern s32 D_0039D230[];
extern s32 D_0039D298[];
extern s32 D_0039D300[];
extern s32 D_0021DDB8;

// Record the entry for index: the first value, the current D_0021DDB8 and the
// second value in three parallel tables.
void func_L01_0047EC88(s32 index, s32 value_a, s32 value_b) {
    D_0039D230[index] = value_a;
    D_0039D298[index] = D_0021DDB8;
    D_0039D300[index] = value_b;
}
