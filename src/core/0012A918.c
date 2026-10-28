/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00122A10 (NTSC-U func_00122A10, commit 403f30a9) */
#include "common.h"

typedef struct { u8 pad[0x10]; s32 x10; u8 pad2[4]; s32 x18; } Type1;
typedef struct { Type1 *x0; s32 x4; } Type2;
s32 func_0012A918(Type2 *p) {
    Type1 *q = p->x0;
    if (q == 0 || p->x4 != q->x18 || !(q->x10 & 1)) {
        return 0;
    }
    return 1;
}
