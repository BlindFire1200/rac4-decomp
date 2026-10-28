/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00125540 (NTSC-U func_00125540, commit 403f30a9) */
#include "common.h"

typedef struct Type1 { struct Type1 *f0; struct Type1 *f4; } Type1;
extern Type1 *D_00165D40[];
Type1 *func_0012E040(Type1 *p) {
    Type1 *f0 = p->f0;
    if (p->f4 != 0) {
        p->f4->f0 = f0;
    } else {
        D_00165D40[0] = f0;
    }
    if (f0 != 0) {
        f0->f4 = p->f4;
    }
    p->f4 = 0;
    return f0;
}
