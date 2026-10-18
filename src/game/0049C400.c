#include "common.h"

extern s32 D_2219F8;
extern void func_00505AD8(s32);
extern s32 func_00505B20(void);
extern void func_00505F98(s32, s32, s32);
extern void func_00506060(s32, s32);

void func_0049C400(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_a0;
    s32 temp_s3;
    temp_s3 = func_00505B20();
    func_00505AD8((arg4 == 0) ? arg0 : 4);
    temp_s1 = (arg1 << 3) + 0x100001;
    temp_s0 = arg0 << 6;
    temp_a0 = temp_s0 + 0x100001;
    temp_s0_2 = temp_s0 + temp_s1 + 1;
    func_00506060(temp_a0, temp_s0_2);
    func_00505F98(arg2, temp_s0_2, arg3);
    func_00505AD8(temp_s3);
}
