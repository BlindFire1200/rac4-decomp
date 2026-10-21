/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_00449B28(s32, s32);
s32 func_004F3790(s32, s32);
extern s32 D_222040_[];
#define D_222040 (D_222040_[0])

s32 func_004F6660(u32 a0, u32 a1) {
    func_004F3790(0, 0);
    func_00449B28(5, 0);
    D_222040 = 0xFA;
    return 1;
}
