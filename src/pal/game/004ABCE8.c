#include "common.h"

typedef struct {
    f32 x;
    f32 y;
} Point;

extern s32 func_00506BB8(void);
extern void func_00506B70(s32);
extern s32 func_004977E0(s32);
extern void func_00506000(s32, s32);
extern void func_005062D0(s32, s32);
extern void func_005057D8(s32, f32 *, f32 *);
extern void func_005052D0(s32, f32, f32);
extern s32 func_00498468(s32);
extern void func_00506978(s32, f32, f32);
extern Point D_003D92C8[];
extern f32 D_003D1A28[];

// Keeps func_00506BB8()'s value and calls func_00506B70(arg0); for id 0x7000B calls func_00506000
// and func_005062D0 (with 0, then arg1), reads two floats with func_005057D8, calls func_005052D0
// with the D_003D92C8 pair picked by func_004977E0 (y plus half the second float) and func_00506978
// with the D_003D1A28 float picked by func_00498468; then calls func_00506B70 with the kept value.
void func_004ABCE8(s32 arg0, s32 arg1) {
    s32 saved = func_00506BB8();
    s32 idx;
    f32 size[2];

    func_00506B70(arg0);
    idx = func_004977E0(arg0);
    func_00506000(0x7000B, 1);
    func_005062D0(0x7000B, 0);
    func_005062D0(0x7000B, arg1);
    func_005057D8(0x7000B, &size[0], &size[1]);
    func_005052D0(0x7000B, D_003D92C8[idx].x, D_003D92C8[idx].y + size[1] * 0.5f);
    func_00506978(0x7000B, D_003D1A28[func_00498468(arg0)], size[1]);
    func_00506B70(saved);
}
