/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B3038 (NTSC-U func_003B2E98, commit 403f30a9) */
#include "common.h"

typedef struct { s32 x0; s32 x4; volatile s32 x8; volatile s32 xC; s32 x10; } Type1;
void func_0012D420(void);
void func_0012D470(void);
void func_004F22F0(Type1 *p) {
    func_0012D420();
    *(s32 *)(p->x8 * 0x27E40 + p->x4) = 2;
    p->xC++;
    p->x8 = (p->x8 + 1) % p->x10;
    func_0012D470();
}
