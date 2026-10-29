#include "common.h"

extern u8 D_003D3098[];
s32 func_0015DB98();

s32 func_004EF990(s32 *arg0, u8 arg1) {
    *(s32 *)arg0 = (s32)D_003D3098;
    if (arg1 & 1) return func_0015DB98();
    return (u32)D_003D3098;
}
