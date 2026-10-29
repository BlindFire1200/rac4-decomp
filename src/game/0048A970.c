#include "common.h"

extern u8 D_355DC0[];

/* Returns the record at index arg0 & 0xFFFF when its key (high halfword) matches and its flag byte at +8 is set, else NULL. */
void *func_0048A970(u32 arg0) {
    u8 *rec = D_355DC0 + (arg0 & 0xFFFF) * 0x50;
    void *res = 0;
    if ((arg0 >> 16) == *(u16 *)(rec + 0x10)) {
        if (rec[8] != 0) {
            res = rec;
        }
    }
    return res;
}
