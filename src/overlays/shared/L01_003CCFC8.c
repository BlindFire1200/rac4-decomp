#include "common.h"

extern s32 D_00390250[];
s32 D_00220B80 = 0;

s32 func_L01_003CCFC8(s32 arg0) {
    return (D_00390250[arg0] ^ D_00220B80) == 0;
}
