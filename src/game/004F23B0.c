/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B30F8 (NTSC-U func_003B2F58, commit 403f30a9) */
#include "common.h"

extern s32 func_004F23A0();
typedef struct { s32 x0; s32 x4; volatile s32 x8; volatile s32 xC; s32 x10; } Type1;
s32 func_004F23B0(Type1 *p) {
 if (func_004F23A0(p)) return 0; return p->x4 + ((p->x8 - p->xC + p->x10) % p->x10) * 0x27E40;
}
