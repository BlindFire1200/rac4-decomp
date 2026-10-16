/* Not matching yet: SIZE ours 320 / retail 304 (tools/try_func.py func_L01_005589E0 --diff). Not part of the build. */
#include "common.h"
typedef struct { u8 pad0[4]; s32 add; u8 pad8[0x98-8]; f32 scale; f32 lower; f32 upper; f32 floor; s32 count; } Config;
typedef struct { u8 pad[0xB]; u8 used; } Item;
extern s32 D_0021DDB8;
f32 func_L00_005B75E0(s32, s32, s32, f32);
void func_L00_005BADE8(s32, void *, s32, s32, f32);
void func_L01_005589E0(s32 arg0, Config *cfg, s32 arg2) {
    s32 i, step, n, value;
    Item **items;
    f32 f;
    step = cfg->add / cfg->count;
    if (cfg->count <= 0) return;
    items = (Item **)((u8 *)cfg + 0x10);
    for (i = 0, n = 0; i < cfg->count; i++, n += step, items++) {
        Item *item = *items;
        if (item->used == 0) {
            value = (D_0021DDB8 + cfg->add + n) % cfg->add;
            f = func_L00_005B75E0(arg0, *(s32 *)((u8 *)cfg + 8), value,
                  ((f32)value / (f32)cfg->add) * cfg->scale);
            f = f * cfg->lower + cfg->upper;
            if (f > cfg->floor) f = cfg->floor;
            if (f < cfg->lower) f = cfg->lower;
            func_L00_005BADE8(arg0, item, 0, arg2, f);
        }
    }
}
