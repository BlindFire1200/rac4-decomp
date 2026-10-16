#include "common.h"
typedef struct { s32 f0, f4, f8, fC, f10; } Row;
extern s64 func_L00_005AFBE8(s32, s32);
extern Row D_003B6CF0[];
void func_L01_0055B1C0(u8 *object, s32 arg1, s32 index, s64 arg3) {
    Row *entry;
    s64 result = func_L00_005AFBE8(arg1, 1);
    *(s64 *)(object + 0x78) = result;
    *(s64 *)(object + 0x80) = ((s64)0xFF90 << 32) | 0x260;
    *(s64 *)(object + 0x70) = 0;
    entry = &D_003B6CF0[index];
    *(s64 *)(object + 0x88) = (s64)entry->f0 | ((s64)entry->f4 << 2) | ((s64)entry->f8 << 4) | ((s64)entry->fC << 6) | (arg3 << 32);
}
