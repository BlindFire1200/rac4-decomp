/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124FB8 (NTSC-U func_00124FB8, commit 403f30a9) */
#include "common.h"

/* libkernl: patch IOP memory from the address/value table when the IOP is not yet up; 2.9-ee-991111 */
typedef struct { u32 a; u32 v; } Type1;

extern void func_0012DA50(u32, u32);
extern void func_0012DA60(u32, void *, s32);
extern u32 func_0012DAA8(u32);
extern void func_00126E20(s32);
extern Type1 D_00165CE8[];
extern u8 D_00165580[];
extern u8 D_00165CC0[];

void func_0012DAB8(void) {
    u32 i;

    if (*(volatile u32 *)0x10001810 & 0x100) {
        return;
    }
    func_0012DA50(D_00165CE8[0].a, D_00165CE8[0].v);
    func_0012DA60(0x80076000, D_00165580, 0x740);
    func_0012DA60(0x82000, D_00165CC0, 0x28);
    func_00126E20(0);
    func_00126E20(2);
    func_0012DA50(D_00165CE8[1].a, D_00165CE8[1].v);
    for (i = 2; i < 8; i++) {
        func_0012DA50(D_00165CE8[i].a, func_0012DAA8(D_00165CE8[i].a));
    }
}
