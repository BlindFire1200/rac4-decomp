/* cflags: -G0 */
/* C adapted from rac3-decomp func_003E6E50 (NTSC-U func_003E6D08, commit 403f30a9) */
#include "common.h"

typedef struct { u8 pad[0x70]; void (*f70[4])(void); s32 f80; } Type1;
typedef struct { s32 f0; Type1 *f4; } Type2;
void func_00500F70(Type2 *arg0) {
    s32 var1;
    for (var1 = 0; var1 < arg0->f4->f80; var1++) {
        if (arg0->f4->f70[var1]) {
            arg0->f4->f70[var1]();
            arg0->f4->f70[var1] = 0;
        }
    }
    arg0->f4->f80 = 0;
}
