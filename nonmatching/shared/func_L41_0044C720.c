/* Not matching yet: BYTES 42/272 (tools/try_func.py func_L41_0044C720 --diff). Not part of the build. */
#include "common.h"
typedef struct Manager Manager;
struct Manager { u8 pad0[8]; s32 (*filter)(void *); u8 padC[8]; void (*destroy)(void *); };
typedef struct { u8 pad0[0x30]; u64 flags; u8 pad38[0x60]; s32 active; u8 pad9C[0x20]; s16 type; } Entity;
extern Entity *D_00379F60[64];
Manager *func_L00_005DEBD0(s32, s32, s32);
void func_L41_0044C720(s32 arg0) {
    Manager *manager = func_L00_005DEBD0(0x2628, 0, 0x20);
    s32 i;
    if (manager != 0 && manager->filter != 0) {
        Entity **ptr = D_00379F60;
        for (i = 0x3F; i >= 0; i--, ptr++) {
            Entity *e = *ptr;
            if (e != 0 && (((e->flags & ((u64)0x8208 << 29)) != ((u64)0x8200 << 23)) || e->active != 0) && e->type == 0x2628 && (arg0 == -1 || manager->filter(e) != arg0)) {
                manager->destroy(e);
            }
        }
    }
}
