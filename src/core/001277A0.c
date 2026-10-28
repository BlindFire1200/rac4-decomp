/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0011FA10 (NTSC-U func_0011FA10, commit 403f30a9) */
#include "common.h"

typedef struct {
    u8 f0;
    u8 id;
} Type1;

typedef struct {
    s32 x0;
    s32 x4;
    Type1 ent[0x200];
} Type2;

extern s32 D_001A5730;
extern char D_00192D50[];
extern s32 func_00126BE0(s32);
extern void func_00126AD0(s32);
extern void func_00126A50(s32);
extern void func_00126B10(s32);
extern void func_00129570(const char *, ...);

void func_001277A0(Type2 *q) {
    s32 i;

    while (1) {
        func_00126BE0(D_001A5730);
        i = q->x0 & 0x1FF;
        q->x0 = i + 1;
        switch (q->ent[i].f0) {
        case 0:
            func_00126AD0(q->ent[i].id);
            break;
        case 1:
            func_00126A50(q->ent[i].id);
            break;
        case 2:
            func_00126B10(q->ent[i].id);
            break;
        default:
            func_00129570(D_00192D50);
            break;
        }
    }
}
