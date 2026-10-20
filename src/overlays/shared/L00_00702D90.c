#include "common.h"

typedef struct {
    u8 f00[0x14];
    u32 f14;
    u8 f18[0x80];
} Type1;

extern void func_L00_005BCBF0(void *dst, void *src, s32 size);
extern s32 func_L00_006F75F0(u32 arg0, void *arg1);

/* Aligns a structure pointer if needed, then returns a size picked by a flag bit. */
s32 func_L00_00702D90(Type1 *arg0, Type1 *arg1, Type1 *arg2, Type1 *arg3) {
    Type1 buf;
    Type1 *p;
    s32 v;
    s32 r;

    p = arg3;
    if (((u32)p & 3) != 0) {
        func_L00_005BCBF0(&buf, p, 0x98);
        p = &buf;
    }
    v = func_L00_006F75F0(p->f14 >> 28, p->f18);
    r = v + 0x18;
    if (p->f14 & 0x01000000) {
        r = v + 0x29;
    }
    return r;
}
