/* cflags: @ee29 -O2 -G8 */
#include "common.h"

extern s32 D_0021E670;
extern s32 D_0021E674;
extern s32 D_0021E678;
extern s8 D_0021E67C;
/* Store four arguments into four adjacent globals, final field a byte. */

void func_L00_005C6810(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    D_0021E670 = arg0;
    D_0021E674 = arg1;
    D_0021E678 = arg2;
    D_0021E67C = arg3;
}
