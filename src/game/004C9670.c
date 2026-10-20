#include "common.h"
s32 func_004C94F8(s32);
void func_00501498(s32);
void func_00505AD8(s32);
s32 func_00505B20(void);
void func_00505C90(s32);
s32 D_0021FA28 = 0;
void func_004C9670(s32 arg0) {
    s32 old = func_00505B20();
    func_00505AD8(arg0);
    func_00501498(func_004C94F8(arg0));
    func_00505C90(func_004C94F8(arg0));
    func_00505AD8(old);
    D_0021FA28 = 0;
}
