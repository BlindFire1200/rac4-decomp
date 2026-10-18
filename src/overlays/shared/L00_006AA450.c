#include "common.h"

typedef struct Type1 {
    u32 f0;
    s32 f4;
    s32 f8;
    struct Type1 *fC;
    char pad10[0x2C - 0x10];
    u8 f2C;
} Type1;

void func_L00_006AACA8(Type1 *, s32);
extern s32 D_0022339C;
extern s32 D_002233A0;
extern Type1 *D_00343EA0[];
s32 D_002204A0 = 0;
extern s32 D_002204A8;

/* walks the seven object lists and calls func_L00_006AACA8 on unclaimed entries */
void func_L00_006AA450(void) {
    s32 i;
    Type1 *p;
    s32 ok;

    if (D_0022339C != D_002233A0) {
        return;
    }
    for (i = 0; i < 7; i++) {
        for (p = D_00343EA0[i]; p != 0; p = p->fC) {
            ok = p->f4 == -1;
            if (ok) {
                if (((p->f0 & D_002204A8) >> D_002204A0) == 6) {
                    if (p->f2C != 0) {
                        ok = 0;
                    }
                }
                if (ok) {
                    func_L00_006AACA8(p, 1);
                }
            }
        }
    }
}
