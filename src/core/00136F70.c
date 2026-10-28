/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012AC40 (NTSC-U func_0012AC40, commit 403f30a9) */
#include "common.h"

typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
    u32 f10;
    u32 f14;
} Type1;
extern volatile int D_00165FE0;
extern volatile int D_00165FE8;
extern volatile int D_00165FEC;
extern volatile int D_00165FF0;
extern volatile int D_00165FF4;
extern char D_00194840[];
extern char D_00194850[];
extern char D_00194860[];
extern char D_00194870[];
extern int func_00126BA0();

void func_00136F70(void)
{
    Type1 sp;

    if (D_00165FE8 != -1 && D_00165FEC != -1 && D_00165FF0 != -1) {
        return;
    }
    sp.f8 = 1;
    sp.f4 = 1;
    sp.f14 = (u32)D_00194840;
    D_00165FE8 = func_00126BA0(&sp);
    sp.f14 = (u32)D_00194850;
    D_00165FEC = func_00126BA0(&sp);
    sp.f14 = (u32)D_00194860;
    D_00165FF0 = func_00126BA0(&sp);
    sp.f14 = (u32)D_00194870;
    sp.f8 = 0;
    D_00165FE0 = func_00126BA0(&sp);
    D_00165FF4 = 0;
}
