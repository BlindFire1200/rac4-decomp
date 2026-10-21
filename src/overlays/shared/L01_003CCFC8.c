#include "common.h"

extern s32 D_00390250[];
s32 D_00220B80 = 0;

// Return whether the D_00390250 entry for index equals D_00220B80.
s32 func_L01_003CCFC8(s32 index) {
    return (D_00390250[index] ^ D_00220B80) == 0;
}
