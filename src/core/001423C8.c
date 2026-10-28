/* cflags: -G0 */
#include "common.h"

typedef struct {
    u8 pad[0x28];
    s32 f28;
} Sub;

typedef struct {
    u8 pad[0x1C8];
    Sub *a;
    Sub *b;
    u8 pad1[8];
    Sub *c;
    Sub *d;
    u8 pad2[8];
    Sub *e;
} Inner;
typedef struct {
    u8 pad[0x40];
    u8 *in;
} Outer;

s32 func_001423C8(Outer *o) {
    u8 *t = o->in;

    if (*(Sub **)(t + 0x1C8)) {
        (*(Sub **)(t + 0x1C8))->f28 = 0;
    }
    if (*(Sub **)(t + 0x1D8)) {
        (*(Sub **)(t + 0x1D8))->f28 = 0;
    }
    if (*(Sub **)(t + 0x1E8)) {
        (*(Sub **)(t + 0x1E8))->f28 = 0;
    }
    if (*(Sub **)(t + 0x1CC)) {
        (*(Sub **)(t + 0x1CC))->f28 = 0;
    }
    if (*(Sub **)(t + 0x1DC)) {
        (*(Sub **)(t + 0x1DC))->f28 = 0;
    }
    if (*(Sub **)(t + 0x1EC)) {
        (*(Sub **)(t + 0x1EC))->f28 = 0;
    }
    return 1;
}
