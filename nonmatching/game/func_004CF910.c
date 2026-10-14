/* Not matching yet: BYTES 2/64 (tools/try_func.py func_004CF910 --diff). Not part of the build. */
#include "common.h"

typedef struct Entry1A4 {
    s32 f0;
    s32 f4;
    s32 f8;
    char pad[0x198];
} Entry1A4;

extern Entry1A4 D_00316D00[];
extern s32 func_00505B20(void);

void func_004CF910(void) {
    Entry1A4 *e = &D_00316D00[func_00505B20()];
    e->f8 = e->f8 & ~1;
}
