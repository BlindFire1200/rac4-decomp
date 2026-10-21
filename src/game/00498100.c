#include "common.h"

extern u8 D_2F32B8[];

u8 func_00498100(s32 arg0) {
    u8 *base = &D_2F32B8[arg0 * 0x54];
    return base[0x1C];
}
