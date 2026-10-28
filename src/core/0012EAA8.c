/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00125E48 (NTSC-U func_00125E48, commit 403f30a9) */
#include "common.h"

typedef struct Type1 {
    struct Type1 *f0;
    volatile s32 id;
    s32 x8;
    s32 xC;
} Type1;

extern Type1 *D_001ACE00;
extern s32 func_0012E3F0(void);
extern void func_0012E6D0(s32, s32, void *, Type1 *);
extern void func_0012E5A0(s32);
extern void func_0012E918(void);

static inline Type1 *var1(void) {
    Type1 *n = D_001ACE00;
    if (n != 0) {
        D_001ACE00 = n->f0;
    }
    return n;
}

static inline void var2(Type1 *n) {
    n->f0 = D_001ACE00;
    D_001ACE00 = n;
}

s32 func_0012EAA8(s32 a, s32 b, s32 c) {
    Type1 *n;
    s32 id;

    if (b == 0) {
        return 0x80000016;
    }
    n = var1();
    if (n == 0) {
        return 0x80008005;
    }
    id = func_0012E3F0();
    if (id < 0) {
        var2(n);
        n->id = 0;
        return id;
    }
    n->x8 = b;
    n->xC = c;
    n->id = id;
    func_0012E6D0(id, a, func_0012E918, n);
    func_0012E5A0(id);
    return ((s32)n << 4) | (id & 0xFE) | 1;
}
