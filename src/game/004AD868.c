#include "common.h"

extern u8 D_3091A0[];

void func_004AD868(s32 arg0) {
    *((s32 *)(D_3091A0 + (arg0 * 0x50))) = 2;
}
