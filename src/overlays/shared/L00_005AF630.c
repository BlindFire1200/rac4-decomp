#include "common.h"

extern void func_L00_00595EA8(s32, s32 *);
extern void func_L00_00595F48(s32, s32, s32, s32);
extern void func_L00_005AEA40(s32);
extern void func_L00_005AECE8(s32);
extern void func_L00_005C4BB0(s32);
extern s32 func_L00_005C5570(void);
extern void func_L00_005C5808(void);
extern void func_L00_005AF608(void);
extern s32 D_00222188;
extern s32 D_0021E6A8;
extern void *D_002221F8[];
extern s16 D_0023EADE[];

void func_L00_005AF630(void) {
    s32 buf[2];

    if (func_L00_005C5570() == 1) {
        func_L00_005C4BB0(0);
        D_00222188 = 0x100FF;
        if (D_0021E6A8 == 0) {
            func_L00_005AECE8(0);
        } else {
            func_L00_00595EA8(2, buf);
            if (D_0023EADE[0] == 0) {
                D_002221F8[0] = func_L00_005AF608;
                D_002221F8[1] = func_L00_005AF608;
            }
            func_L00_00595F48(buf[0], buf[0] + 1, 1, 0);
            func_L00_00595F48(buf[1], buf[1] + 1, 0, 1);
            func_L00_005AEA40(0);
        }
    }
    func_L00_005C5808();
}
