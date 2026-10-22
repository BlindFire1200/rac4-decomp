#include "common.h"

extern void func_00162968(s32 arg0, s32 arg1);
s8 D_00220B08 = 0;

/* Calls func_00162968(0, 0), then clears the byte flag at 0x00220B08. */
void func_L00_0070D418(void) {
    func_00162968(0, 0);
    D_00220B08 = 0;
}
