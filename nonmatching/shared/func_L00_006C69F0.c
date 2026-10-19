/* Not matching yet: SIZE ours 192 / retail 184 (tools/try_func.py func_L00_006C69F0 --diff). Not part of the build. */
#include "common.h"
s32 func_L00_005BC9B8(void *);
void func_L00_006AD518(void *, u8, s32, s32, s32);
void func_L00_006C68E0(void *, s16, s16);
void func_L00_006C69F0(void *arg0) {
    u8 *record = (u8 *)arg0 + 0x2D26;
    u8 *value = (u8 *)arg0 + 0x2D24;
    s32 i = 1;
    do {
        if (func_L00_005BC9B8(value) == 2) {
            s16 a = *(s16 *)(record - 4);
            *(s16 *)(record - 6) = 0;
            if (a == 0x1C) func_L00_006AD518(arg0, *(u8 *)((u8 *)arg0 + 0x43B), 1, 1, 0x32);
            else func_L00_006C68E0(arg0, a, *(s16 *)record);
        }
        record += 8;
        i--;
        value += 8;
    } while (i >= 0);
}
