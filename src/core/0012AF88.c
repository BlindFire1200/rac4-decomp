/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00123080 (NTSC-U func_00123080, commit 403f30a9) */
#include "common.h"

typedef struct { s32 pad0; s32 f4; s32 f8; s32 fc; s32 f10; void *f14; } Type1;
extern s32 D_0016472C[];
extern u8 D_001930A8[];
extern s32 func_00126BA0(void *);
void func_0012AF88(void) {
    Type1 s;
    if (D_0016472C[0] == -1) {
        s.f8 = 1;
        s.f4 = 1;
        s.f14 = D_001930A8;
        D_0016472C[0] = func_00126BA0(&s);
    }
}
