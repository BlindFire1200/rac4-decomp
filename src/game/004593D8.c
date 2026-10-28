#include "common.h"

extern s64 D_20C428[];

void func_004593D8(s32 arg0, s32 arg1, s32 arg2) {
    D_20C428[0] = arg0 | ((s64)arg1 << 8) | ((s64)arg2 << 16) | 0x80000000LL;
}
