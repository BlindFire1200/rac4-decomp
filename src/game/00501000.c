/* cflags: -G0 */
/* C adapted from rac3-decomp func_003E6E50 (NTSC-U func_003E6D08, commit 403f30a9) */
#include "common.h"

typedef struct { u8 pad[0x5C]; void (*f5C[4])(void); s32 f6C; } Type1;
typedef struct { s32 f0; Type1 *f4; } Type2;
void func_00501000(Type2 *arg0) {
    s32 var1;
    for (var1 = 0; var1 < arg0->f4->f6C; var1++) {
        if (arg0->f4->f5C[var1]) {
            arg0->f4->f5C[var1]();
            arg0->f4->f5C[var1] = 0;
        }
    }
    arg0->f4->f6C = 0;
}
