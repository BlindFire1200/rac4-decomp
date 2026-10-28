#include "common.h"

typedef struct {
    u8 *base;
    u16 limit;
    u16 pad6;
    u16 *pos;
    u8 *bitp;
} BitReader;

void func_0014F378(BitReader *o, u8 *out, s32 n) {
    u16 *pos = o->pos;
    u8 *bitp = o->bitp;
    u16 limit = o->limit;
    s32 mask = (1 << n) - 1;
    s32 bit = *bitp;
    u8 *p = o->base + *pos;
    s32 total = bit + n;
    s32 rest;

    if ((total >> 3) != 0) {
        rest = 8 - bit;
        *out = *p >> bit;
        p++;
        *pos += 1;
        if (*pos >= limit) {
            *pos = 0;
            p = o->base;
        }
        total -= 8;
        *out |= (*p & (mask >> rest)) << rest;
    } else {
        *out = (*p >> bit) & mask;
        if (total == 8) {
            total = 0;
            *pos += 1;
            if (*pos >= limit) {
                *pos = 0;
            }
        }
    }
    *bitp = total;
}
