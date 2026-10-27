/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00122780 (NTSC-U func_00122780, commit 403f30a9) */
#include "common.h"

typedef struct Type1 {
    s32 x0, x4, x8, xC, x10, x14, x18, x1C; void *x20; s32 x24, x28, x2C, x30, x34, x38;
    struct Type1 *x3C;
    struct Type2 *x40;
} Type1;
typedef struct Type2 { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; } Type2;
typedef struct { s32 x0, x4, x8, xC, x10; void *x14; s32 x18, x1C, x20, x24, x28, x2C, x30; Type1 *x34; } Type3;
extern void func_00127968(s32);
void func_0012A688(Type3 *a) {
    Type1 *b = a->x34;
    Type2 *q = b->x40;
    if (q->fC == 0) {
        q->fC = (s32)b;
    } else {
        ((Type1 *)q->f10)->x3C = b;
    }
    q->f10 = (s32)b;
    b->x20 = a->x14;
    b->x1C = a->x1C;
    b->x24 = a->x20;
    b->xC = a->x24;
    b->x28 = a->x28;
    b->x2C = a->x2C;
    b->x30 = a->x30;
    b->x34 = a->x10;
    if (q->f0 >= 0 && q->f4 == 0) {
        func_00127968(q->f0);
    }
}
