#include "common.h"

extern s32 D_00221FF8;

// Set element in array via gp-relative address
void func_L00_00591410(s32 arg0) {
    s32 *ptr = (s32 *)&D_00221FF8 + arg0;
    *ptr = 1;
}
