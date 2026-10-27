/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00134DB8 (NTSC-U func_00134DB8, commit 403f30a9) */
#include "common.h"

extern u32 func_0013EDC8();

typedef struct {
    u8 pad[0x154];
    s32 f154;
    s32 f158;
    s32 f15C;
} Type1;

void func_001412F8(Type1 *p) {
    func_0013EDC8(p, 3);
    if (func_0013EDC8(p, 1)) {
        func_0013EDC8(p, 8);
        func_0013EDC8(p, 8);
        p->f154 = func_0013EDC8(p, 8);
    }
    p->f158 = func_0013EDC8(p, 14);
    func_0013EDC8(p, 1);
    p->f15C = func_0013EDC8(p, 14);
}
