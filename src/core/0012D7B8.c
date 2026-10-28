/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124CB8 (NTSC-U func_00124CB8, commit 403f30a9) */
#include "common.h"

extern s32 func_0012D750();
typedef struct { u32 a; u32 b; } Type1;
extern Type1 D_00165560[3];
extern u8 D_00164DB8[];
extern void func_0012D6E8(u32, u32);
extern void func_0012D6F8(u32, void *, s32);
extern u32 func_0012D740(u32);
extern void func_00126E20(s32);
void func_0012D7B8(void) {
    u32 i;
    Type1 *p;
    if (func_0012D750() == 0) {
        return;
    }
    func_0012D6E8(D_00165560[0].a, D_00165560[0].b);
    func_0012D6F8(0x80074000, D_00164DB8, 0x7A8);
    func_00126E20(0);
    func_00126E20(2);
    func_0012D6E8(D_00165560[1].a, D_00165560[1].b);
    for (i = 2, p = &D_00165560[2]; i < 3; i++, p++) {
        func_0012D6E8(p->a, func_0012D740(p->a));
    }
}
