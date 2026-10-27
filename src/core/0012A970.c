/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00122A68 (NTSC-U func_00122A68, commit 403f30a9) */
#include "common.h"

typedef struct { s32 f0; s32 f4; s32 f8; s32 fc; s32 f10; s32 f14; } Type1;
extern s32 D_00164730[];
extern s32 D_00164734[];
extern char D_00193020[];
extern char D_00193030[];
extern int func_00126BA0();

void func_0012A970(void) {
    Type1 sp;
    if (D_00164730[0] == -1) {
        sp.f8 = 1;
        sp.f14 = (s32)D_00193020;
        sp.f4 = 1;
        D_00164730[0] = func_00126BA0(&sp);
        sp.f14 = (s32)D_00193030;
        D_00164734[0] = func_00126BA0(&sp);
    }
}
