#include "common.h"

extern void func_L00_00702ED0(void);
extern void func_L00_00703588(void);
extern void func_L00_00702F60(void);
extern void func_L00_007033C8(void);
extern void func_L00_00703488(void);
extern void func_L00_00703718(void);
extern void func_L00_00703140(void);
extern void func_L00_00703218(void);
extern void func_L00_007032A8(void);
extern void func_L00_00703320(void);
extern void func_00703748(void);
extern void func_L00_007034B8(void);
extern void func_L00_00703540(void);
extern void func_00703768(void);
extern u32 D_212148[];
// Install the message handlers into the D_212148 table (the variant whose slots
// are filled by local functions).
void func_L00_00702CA8(void) {
    D_212148[0] = (u32)&func_L00_00702ED0;
    D_212148[1] = (u32)&func_L00_00702F60;
    D_212148[3] = (u32)&func_L00_007033C8;
    D_212148[4] = (u32)&func_L00_00703488;
    D_212148[5] = (u32)&func_L00_00703718;
    D_212148[9] = (u32)&func_L00_00703140;
    D_212148[10] = (u32)&func_L00_00703218;
    D_212148[11] = (u32)&func_L00_007032A8;
    D_212148[14] = (u32)&func_L00_00703320;
    D_212148[12] = (u32)&func_00703748;
    D_212148[15] = (u32)&func_L00_007034B8;
    D_212148[16] = (u32)&func_L00_00703540;
    D_212148[17] = (u32)&func_L00_00703588;
    D_212148[18] = (u32)&func_00703768;
}
