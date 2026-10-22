#include "common.h"

extern s32 func_L00_00733C70();

typedef struct {
    u8 pad[0x13A0];
    s32 f13A0;
} Type2;

// Calls func_L00_00733C70, subtracts the s32 field at offset 0x13A0 of the argument,
// and returns 0xBB8 instead when that field is negative.
s32 func_L00_00733BA8(Type2 *arg0) {
    s32 val;
    s32 res;

    res = func_L00_00733C70();
    val = arg0->f13A0;
    return (val < 0) ? 0xBB8 : (res - val);
}
