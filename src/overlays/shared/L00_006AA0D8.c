#include "common.h"

extern s32 D_002233A0;

void func_L00_006AA450();                              /* extern */
extern s32 D_0022339C;

void func_L00_006AA0D8(s32 arg0, s32 arg1) {
    D_002233A0 = arg0;
    D_0022339C = arg1;
    func_L00_006AA450();
}
