/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013AA40 (NTSC-U func_0013AA40, commit 403f30a9) */
#include "common.h"

extern s32 func_00155760();
typedef struct {
    u8 x0;
    u8 x1;
    u8 x2;
    u8 x3;
    u8 x4;
    u8 x5;
    u8 x6;
    u8 x7;
} Type1;
void func_00155780(Type1 *p) {
    p->x7 = func_00155760(p->x7);
    p->x6 = func_00155760(p->x6);
    p->x5 = func_00155760(p->x5);
    p->x3 = func_00155760(p->x3);
    p->x2 = func_00155760(p->x2);
    p->x1 = func_00155760(p->x1);
}
