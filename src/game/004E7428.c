#include "common.h"

// Returns nonzero when the byte at D_20FF20 indexed by arg0 is nonzero.
extern u8 D_20FF20[];

s32 func_004E7428(s32 arg0) {
    return D_20FF20[arg0] != 0;
}
