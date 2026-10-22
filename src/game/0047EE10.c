#include "common.h"

extern void func_00453608(void *p, s32 v, s32 n);

typedef struct {
    s32 f0;
    u8 f4[0x50];
} Type1;

extern Type1 D_0026FF38[];

/* Looks for arg0 in the three 0x54-byte table entries and, if it is new, claims the first empty entry. */
s32 func_0047EE10(s32 arg0) {
    s32 i;
    s32 free_slot;
    Type1 *slot;

    free_slot = -1;
    for (i = 0; i < 3; i++) {
        s32 v = D_0026FF38[i].f0;
        if (v == arg0) {
            return i;
        }
        if (v == 0) {
            free_slot = i;
        }
    }
    if (free_slot >= 0) {
        slot = &D_0026FF38[free_slot];
        func_00453608(slot, 0, 0x54);
        slot->f0 = arg0;
        return free_slot;
    }
    return -1;
}
