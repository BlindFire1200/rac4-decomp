#include "common.h"

typedef struct Type1 {
    f32 f0[8];
    f32 f20[8];
    f32 f40[8];
    f32 f60[8];
    u16 f80[8];
    u8 f90;
    u8 f91;
} Type1;

s32 func_L01_005723E8(Type1 *, u16);

// Insert an entry into a list sorted by descending key, capped at f90 entries
s32 func_L01_005720B8(Type1 *o, u16 id, f32 key, f32 a, f32 b, f32 c) {
    s32 i;
    s32 slot;
    s32 m;

    slot = -1;
    if (o == 0) {
        return 1;
    }
    if (func_L01_005723E8(o, id) != 0) {
        return 1;
    }
    for (i = o->f91 - 1; i >= 0; i--) {
        if (o->f60[i] < key) {
            slot = i;
        }
    }
    if (slot != -1) {
        m = (o->f90 - 1 < o->f91) ? o->f90 - 1 : o->f91;
        for (i = m; slot < i; i--) {
            o->f0[i] = o->f0[i - 1];
            o->f20[i] = o->f20[i - 1];
            o->f40[i] = o->f40[i - 1];
            o->f60[i] = o->f60[i - 1];
            o->f80[i] = o->f80[i - 1];
        }
        o->f0[slot] = a;
        o->f20[slot] = b;
        o->f60[slot] = key;
        o->f80[slot] = id;
        o->f91++;
        o->f91 = (o->f91 > o->f90) ? o->f90 : o->f91;
    } else if (o->f91 < o->f90) {
        o->f0[o->f91] = a;
        o->f20[o->f91] = b;
        o->f40[o->f91] = c;
        o->f60[o->f91] = key;
        o->f80[o->f91] = id;
        o->f91++;
    }
    return 1;
}
