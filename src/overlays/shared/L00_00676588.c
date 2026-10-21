#include "common.h"
extern void func_L00_005C8F90(void);
extern void func_L00_005DCF70(void);
extern void func_L00_00607B68(void);
extern void func_L00_0066B1A8(void);
extern void func_L00_00675FB8(void);
extern void func_L00_00675FE0(void);
extern s32 func_005D6FC8(void);
extern s32 func_00676088(void);
extern void func_L00_005C4AC0(s32, s32, s32);
extern void func_L00_005F5068(s32, s32, s32, s32, s32);
extern void *D_0021F560;
extern s32 D_0021DDB4;
void func_L00_00676588(void) {
    func_L00_005C4AC0(0, 0, 0);
    if ((func_005D6FC8() == 3) && (D_0021DDB4 == 0)) {
        func_L00_005F5068(4, 1, 1, 0, 0);
    } else if (func_00676088() == 0) {
        func_L00_00675FB8();
        func_L00_0066B1A8();
        func_L00_00607B68();
        func_L00_005DCF70();
        (*(void (**)(void *))((u8 *)D_0021F560 + 0xA8))(D_0021F560);
        func_L00_00675FE0();
        func_L00_005C8F90();
    }
}
