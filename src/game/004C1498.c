#include "common.h"

extern void func_00497980(s32);

s32 D_30B358[64];
u8 D_0021F939 = 0;
u8 D_0021F93B = 0;

/* Sets the state word of player slot arg0 in table D_30B358 to 2 and reports error 6 when both debug flags are clear. */
void func_004C1498(s32 arg0) {
    s32 *p = (s32 *)((arg0 * 0x258) + (s32)&D_30B358[0]);
    p[0] = 2;
    if (D_0021F939 == 0) {
        if (D_0021F93B == 0) {
            func_00497980(6);
        }
    }
}
