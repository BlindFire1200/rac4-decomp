#include "common.h"

extern void func_004A5720(void);
extern void func_004A5B18(void);
extern void func_004A6270(void);
extern s32 func_00505B20(void);
extern s32 D_307F68[];

// Process game structure at index from func_00505B20
void func_004A54D8(void) {
    s32 idx;
    void *s0;
    f32 temp_f0, temp_f1, temp_f2;
    u8 temp_v0;

    idx = func_00505B20();
    s0 = (void *)((u8 *)D_307F68 + (idx * 0x50));

    func_004A6270();
    func_004A5720();

    // Load fields and perform conversions
    temp_f1 = *(f32 *)((u32)s0 + 0xC);
    temp_v0 = *(u8 *)((u32)s0 + 0x28);
    temp_f0 = *(f32 *)((u32)s0 + 0x0);
    temp_f2 = *(f32 *)((u32)s0 + 0x20);

    *(f32 *)((u32)s0 + 0x10) = temp_f1;
    *(f32 *)((u32)s0 + 0x4) = temp_f0;
    *(f32 *)((u32)s0 + 0x2C) = (f32)temp_v0;
    *(f32 *)((u32)s0 + 0x24) = temp_f2;

    func_004A5B18();

    *(s32 *)((u32)s0 + 0x44) = 0;
    *(s32 *)((u32)s0 + 0x40) = 0;
}
