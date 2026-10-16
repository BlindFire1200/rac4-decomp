/* Not matching yet: SIZE ours 384 / retail 392 (tools/try_func.py func_004D3748 --diff). Not part of the build. */
#include "common.h"

typedef struct Type1 {
    s32 f0;
    s32 f4;
} Type1;
typedef struct Type2 {
    s32 f24;
    s32 f28;
} Type2;
extern Type2 D_003D9BE0;
extern Type1 D_31B738[];

void func_004D3748(s32 arg0) {
    s32 var_a2;
    s32 var_t2;
    s32 var_t3;
    s32 var_a0;
    s32 var_a3;
    s32 var_t0;
    s32 temp_t1;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    Type1 *var_v0;
    Type1 *var_v1;

    var_t0 = D_003D9BE0.f28;
    var_a3 = D_003D9BE0.f24;
    if (arg0 == 0) {
        var_a2 = 1;
        var_t2 = 0;
        var_t3 = 0;
    } else {
        var_a2 = 3;
        var_t2 = 2;
        var_t3 = 1;
    }
    var_a0 = 0;
    temp_t1 = var_a2 + 1;
    if (var_a2 > 0) {
        var_v0 = &D_31B738[0];
        var_a0_2 = var_a2;
        do {
            var_v0->f0 = var_a3;
            var_a0_2 -= 1;
            var_v0->f4 = 0;
            var_a3 += 0x12C00;
            var_v0 += 1;
        } while (var_a0_2 != 0);
        var_a0 = var_a2;
    }
    if (var_a0 < temp_t1) {
        var_v1 = &D_31B738[var_a0];
        var_a0_3 = temp_t1 - var_a0;
        do {
            var_v1->f0 = var_t0;
            var_a0_3 -= 1;
            var_v1->f4 = 0;
            var_t0 += 0x12C00;
            var_v1 += 1;
        } while (var_a0_3 != 0);
        var_a0 = temp_t1;
    }
    temp_a1 = temp_t1 + var_t2;
    if (var_a0 < temp_a1) {
        var_v1 = &D_31B738[var_a0];
        var_a0_4 = temp_a1 - var_a0;
        do {
            var_v1->f0 = var_a3;
            var_a0_4 -= 1;
            var_v1->f4 = 1;
            var_a3 += 0x4F000;
            var_v1 += 1;
        } while (var_a0_4 != 0);
        var_a0 = temp_a1;
    }
    temp_a1_2 = temp_a1 + var_t3;
    if (var_a0 < temp_a1_2) {
        var_v1 = &D_31B738[var_a0];
        var_a0_5 = temp_a1_2 - var_a0;
        do {
            var_v1->f0 = var_t0;
            var_a0_5 -= 1;
            var_v1->f4 = 1;
            var_t0 += 0x4F000;
            var_v1 += 1;
        } while (var_a0_5 != 0);
        var_a0 = temp_a1_2;
    }
    if (var_a0 < 7) {
        var_v1 = &D_31B738[var_a0];
        do {
            var_v1->f4 = 0;
            var_a0 += 1;
            var_v1->f0 = 0;
            var_v1 += 1;
        } while (var_a0 < 7);
    }
}
