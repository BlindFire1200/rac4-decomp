#include "common.h"

extern void func_00497980(s32);
extern void func_0049B208(s32);
extern void func_0049B2F8(s32 arg0, s32 arg1);
extern s32 func_00505B20(void);

s8 D_0021F7E8 = 0;

// Sets a gameplay flag byte and plays the menu sound when arg0 is nonzero.
void func_004B6C00(s32 arg0) {
    if (arg0 != 0) {
        func_0049B2F8(func_00505B20(), 5);
        return;
    }
    func_00497980(8);
    func_0049B208(func_00505B20());
    D_0021F7E8 = 1;
}
