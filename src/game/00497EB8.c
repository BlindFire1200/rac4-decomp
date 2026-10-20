#include "common.h"

extern s32 func_00437DC8(void);
extern void func_0047F548(s32);
extern void func_0047F568(s32, s32, s32, s32, s32);
extern void func_00497938(s32, s32);
extern s32 func_00497958(s32 arg0);
extern void func_00497CB0(s32 index);
extern s32 D_0021EDD4;
extern s32 D_0021EDD8;
extern u8 D_0021EE18;
extern u8 D_2F32B8[];

void func_00497EB8(s32 arg0, s32 arg1) {
    s32 index = ((D_0021EDD4 ^ 1) == 0) ? arg0 : 0;
    s32 one = 1;

    if (*(s32 *)(D_2F32B8 + index * 0x54) == arg1 &&
        *(s32 *)(D_2F32B8 + index * 0x54 + 4) == arg1) {
        return;
    }
    if (D_0021EDD4 == 0 && D_0021EDD8 == one) {
        if (arg1 == D_0021EDD8) {
            func_00497938(1, 1);
            func_00497CB0(1);
        } else if (func_00497958(1) != 0) {
            func_00497938(1, 0);
            func_00497CB0(1);
        }
    }
    if (D_0021EE18 == 0 && D_0021EDD4 != 1 && arg1 == 2) {
        func_0047F568(3, 1, 1, 0, 0);
        func_0047F548(func_00437DC8() != 0);
    }
    func_00497938(index, arg1);
    func_00497CB0(index);
}
