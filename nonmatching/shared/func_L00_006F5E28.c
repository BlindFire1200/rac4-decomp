/* Not matching yet: BYTES 56/472 (tools/try_func.py func_L00_006F5E28 --diff). Not part of the build. */
#include "common.h"
typedef struct Type1 {
    u8 pad0[0x10]; s32 f10; u8 pad14[0x218 - 0x14]; s32 f218;
} Type1;
typedef struct Type2 {
    u8 pad0[0x2F28]; s32 *f2F28;
} Type2;
typedef struct Type3 {
    u8 pad0[4]; s32 f4; u8 pad8[0x2C - 8]; u8 f2C;
    u8 pad2D[0x34 - 0x2D]; s32 f34; u8 pad38[0x44 - 0x38];
    s32 f44; s32 f48; s32 f4C; u8 f50; u8 f51; u8 pad52[2];
} Type3;
extern Type1 D_00172160;
extern Type2 *D_00343E78[];
extern Type3 D_0035D0E8[];
extern s32 D_00220708;
extern void func_L00_006AAD78(Type3 *);
extern void func_L00_006F6550(Type3 *, s32, u8, u8);
void func_L00_006F5E28(s32 arg0, s32 arg1) {
    Type3 *var_s0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 var_a2;
    s32 var_s3;
    Type2 **var_a1;
    Type2 *temp_v0;
    Type2 *temp_v0_2;

    var_a2 = arg0 + 1;
    var_s3 = -1;
    D_00220708 = (s32) D_00172160.f218;
    for (; var_a2 < 10; var_a2++) {
        temp_v0 = D_00343E78[var_a2];
        if (temp_v0 != 0) {
            temp_a0 = *temp_v0->f2F28;
            if (temp_a0 != arg1) var_s3 = temp_a0;
        }
    }
    if (var_s3 == -1) {
        if (arg0 > 0) {
            var_a2 = arg0;
            var_a1 = D_00343E78;
            do {
                temp_v0_2 = *var_a1;
                var_a2 -= 1;
                if (temp_v0_2 != NULL) {
                    temp_a0_2 = *temp_v0_2->f2F28;
                    var_s3 = ((temp_a0_2 ^ arg1) != 0) ? temp_a0_2 : var_s3;
                }
                var_a1++;
            } while (var_a2 != 0);
        }
    }
    var_s0 = D_0035D0E8;
    do {
        if (var_s0->f2C != 0) {
            temp_v1 = var_s0->f44;
            if (temp_v1 == arg1) {
                if (var_s0->f34 == D_00172160.f10) {
                    func_L00_006AAD78(var_s0);
                }
                var_s0->f4 = -1;
                var_s0->f34 = -1;
                var_s0->f48 = -1;
                var_s0->f4C = -1;
                var_s0->f50 = 0;
                var_s0->f51 = 1U;
                var_s0->f44 = var_s3;
            } else if (temp_v1 == D_00172160.f10) {
                if (var_s0->f4C == arg1) {
                    func_L00_006F6550(var_s0, var_s0->f48, var_s0->f51, (u8)D_00172160.f10);
                    var_s0->f4C = -1;
                    var_s0->f51++;
                } else if (var_s0->f48 == arg1) {
                    var_s0->f4 = -1;
                    var_s0->f34 = -1;
                    var_s0->f48 = -1;
                    var_s0->f4C = -1;
                }
            }
        }
        var_s0++;
    } while ((s32) var_s0 < (s32) ((u8 *)D_0035D0E8 + 0xA800));
}
