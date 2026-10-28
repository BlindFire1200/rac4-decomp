/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00122AE0 (NTSC-U func_00122AE0, commit 403f30a9) */
#include "common.h"

extern s32 func_00126BC0();
extern s32 func_0012A970();
extern s32 D_00164730;
extern s32 func_00126BE0(s32);
typedef struct { s32 x0; s32 x4; s32 x8; s32 xC; } Type1;
extern Type1 D_001A9040[32];
void *func_0012A9E8(void) {
    Type1 *p;
    func_0012A970();
    func_00126BE0(D_00164730);
    for (p = D_001A9040; p < &D_001A9040[32]; p++) {
        if (p->x4 == 0) {
            p->x4 = 0x10000000;
            func_00126BC0(D_00164730);
            return p;
        }
    }
    func_00126BC0(D_00164730);
    return 0;
}
