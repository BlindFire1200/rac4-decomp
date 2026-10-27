/* cflags: -G0 */
/* C adapted from rac3-decomp func_00135E40 (NTSC-U func_00135E40, commit 403f30a9) */
#include "common.h"

typedef struct { u8 pad[0x184]; s32 x184; } Type1;
typedef struct { u8 pad[0x40]; Type1 *x40; } Type2;
extern void func_00141D58(Type2 *, s32, s32);
extern void func_00141EC8(Type2 *, s32, s32);
void func_00142380(Type2 *p, s32 b, s32 c) {
    if (p->x40->x184 != 3) {
        func_00141EC8(p, b, c);
    } else {
        func_00141D58(p, b, c);
    }
}
