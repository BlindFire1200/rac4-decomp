#include "common.h"

extern void *func_L00_006AA1F0(s32, s32, s32);
extern s32 D_002233A0;
void *D_00220704 = 0;

void func_L00_006F5998(void) {
    void *value = func_L00_006AA1F0(6, D_002233A0, -2);
    D_00220704 = value;
    *(u8 *)((u8 *)value + 0x2C) = 0;
}
