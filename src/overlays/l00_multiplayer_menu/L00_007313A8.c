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

// Run the setup calls for param, func_L00_004EF918 when D_002233C8 is positive,
// and the handle-based calls with func_00126A90's result, then clear D_002233C8
// and start the func_L00_0062A810 and func_L00_005FED90 follow-ups.
void func_L00_007313A8(s32 param) {
    s32 handle;
    func_L00_0071B478();
    func_0071BE80(param);
    if (D_002233C8 > 0) func_L00_004EF918();
    handle = func_00126A90();
    func_005662C8(handle);
    func_00126A30(handle, D_002233CC);
    D_002233C8 = 0;
    func_L00_0062A810(func_0062A4C8(1), 0, 0);
    func_L00_005FED90(0, 0, 0x400);
}
