#include "common.h"

extern void func_0049EF30(s32 index);
extern s32 func_004A1DE0();
s32 D_0021F668 = 0;

/* Calls func_0049EF30(0) when a flag is set and func_004A1DE0 returns nonzero. */
void func_004A1E28(void) {
    if (D_0021F668 != 0) {
        if (func_004A1DE0() != 0) {
            func_0049EF30(0);
        }
    }
}
