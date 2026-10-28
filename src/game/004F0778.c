/* C adapted from rac3-decomp func_003B14C0 (NTSC-U func_003B1320, commit 403f30a9) */
#include "common.h"

extern s32 func_004EF878();
extern s32 func_004EF948();
typedef struct { u8 p0[8]; u32 f8; s32 fC; } Type1;
extern s32 D_00221ED8;
extern s32 func_004F0848();
s32 func_004F0778(s32 arg0, Type1 *obj, u8 *buf) {
    s32 v[4];
    s32 a0, a1, a2, a3;
    s32 t, q, q2, w, res;
    u32 p, end;
    t = *(s32 *)(buf + 0x50008);
    p = obj->f8 + 4;
    end = (u32)buf + t;
    p = (p >= end) ? p - t : p;
    q = obj->fC - 4;
    w = end - p;
    w = (q < w) ? q : w;
    q2 = q - w;
    func_004EF878(D_00221ED8, v, &v[1], &v[2], &v[3]);
    a1 = v[1];
    a0 = v[0];
    a2 = v[2];
    a3 = v[3];
    res = func_004F0848(a0, a1, a2, a3, p, w, buf, q2);
    func_004EF948(D_00221ED8, res);
    return res > 0;
}
