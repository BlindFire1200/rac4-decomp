#include "common.h"

void *func_L00_00600760(s32);

s32 func_L01_005B6FC8(s32 unused0, s32 arg1, s32 *out) {
    s32 result = 0;
    u16 *entry = func_L00_00600760(arg1);
    if (entry != NULL && out != NULL) {
        result = 1;
        *out = entry[2];
    }
    return result;
}
