/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0013A598 (NTSC-U func_0013A598, commit 403f30a9) */
#include "common.h"

typedef int Type1 __attribute__((mode(TI)));
extern volatile Type1 D_00167E70[];
extern Type1 D_00167EC0[];
void func_00146A60(int x);

#define M1 (*(volatile u32 *)0x10002000)
#define M2 (*(volatile s32 *)0x10002010)
#define M3 (*(volatile Type1 *)0x10007010)

void func_00146AD8(void)
{
    func_00146A60(1);
    M2 = 0x40000000;
    while (M2 < 0) {
    }
    M1 = 0;
    while (M2 < 0) {
    }
    M3 = D_00167E70[0];
    M3 = D_00167E70[1];
    M3 = D_00167E70[2];
    M3 = D_00167E70[3];
    M3 = D_00167E70[4];
    M3 = D_00167E70[4];
    M3 = D_00167E70[4];
    M3 = D_00167E70[4];
    M1 = 0x50000000;
    while (M2 < 0) {
    }
    M1 = 0x58000000;
    while (M2 < 0) {
    }
    M3 = D_00167EC0[0];
    M3 = D_00167EC0[1];
    M1 = 0x60000000;
    while (M2 < 0) {
    }
    M1 = 0x90000000;
    while (M2 < 0) {
    }
    M2 = 0x40000000;
    while (M2 < 0) {
    }
    M1 = 0;
    while (M2 < 0) {
    }
}
