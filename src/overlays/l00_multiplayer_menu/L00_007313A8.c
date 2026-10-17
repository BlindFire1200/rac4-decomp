#include "common.h"
void func_00126A30(s32, s32);
s32 func_00126A90(void);
void func_005662C8(s32);
s32 func_0062A4C8(s32);
void func_0071BE80(s32);
void func_L00_004EF918(void);
void func_L00_005FED90(s32, s32, s32);
void func_L00_0062A810(s32, s32, s32);
void func_L00_0071B478(void);
extern s32 D_002233C8;
extern s32 D_002233CC;
extern s32 D_0021DA49;
void func_L00_007313A8(s32 arg0) {
    s32 temp;
    func_L00_0071B478();
    func_0071BE80(arg0);
    if (D_002233C8 > 0) func_L00_004EF918();
    temp = func_00126A90();
    func_005662C8(temp);
    func_00126A30(temp, D_002233CC);
    D_0021DA49 = 0;
    func_L00_0062A810(func_0062A4C8(1), 0, 0);
    func_L00_005FED90(0, 0, 0x400);
}
