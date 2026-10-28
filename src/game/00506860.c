/* cflags: -G0 */
/* C adapted from rac3-decomp func_003E93A0 (NTSC-U func_003E9240, commit 403f30a9) */
#include "common.h"

extern s32 func_004A09E8();
extern s32 func_00505238(s32, s32);
extern s32 func_00505328(s32, s32);
extern s32 func_005058E0(s32, f32, f32);
extern s32 func_00504238(s32, f32, f32);
s32 func_00506860(s32 a, s32 b, s32 c, f32 x, f32 y, f32 z, f32 w) {
    s32 f = func_004A09E8(a);
    s32 ok = func_00505238(a, b) != 0;
    s32 t;
    if (!f) ok = 0;
    t = func_00505328(a, c) != 0;
    ok = ok & t;
    t = func_005058E0(a, z, w) != 0;
    ok = ok & t;
    t = func_00504238(a, x, y) != 0;
    return ok & t;
}
