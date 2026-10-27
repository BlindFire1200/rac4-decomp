#include "common.h"

extern s32 D_00171948[][8];

// Returns nonzero when word 13 of row arg0 (8-word rows) is not -1.
s32 func_004CAF30(s32 arg0) {
    return ~D_00171948[arg0][13] != 0;
}
