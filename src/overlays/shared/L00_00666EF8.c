#include "common.h"
extern void func_00126E20(s32);
extern void func_L00_005BCD40(void *, s32, s32);
extern void func_L00_00666CE8(void);
extern void func_L00_00666FD0(void);
extern void func_L00_006959E8(void);
extern void func_L00_00695A20(void);
extern s32 D_002222D8;
extern s32 D_00222D68;
extern s32 D_00222EE0;
extern s32 D_0021DA30;
extern s32 D_0021DA34;
extern u8 D_0032A4E0[];
void func_L00_00666EF8(void) {
    s32 value = D_00222EE0;
    D_00222D68 = value;
    D_0021DA30 = D_0021DA34;
    value += 0x10;
    D_00222EE0 = value;
    func_00126E20(0);
    func_L00_006959E8();
    func_L00_00666FD0();
    func_L00_00695A20();
    func_L00_005BCD40(&D_0032A4E0, 0x3200, 0x40);
    func_L00_00666CE8();
    D_002222D8 = 6;
}
