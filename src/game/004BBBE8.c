#include "common.h"

extern s32 func_00505B20(void);
extern void func_00498CF8(void);
extern void func_0049B2F8(s32, s32);
extern s32 D_0021F198;
extern u8 D_0021F938;
extern u8 D_0021F93A;
extern u8 D_0021F939;

// When D_0021F198 is not -1: run func_00498CF8, clear the bytes D_0021F938,
// D_0021F93A and D_0021F939 and call func_0049B2F8(index, -1).
void func_004BBBE8(void) {
    s32 index = func_00505B20();
    if (D_0021F198 != -1) {
        func_00498CF8();
        D_0021F938 = 0;
        D_0021F93A = 0;
        D_0021F939 = 0;
        func_0049B2F8(index, -1);
    }
}
