#include "common.h"

extern s32 D_221E20;
extern s32 D_003DBFA0[];
extern s32 D_20BF10[];
extern s32 D_003D9F40[];
// Writes three 16-byte packet entries at D_221E20 and advances it.
void func_004F5428(void) {
    s32 t;
    ((s32 *)D_221E20)[0] = 0x30000002;
    ((s32 *)D_221E20)[1] = (s32)D_003DBFA0;
    ((s32 *)D_221E20)[2] = 0;
    ((s32 *)D_221E20)[3] = 0x50000002;
    t = D_221E20;
    D_221E20 = t + 0x10;
    ((s32 *)t)[4] = 0x30000029;
    ((s32 *)D_221E20)[1] = (s32)D_20BF10;
    ((s32 *)D_221E20)[2] = 0;
    ((s32 *)D_221E20)[3] = 0x50000029;
    t = D_221E20;
    D_221E20 = t + 0x10;
    ((s32 *)t)[4] = 0x30000003;
    ((s32 *)D_221E20)[1] = (s32)D_003D9F40;
    ((s32 *)D_221E20)[2] = 0;
    ((s32 *)D_221E20)[3] = 0x50000003;
    D_221E20 = D_221E20 + 0x10;
}
