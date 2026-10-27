#include "common.h"

typedef struct {
    u8 *base;
    u16 limit;
    u16 pad6;
    s32 pad8;
    s32 padC;
    u16 *pos;
    u8 *bitp;
} BitWriter;

void func_00148408(BitWriter *o, s16 val, s32 n) {
    u16 *pos = o->pos;
    u8 *bitp = o->bitp;
    u16 limit = o->limit;
    u8 *p = o->base + *pos;
    s32 sum;
    u8 total;

    if (*bitp == 0) {
        *p = val;
    } else {
        *p |= val << *bitp;
    }
    sum = *bitp + n;
    *bitp = sum;
    total = sum;
    if (total >= 9) {
        p++;
        *pos += 1;
        if (*pos >= limit) {
            *pos = 0;
            p = o->base;
        }
        *p = val >> (8 - (*bitp - n));
        *bitp -= 8;
    } else if (total == 8) {
        *bitp = 0;
        *pos += 1;
        if (*pos >= limit) {
            *pos = 0;
        }
    }
}
