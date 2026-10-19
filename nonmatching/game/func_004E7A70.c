/* Not matching yet: BYTES 162/276 (tools/try_func.py func_004E7A70 --diff). Not part of the build. */
#include "common.h"
extern volatile void *D_221E20;
extern s32 D_221EC1;
typedef struct Type1 { char pad0[0x150]; s16 f150; s16 f152; } Type1;
extern Type1 D_206A40;
void func_004E7A70(s32 arg0, s64 arg1, s64 arg2, s64 arg3) {
    s64 temp_t0;
    s64 temp_t1;
    *(volatile s32 *)((u8 *)D_221E20 + 0) = 0x10000002;
    temp_t0 = D_206A40.f150 - 1;
    temp_t1 = D_206A40.f152 - 1;
    *(volatile s32 *)((u8 *)D_221E20 + 4) = 0;
    *(volatile s32 *)((u8 *)D_221E20 + 8) = 0;
    *(volatile s32 *)((u8 *)D_221E20 + 0xC) = 0x50000002;
    *(volatile s32 *)((u8 *)D_221E20 + 0x10) = 0x8001;
    *(volatile s32 *)((u8 *)D_221E20 + 0x14) = 0x10000000;
    *(volatile s32 *)((u8 *)D_221E20 + 0x18) = 0xE;
    *(volatile s32 *)((u8 *)D_221E20 + 0x1C) = 0;
    *(volatile s64 *)((u8 *)D_221E20 + 0x20) =
        (s64)(((arg0 > -1) ? arg0 : 0) |
              (((temp_t0 >= arg1) ? arg1 : temp_t0) << 16) |
              (((arg2 > -1) ? arg2 : 0) << 32) |
              (((temp_t1 >= arg3) ? arg3 : temp_t1) << 48));
    *(volatile s32 *)((u8 *)D_221E20 + 0x28) = 0x40;
    *(volatile s32 *)((u8 *)D_221E20 + 0x2C) = 0;
    D_221EC1 = (s32)((u8 *)D_221E20 + 0x30);
}
