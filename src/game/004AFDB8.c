#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    u8 pad[0x20];
} Entry;

extern Entry D_3094F8[];
extern s32 func_00505B20(void);

void func_004AFDB8(void) {
    s32 index;
    Entry *e;

    index = func_00505B20();
    e = &D_3094F8[index];
    e->f4 = e->f4 & ~1;
}
