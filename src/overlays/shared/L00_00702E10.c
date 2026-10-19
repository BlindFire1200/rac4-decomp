#include "common.h"

extern void func_00703770(void);
extern void func_00703778(void);
extern void func_00703780(void);
extern void func_00703788(void);
extern void func_00703790(void);
extern void func_00703798(void);
extern void func_007037A0(void);
extern void func_007037A8(void);
extern void func_007037B0(void);
extern void func_007037B8(void);
extern s32 func_L00_00702DF8(s32, s32, s32, u8 *);
extern s32 func_L00_00702D90(s32, s32, s32, s32);
extern void func_L00_00702D78(void);
extern u32 D_212148[];

// Install the handlers into the D_212148 table (the variant whose slots mostly
// point at the resident stubs 0x703770-0x7037B8).
void func_L00_00702E10(void) {
    D_212148[0] = (u32)&func_00703770;
    D_212148[1] = (u32)&func_00703770;
    D_212148[2] = (u32)&func_00703778;
    D_212148[3] = (u32)&func_L00_00702DF8;
    D_212148[4] = (u32)&func_00703780;
    D_212148[5] = (u32)&func_00703788;
    D_212148[9] = (u32)&func_L00_00702D90;
    D_212148[10] = (u32)&func_00703790;
    D_212148[11] = (u32)&func_00703798;
    D_212148[14] = (u32)&func_007037A0;
    D_212148[12] = (u32)&func_L00_00702D78;
    D_212148[15] = (u32)&func_007037A8;
    D_212148[16] = (u32)&func_007037B0;
    D_212148[17] = (u32)&func_007037B0;
    D_212148[18] = (u32)&func_007037B8;
}
