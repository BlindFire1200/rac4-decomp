/* Not matching yet: SIZE ours 332 / retail 344 (tools/try_func.py func_004E04E0 --diff). Not part of the build. */
#include "common.h"
extern void func_004537D0(s32 *, s32 *, s32);
typedef struct Type1 { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; } Type1;
typedef struct Type2 { char pad0[4]; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; char pad18[0x1D08]; s32 f1D20; } Type2;
extern Type1 D_00171D38;
extern Type1 D_00171FB0;
extern Type1 D_00171FC8;
extern s32 D_1D2220;

void func_004E04E0(void) {
    Type2 *temp_s0;
    Type2 *temp_s4;
    u8 *var_s3;
    u8 *var_t9;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_t8;

    temp_s0 = (Type2 *) ((u8 *) &D_1D2220 - 0x20);
    func_004537D0(&D_1D2220, (s32 *) temp_s0, 0x20);
    var_t9 = temp_s0;
    temp_s4 = var_t9;
    var_s3 = (u8 *) &D_1D2220;
    var_t8 = 0;
    temp_s0->f8 = (s32) ((s32) (D_00171FB0.f8 * D_00171FC8.f8 * D_00171D38.f14) >> 0x14);
    temp_s0->f4 = (s32) ((s32) (D_00171FB0.f4 * D_00171FC8.f4 * D_00171D38.fC) >> 0x14);
    *((s32 *) ((u8 *) &D_1D2220 - 0x20)) = (s32) ((s32) (D_00171FB0.f0 * D_00171FC8.f0 * D_00171D38.f10) >> 0x14);
    temp_s0->fC = (s32) ((s32) (D_00171FB0.fC * D_00171FC8.fC * D_00171D38.f10) >> 0x14);
    temp_s0->f10 = (s32) ((s32) (D_00171FB0.f10 * D_00171FC8.f10 * D_00171D38.f10) >> 0x14);
    temp_s0->f14 = (s32) ((s32) (D_00171FB0.f14 * D_00171FC8.f14 * D_00171D38.f10) >> 0x14);
    do {
        temp_v0 = *(s32 *) var_s3;
        temp_a0 = *(s32 *) var_t9;
        var_s3 += 4;
        var_t9 += 4;
        temp_v1 = temp_s4->f1D20 | ((temp_v0 != temp_a0) << var_t8);
        var_t8 += 1;
        temp_s4->f1D20 = temp_v1;
    } while (var_t8 < 6);
}
