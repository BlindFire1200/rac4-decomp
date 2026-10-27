#include "common.h"

extern u8 D_00191F01[];

// Returns arg0 + 0x20 when the flag byte at D_00191F01[arg0] is set, else arg0.
s32 func_0011A180(s32 arg0) {
    return !(D_00191F01[arg0] & 1) ? arg0 : (arg0 + 0x20);
}
