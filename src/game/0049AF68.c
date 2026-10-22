#include "common.h"

/* Marks a table slot as in use, bumps the global counter, then dispatches the slot. */
extern u8 D_306DC0[];
extern s32 D_002215A0;
s32 D_002215A0B = 0;
extern void func_0049B018(s32 arg0);

void func_0049AF68(s32 arg0) {
    s32 offset;
    u8 *entry;

    offset = arg0 * 0x3C;
    entry = D_306DC0 + offset;

    if (entry[0] == 0) {
        entry[0] = 1;
        D_002215A0B = D_002215A0 + 1;
        func_0049B018(arg0);
    }
}
