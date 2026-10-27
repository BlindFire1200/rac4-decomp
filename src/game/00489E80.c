/* cflags: -G0 */
/* C adapted from rac3-decomp func_003A2EE8 (NTSC-U func_003A2DA8, commit 403f30a9) */
#include "common.h"

typedef struct { u8 pad[0x10]; s16 f10; u8 pad2[6]; s32 x18; } Type1;
typedef struct { u8 pad[0x2C]; s16 f2C; s16 pad2; s32 x30; s32 x34; } Type2;
extern Type2 D_00206948[];
void func_00489E80(s32 a, long b) {
    Type1 *p = (Type1 *)(s32)b;
    if (p) {
        p->x18 = a;
        if (p->f10) {
            Type2 *d = D_00206948;
            if (d->f2C == 1 && a != 0) {
                d->f2C = 2;
                d->x30 = p->x18;
                d->x34 = p->x18 / 4;
            }
        }
    }
}
