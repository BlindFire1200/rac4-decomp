#include "common.h"
extern s32 func_00505B20(void);
extern s32 func_00505AD8(s32);
extern s32 func_004BD468(s32);
extern void func_00501498(s32);
extern void func_00505C90(s32);
extern void func_00497980(s32);
extern s32 D_30B358[];
u8 D_0021F939 = 0;
u8 D_0021F93A_pad = 0;
u8 D_0021F93B = 0;
void func_004C13F8(s32 arg0) {
    s32 *p;
    s32 temp_s0 = func_00505B20();
    func_00505AD8(arg0);
    func_00501498(func_004BD468(arg0));
    func_00505C90(func_004BD468(arg0));
    func_00505AD8(temp_s0);
    if (D_0021F939 == 0) {
        if (D_0021F93B == 0) func_00497980(5);
    }
    p = (s32 *)((arg0 * 0x258) + (s32)&D_30B358[0]);
    p[1] |= 2;
}
