#include "common.h"

extern s32 D_23F280_[];
#define D_23F280 (D_23F280_[0])

// Initialize global struct fields
void func_0045E1E0(s32 arg0) {
    D_23F280 = arg0;
    *(s32 *)((u32)&D_23F280 + 4) = 0;
}
