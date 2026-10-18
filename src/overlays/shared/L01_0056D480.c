#include "common.h"

typedef void *(*Type2)(void *);

typedef struct {
    u8 pad[0xD0];
    u8 *items[16];
    s32 count;
} Type1;

extern s32 func_L00_005C8CF0(s16);
extern Type2 *func_L00_005DEBD0(s32, s32, s32);
extern s32 func_L01_0056B748(void *);

s32 func_L01_0056D480(Type1 *arg0, u8 *arg1) {
    s32 i;
    Type2 *table;
    u8 *r;

    if (arg1 == 0) {
        return 0;
    }
    if (arg0 == 0) {
        return 0;
    }
    if (func_L01_0056B748(arg1) == 0) {
        return 0;
    }
    for (i = 0; i < arg0->count; i++) {
        if (arg0->items[i] == 0) continue;
        table = func_L00_005DEBD0(func_L00_005C8CF0(*(s16 *)(arg0->items[i] + 0xBC)), 0xE, 0x1C);
        if (table == 0) continue;
        if (*table == 0) continue;
        r = (*table)(arg0->items[i]);
        if (r == 0) continue;
        if (*(s16 *)(r + 0x4E) == *(s32 *)(arg1 + 0x1B8)) {
            return 0;
        }
    }
    return 1;
}
