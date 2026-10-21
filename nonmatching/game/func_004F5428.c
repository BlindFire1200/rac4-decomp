/* Not matching yet: SIZE ours 268 / retail 264 (tools/try_func.py func_004F5428 --diff). Not part of the build. */
#include "common.h"
typedef struct Type1 { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; } Type1;
extern volatile Type1 * volatile D_221E20;
extern s32 D_003DBFA0[];
extern s32 D_20BF10[];
extern s32 D_003D9F40[];
void func_004F5428(void) {
    Type1 *temp_v1;
    Type1 *temp_v1_2;
    D_221E20->f0 = 0x30000002;
    D_221E20->f4 = (s32)&D_003DBFA0[0];
    D_221E20->f8 = 0;
    D_221E20->fC = 0x50000002;
    temp_v1 = (Type1 *)D_221E20;
    D_221E20 = (volatile Type1 *)((u8 *)temp_v1 + 0x10);
    temp_v1->f10 = 0x30000029;
    D_221E20->f4 = (s32)&D_20BF10[0];
    D_221E20->f8 = 0;
    D_221E20->fC = 0x50000029;
    temp_v1_2 = (Type1 *)D_221E20;
    D_221E20 = (volatile Type1 *)((u8 *)temp_v1_2 + 0x10);
    temp_v1_2->f10 = 0x30000003;
    D_221E20->f4 = (s32)&D_003D9F40[0];
    D_221E20->f8 = 0;
    D_221E20->fC = 0x50000003;
    D_221E20 = (volatile Type1 *)((u8 *)D_221E20 + 0x10);
}
