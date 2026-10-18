/* Not matching yet: BYTES 4/160 (tools/try_func.py func_004C13F8 --diff). Not part of the build. */
#include "common.h"
extern s32 func_00505B20(void);
extern void func_00505AD8(s32);
extern s32 func_004BD468(s32);
extern void func_00501498(s32);
extern void func_00505C90(s32);
extern void func_00497980(s32);
extern u8 D_30B358[];
u8 D_0021F939 = 0;
u8 D_0021F93A_pad = 0;
u8 D_0021F93B = 0;
void func_004C13F8(s32 arg0) {
    s32 temp_s0 = func_00505B20();
    func_00505AD8(arg0);
    func_00501498(func_004BD468(arg0));
    func_00505C90(func_004BD468(arg0));
    func_00505AD8(temp_s0);
    if (D_0021F939 == 0) {
        if (D_0021F93B == 0) func_00497980(5);
    }
    *((s32 *)(D_30B358 + arg0 * 0x258) + 1) |= 2;
}
