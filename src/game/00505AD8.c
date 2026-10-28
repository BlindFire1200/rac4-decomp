/* cflags: -G0 */
/* C adapted from rac3-decomp func_003E86B0 (NTSC-U func_003E8550, commit 403f30a9) */
#include "common.h"

typedef struct { s32 x0; s32 x4; s32 x8; s32 xC; } Type1;
extern Type1 D_00222038;
extern void *func_005010E0();
extern void func_005012C8();
void func_00505AD8(s32 a) {
    Type1 *q;
    if (D_00222038.x4) q = &D_00222038;
    else q = func_005010E0(&D_00222038);
    func_005012C8(q, a);
}
