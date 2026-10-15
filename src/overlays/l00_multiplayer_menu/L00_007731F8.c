/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_L00_00773AA0(s32, s32);
extern s32 D_002233A4;

s32 func_L00_007731F8(void) {
    s32 temp_v0;

    func_L00_00773AA0(D_002233A4, 2);
    temp_v0 = D_002233A4;
    D_002233A4 = 0;
    return temp_v0;
}
