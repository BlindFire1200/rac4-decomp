/* cflags: -mno-split-addresses */
#include "common.h"

extern void func_004493B0(void);
extern void func_004593D8(s32, s32, s32);
extern void func_0047F568(s32, s32, s32, s32, s32);

s32 D_0021FC94 = 0;
s32 D_0021FC90 = 0;
u8 *D_002213F4 = 0;

extern u32 D_00221410;

/* Sets bit 0x80 of the u16 at offset 0x34 in every 0x100-byte record from the global start pointer up to the global end marker. */
void func_004DCBA8(s32 arg0, s32 arg1) {
    u8 *p;

    func_0047F568(7, 1, 0, 0, 0);
    D_0021FC94 = arg1;
    D_0021FC90 = arg0;
    func_004493B0();
    func_004593D8(0, 0, 0);

    p = D_002213F4;
    while ((u32)p < D_00221410) {
        *(u16 *)(p + 0x34) |= 0x80;
        p += 0x100;
    }
}
