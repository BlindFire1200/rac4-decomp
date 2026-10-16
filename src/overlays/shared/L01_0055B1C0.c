#include "common.h"

typedef struct { s32 f0, f4, f8, fC, f10; } Row;
extern s64 func_L00_005AFBE8(s32, s32);
extern Row D_003B6CF0[];

// Fill the object's +0x70..+0x88 fields: the lookup for source, a fixed word, and
// a word packed from the D_003B6CF0 row at index plus the extra value.
void func_L01_0055B1C0(u8 *object, s32 source, s32 index, s64 extra) {
    Row *row;
    s64 result = func_L00_005AFBE8(source, 1);
    *(s64 *)(object + 0x78) = result;
    *(s64 *)(object + 0x80) = ((s64)0xFF90 << 32) | 0x260;
    *(s64 *)(object + 0x70) = 0;
    row = &D_003B6CF0[index];
    *(s64 *)(object + 0x88) = (s64)row->f0 | ((s64)row->f4 << 2) | ((s64)row->f8 << 4) | ((s64)row->fC << 6) | (extra << 32);
}
