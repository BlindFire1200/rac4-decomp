#include "common.h"
extern s32 func_00453C68(s32, s32, f32);
void func_004EE9E8(s32 unused, s32 *out, s32 *a, s32 *b, f32 t) {
    out[0] = func_00453C68(a[0], b[0], t);
    out[1] = func_00453C68(a[1], b[1], t);
    out[2] = func_00453C68(a[2], b[2], t);
    out[3] = func_00453C68(a[3], b[3], t);
}
