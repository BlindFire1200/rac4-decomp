/* cflags: -G0 */
/* C adapted from rac3-decomp func_003E6F70 (NTSC-U func_003E6E28, commit 403f30a9) */
#include "common.h"

extern void func_00501850();
extern void func_005002A8(s32);
extern void func_005018D0(void);
typedef struct { s32 a[5]; s32 idx; } Type1;
typedef struct { s32 pad; Type1 *q; } Type2;
void func_00501090(Type2 *p) {
    s32 v; func_00501850(p); v = p->q->a[p->q->idx]; if (v) func_005002A8(v); func_005018D0();
}
