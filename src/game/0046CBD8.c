/* cflags: -G0 */
/* C adapted from rac3-decomp func_003C3568 (NTSC-U func_003C3450, commit 403f30a9) */
#include "common.h"

typedef struct { s16 a; s16 b; } Type1;
typedef struct { u8 c[0xC]; s32 fC; } Type2;
typedef struct { u8 p0[0x20]; Type2 *f20; } Type3;
extern s32 D_00246DB0[];
extern Type3 *D_00242C00[];
extern Type1 D_002465F0[];
void func_0046CBD8(void) {
    s32 *p;
    Type2 *e;
    u8 *c;
    u8 *o;
    Type1 *t;
    for (p = D_00246DB0; *p >= 0; p++) {
        e = D_00242C00[*p]->f20;
        for (;;) {
            o = (u8 *)(e->fC & 0x7FFFFFFF);
            c = e->c;
            if (*c != 0xFF) {
                do {
                    t = &D_002465F0[*c];
                    if (t->a != 0) { *(u32 *)(o + 0x30) = (*(u32 *)(o + 0x30) & 0xFFFFC000) | t->a; }
                    if (t->b != 0) { *(u32 *)(o + 0x40) = (*(u32 *)(o + 0x40) & 0xFFFFC000) | t->b; }
                    c++;
                    o += 0x40;
                } while (*c != 0xFF);
            }
            if (e->fC < 0) break;
            e++;
        }
    }
}
