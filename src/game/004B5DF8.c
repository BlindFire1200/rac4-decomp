#include "common.h"

extern s32 D_003098F0_[];
#define D_003098F0 (D_003098F0_[0])

void func_004B5DF8(s32 arg0) {
    s32 *ptr = (s32 *)((char *)&D_003098F0 + (arg0 * 0x1F8));
    *(s32 *)((char *)ptr + 0x1F4) = 0;
}
