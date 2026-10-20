#include "common.h"
extern void func_L00_006702B0(void);
extern void func_L00_006707F0(void);
extern void func_L00_00671770(void);
extern void func_L00_00672B48(void);
extern void func_L00_00673898(void);
extern void func_L00_006959E8(void);
extern void func_L00_00695A20(void);
extern void func_00126E20(s32);
extern void func_L00_005BCCA8(s32, void *, s32);
extern void func_L00_00670778(s32);
extern void func_L00_00678CD0(void *);
extern void func_L00_00679210(s32, u64, s32);
extern u8 D_004CBBA0;
extern u8 D_100AE0[];
extern u8 D_115B50[];
extern s32 D_0021DA30;
extern s32 D_0021DA34;
extern s32 D_00222EE0;
extern s32 D_00222EBC;
void func_L00_006703A0(void) {
    s32 var_a0;

    func_L00_00679210(0x47, 0x5340B, 0);
    D_0021DA30 = (s32) D_0021DA34;
    func_00126E20(0);
    func_L00_006959E8();
    func_L00_006707F0();
    func_L00_006702B0();
    func_00126E20(0);
    func_L00_00673898();
    func_L00_00678CD0(&D_115B50);
    func_L00_00671770();
    func_L00_00672B48();
    func_L00_00695A20();
    func_L00_00678CD0(&D_100AE0);
    var_a0 = D_00222EE0;
    if (D_00222EBC != 0) {
        func_L00_00670778(var_a0);
        var_a0 = D_00222EE0;
    }
    func_L00_005BCCA8(var_a0, &D_004CBBA0, 0x20);
    D_00222EE0 += 0x20;
}
