#include "common.h"
extern void func_L00_0070C528(s32, s32, s32);
extern s32 func_L00_0070C548(s32, s32);
void func_L00_0070C8C0(s32 arg0, s32 arg1) {
    s32 i;
    for (i = 0; i < 0x46; i++) {
        func_L00_0070C528(arg0, i, func_L00_0070C548(i, arg1));
    }
}
