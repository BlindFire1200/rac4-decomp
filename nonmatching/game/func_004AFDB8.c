/* Not matching yet: BYTES 4/64 (tools/try_func.py func_004AFDB8 --diff). Not part of the build. */
#include "common.h"

typedef struct Entry1A4 {
    s32 f0;
    s32 f4;
    s32 f8;
    char pad[0x198];
} Entry1A4;

extern Entry1A4 D_003094F8[];
extern s32 func_00505B20(void);

void func_004AFDB8(void) {
    Entry1A4 *e = &D_003094F8[func_00505B20()];
    e->f8 = e->f8 & ~1;
}
