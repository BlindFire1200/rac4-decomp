#include "common.h"
extern s32 D_00172378_[];
#define D_00172378 (D_00172378_[0])
s32 D_002212F8[2] __attribute__((section(".sdata"))) = {0, 0};
s32 func_L41_0040DED8(s32 arg0) {
    s32 left = 2000 - (D_00172378 - D_002212F8[arg0]);
    if (D_002212F8[arg0] == 0 || left < 0) {
        left = 0;
    }
    if (left > 2000) {
        left = 2000;
    }
    if (left < 0) {
        left = 0;
    }
    return left;
}
