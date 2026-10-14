#include "common.h"

extern s32 D_003DA6B0[];
extern volatile void *D_221E20;

/* Initialize structure at D_221E20 with pointers and constants */
void func_004E7B88(void) {
    *(s32 *)D_221E20 = 0x30000003;
    *(s32 *)((u8 *)D_221E20 + 0x4) = (s32)&D_003DA6B0[0];
    *(s32 *)((u8 *)D_221E20 + 0x8) = 0;
    *(s32 *)((u8 *)D_221E20 + 0xC) = 0x50000003;
    D_221E20 = (void *)((u8 *)D_221E20 + 0x10);
}
