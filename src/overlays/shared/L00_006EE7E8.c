#include "common.h"

void func_L00_006BE620(void *);
void func_L00_006C6AA8(void *, void *, void *, s32, s32, s32, s32, s32);
void func_L00_006C9BB8(void *, s32);

/* Trigger an action on arg0 when its current id matches and its counter qualifies */
void func_L00_006EE7E8(u8 *arg0, s32 arg1) {
    u8 id;

    id = *(u8 *)(arg0 + 0x3A14);
    if (id != *(s32 *)(arg0 + 0x25CC)) {
        return;
    }
    if (*(s32 *)(arg0 + 0x25D4) == 0x14 && arg1 == 0x76) {
        return;
    }
    if ((id == 0x99 && *(s32 *)(arg0 + 0x370) >= 0x97) ||
        (id == 0x7E && *(s32 *)(arg0 + 0x370) >= 0xB) ||
        (id == 0x7A && *(s32 *)(arg0 + 0x370) >= 0xB) ||
        (id == 0x7B && *(s32 *)(arg0 + 0x370) >= 0xB) ||
        (id == 0x8E && *(s32 *)(arg0 + 0x370) >= 0xB) ||
        id == 0x76) {
        if (*(s32 *)(arg0 + 0x25CC) == 0x7E) {
            func_L00_006BE620(arg0);
        }
        if (arg1 == 0x2B && *(u8 *)(arg0 + 0x2ED6) == 0) {
            func_L00_006C9BB8(arg0, 1);
        }
        func_L00_006C6AA8(arg0, arg0 + 0x3A20, arg0 + 0x3A50, arg1, 0, 0, 0, 1);
    }
}
