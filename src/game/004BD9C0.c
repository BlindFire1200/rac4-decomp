/* cflags: -mno-split-addresses */
#include "common.h"

/* Checks a loaded resource handle, clears three state flags and rebuilds the scene display list. */
extern void func_00498CF8(void);
extern void func_0049B2F8(s32 arg0, s32 arg1);
extern s32 func_00505B20(void);
extern s32 D_0021F198;

s8 D_0021F938 = 0;
s8 D_0021F939 = 0;
s8 D_0021F93A = 0;

void func_004BD9C0(void) {
    if (D_0021F198 != -1) {
        func_00498CF8();
        D_0021F93A = 0;
        D_0021F939 = 0;
        D_0021F938 = 0;
        func_0049B2F8(func_00505B20(), -1);
    }
}
