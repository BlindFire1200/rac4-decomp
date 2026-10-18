#include "common.h"

s32 func_L01_0045C038(void);
s32 func_L01_0045C068(void *);
s32 func_L00_005E6058(void *, s32, s32);
s32 func_L01_0056CCC8(s32, void *, s32);
void func_L01_00591BD8(void *, s32, s32);
typedef struct { u8 pad[0x310]; u8 sub[0x10]; s32 f320; u8 pad2[0xEC]; s32 f410; u8 pad3[0x1EC]; s32 f600; } Owner;
void func_L01_0045A2D0(unsigned char *arg0) {
    Owner *owner = *(Owner **)(arg0 + 0xAC);
    if (func_L01_0045C038() != 0) {
        s32 v = owner->f600;
        if (owner->f320 != 0 &&
            func_L00_005E6058(owner->sub, v, 0) != 0 &&
            func_L01_0056CCC8(owner->f410, arg0, 0) != 0) {
            func_L01_00591BD8(arg0, 0x16, 4);
        } else {
            func_L01_00591BD8(arg0, 0x15, 4);
        }
        return;
    }
    if (func_L01_0045C068(arg0) != 0 && arg0[0x69] == 5) {
        func_L01_00591BD8(arg0, 0x1A, -1);
        return;
    }
    func_L01_00591BD8(arg0, 0xF, 4);
}
