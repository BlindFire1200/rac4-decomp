#include "common.h"

u8 func_L00_00711600(u8 *a0, u8 a1) {
    u8 old = a0[0x5C];
    a0[0x5C] = a1;
    return old;
}
