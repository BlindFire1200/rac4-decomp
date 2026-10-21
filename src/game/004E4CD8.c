#include "common.h"

extern void func_00453658(s32, s32);
s32 D_2206C4 = 0;
s32 D_2206D0 = 0;
s32 D_2206C8 = 0;
s32 D_2206D4 = 0;
s32 D_2206C0 = 0;
s32 D_2206CC = 0;
s32 D_2206E0 = 0;
s32 D_2206DC = 0;
s32 D_2206D8 = 0;

/* Store parameters to globals and call func_00453658 three times */
void func_004E4CD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    D_2206C4 = arg2;
    D_2206D0 = arg3;
    D_2206C8 = arg4;
    D_2206D4 = arg5;
    D_2206C0 = arg0;
    D_2206CC = arg1;
    D_2206E0 = 0;
    D_2206DC = 0;
    D_2206D8 = 0;
    func_00453658(arg0, arg1);
    func_00453658(D_2206C4, D_2206D0);
    func_00453658(D_2206C8, D_2206D4);
}
