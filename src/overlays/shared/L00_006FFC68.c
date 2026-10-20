#include "common.h"

typedef struct {
    s32 f0;
    f32 f4;
    s32 f8;
    s32 fC;
} Type1;

extern s32 D_0021E6B4;
extern Type1 D_004CF778[];
s32 func_L00_005C88C0();
typedef struct {
    s32 f0[4];
    f32 f10[4];
} Type2;

Type2 *func_L00_007006D0(s32, s32);

// Look up a scaled float from a per-kind table, with a bonus above level 9.
f32 func_L00_006FFC68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 result;

    if (D_0021E6B4 == 1) {
        if (arg2 == 0) {
            arg2 = 2;
        } else if (arg2 == 1) {
            arg2 = 3;
        }
    }
    result = func_L00_007006D0(arg0, arg1)->f10[arg2] * (f32)arg3;
    if (func_L00_005C88C0() != 0 && arg1 >= 10) {
        result += (f32)(arg1 - 9) * D_004CF778[arg0].f4;
    }
    return result;
}
