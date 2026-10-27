/* C adapted from rac3-decomp func_003AA028 (NTSC-U func_003A9EE0, commit 403f30a9) */
#include "common.h"

typedef struct { u32 a, b, c, d; } Type1;
extern Type1 *D_00221E20;
void func_004E8298(u32 x) {
    Type1 *p = D_00221E20++;
    p->a = x + 0x90000000;
    p->b = 0; p->c = 0; p->d = 0;
}
