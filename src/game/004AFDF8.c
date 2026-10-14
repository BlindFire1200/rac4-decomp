/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_00501638(s32 *, s32, s32);
s32 func_00505B70(s32, s32);
extern s32 D_221700;

void func_004AFDF8(void) {
    func_00501638(&D_221700, 0x18, -1);
    func_00505B70(6, D_221700);
}
