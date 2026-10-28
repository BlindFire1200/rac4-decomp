/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00131D30 (NTSC-U func_00131D30, commit 403f30a9) */
#include "common.h"

typedef struct {
    s32 x;
    s32 y;
} Type1;

extern s32 func_0013EDC8();
extern void func_0013DE48();

void func_0013E270(void *p, Type1 *mv, s32 a6, s32 *a5, s32 idx, s32 fwd, s32 bwd, s32 rx, s32 ry, s32 arg0, s32 arg1)
{
    if (fwd == 1) {
        if (bwd == 0 && arg0 == 0) {
            s32 v = func_0013EDC8(p, 1);
            a5[idx] = v;
            a5[idx + 2] = v;
        }
        func_0013DE48(p, &mv[idx], a6, rx, ry, arg0, arg1, 0);
        mv[idx + 2].x = mv[idx].x;
        mv[idx + 2].y = mv[idx].y;
    } else {
        a5[idx] = func_0013EDC8(p, 1);
        func_0013DE48(p, &mv[idx], a6, rx, ry, arg0, arg1, 0);
        a5[idx + 2] = func_0013EDC8(p, 1);
        func_0013DE48(p, &mv[idx + 2], a6, rx, ry, arg0, arg1, 0);
    }
}
