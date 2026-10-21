#include "common.h"

extern void *D_00222550;

// Zero out two struct fields
void func_L00_00601788(void) {
    *(s32 *)((u32)D_00222550 + 0x3058) = 0;
    *(s32 *)((u32)D_00222550 + 0x3054) = 0;
}
