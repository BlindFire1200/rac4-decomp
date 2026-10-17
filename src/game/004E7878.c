#include "common.h"

extern volatile void *D_221E20;

void func_004E7878(s32 arg0, s32 arg1) {
    *(s32 *)D_221E20 = arg1 | 0x30000000;
    *(s32 *)((u8 *)D_221E20 + 4) = arg0;
    *(s32 *)((u8 *)D_221E20 + 8) = 0;
    *(s32 *)((u8 *)D_221E20 + 0xC) = 0;
    D_221E20 = (void *)((u8 *)D_221E20 + 0x10);
}
