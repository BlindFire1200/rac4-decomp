#include "common.h"

extern void func_00453608(void *p, s32 v, s32 n);
extern s32 func_00498918(s32, s32);
extern s32 D_309840[];

// Initialize and populate struct
void func_004B4CF0(void) {
    s32 *s0 = D_309840;

    func_00453608(s0, 0, 0x38);

    *(s32 *)((u32)s0 + 0x10) = func_00498918(2, 0);
    *(s32 *)((u32)s0 + 0x14) = func_00498918(2, 1);

    *(u8 *)((u32)s0 + 0x24) = 1;
    *(s32 *)((u32)s0 + 0x18) = 0;
}
