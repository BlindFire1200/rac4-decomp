#include "common.h"

s32 func_004F1CA8(u8 *a0, s32 a1) {
    s32 old = *(s32 *)(a0 + 0xA8);
    *(s32 *)(a0 + 0xA8) = a1;
    return old;
}
