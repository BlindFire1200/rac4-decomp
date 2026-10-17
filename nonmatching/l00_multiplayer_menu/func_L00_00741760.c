/* Not matching yet: BYTES 6/156 (tools/try_func.py func_L00_00741760 --diff). Not part of the build. */
#include "common.h"
void func_L00_007410B8(void *);
void func_L00_00741760(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;
    s32 var_a1 = arg1;
    s32 temp_hi;
    if (p[0x265] == 0) goto flag_off;
    if (arg2 != 0) goto common;
    goto clear;
flag_off:
    if (arg2 != 0) {
        p[0x266] = 0;
        p[0x265] = 1;
        *(s32 *)(p + 0x26C) = 1;
        goto call;
    }
common:
    if (var_a1 == 0) {
        if (p[0x266] == 0) goto call;
        goto clear;
    }
    var_a1 = *(s32 *)(p + 0x270);
    p[0x265] = 0;
    temp_hi = (*(s32 *)(p + 0x26C) + 1) % var_a1;
    *(s32 *)(p + 0x26C) = temp_hi;
    p[0x266] = (u8)(temp_hi == 1);
    goto call;
clear:
    *(s32 *)(p + 0x26C) = 0;
    p[0x265] = 0;
    p[0x266] = 0;
call:
    func_L00_007410B8(arg0);
}
