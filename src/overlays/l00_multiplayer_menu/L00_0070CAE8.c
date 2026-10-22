#include "common.h"

extern void func_L00_0070C9F8(s32, s32, s32);

// Calls func_L00_0070C9F8 for each of the 0x46 entries with the index.
void func_L00_0070CAE8(s32 arg0, s32 arg1) {
    s32 i;
    for (i = 0; i < 0x46; i++) {
        func_L00_0070C9F8(arg0, i, arg1);
    }
}
