#include "common.h"

extern void *func_006A9160(s32);
extern void func_L00_005ECB20(s32, s32, s32, s32);
extern s32 D_0021E6B4;
s32 D_0022014C = 0;

void func_L00_0067FDF0(s32 arg0, s32 arg1, void *arg2) {
    void *object = arg2;
    if (object == 0) object = func_006A9160(0);
    if (D_0022014C != 0 && D_0021E6B4 != 1) {
        func_L00_005ECB20(*(s32 *)((u8 *)object + 0x2EF0), D_0022014C, arg1, arg0);
    }
}
