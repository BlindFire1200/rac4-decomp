#include "common.h"
extern s32 func_00505B20(void);
extern void func_00498CF8(void);
extern void func_0049B2F8(s32, s32);
extern s32 D_0021F198;
extern u8 D_0021F938;
extern u8 D_0021F93A;
extern u8 D_00223FBA;
void func_004BBBE8(void) {
    s32 state = func_00505B20();
    if (D_0021F198 != -1) {
        func_00498CF8();
        D_0021F938 = 0;
        D_0021F93A = 0;
        D_00223FBA = 0;
        func_0049B2F8(state, -1);
    }
}
