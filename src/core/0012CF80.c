/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124488 (NTSC-U func_00124488, commit 403f30a9) */
#include "common.h"

typedef struct {
    s32 a;
    s32 b;
} Type1;

extern Type1 D_00164AC8[8];
extern s32 D_00164AC0;
extern u8 D_00164748[];
extern s32 func_0012CF60(s32);
extern void func_0012CF70(s32, s32);
extern void func_0012CF18(u32, void *, s32);
extern void func_00126E20(s32);

void func_0012CF80(void) {
    u32 i;

    func_0012CF70(D_00164AC8[0].a, D_00164AC8[0].b);
    func_0012CF18(0x80075000, D_00164748, 0x330);
    func_00126E20(0);
    func_00126E20(2);
    func_0012CF70(D_00164AC8[1].a, D_00164AC8[1].b);
    func_0012CF70(D_00164AC8[2].a, D_00164AC8[2].b);
    for (i = 3; i < 8; i++) {
        func_0012CF70(D_00164AC8[i].a, func_0012CF60(D_00164AC8[i].a));
    }
    D_00164AC0 = func_0012CF60(3);
}
