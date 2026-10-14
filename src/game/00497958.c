#include "common.h"

extern s32 D_2F32B8[];

s32 func_00497958(s32 arg0) {
    return *(s32 *)((char *)D_2F32B8 + (arg0 * 0x54));
}
