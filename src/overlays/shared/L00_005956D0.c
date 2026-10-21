#include "common.h"

extern void *func_006A9160(s32);
extern u8 D_1EEBC0[];

// Replace the current selection when its alternate entry is available.
void func_L00_005956D0(void) {
    void *object = func_006A9160(1);
    u8 *entry = *(u8 **)((u8 *)object + 0x2F00);
    if (entry[0x551] != 0) {
        u8 *candidate;
        if (entry == D_1EEBC0) {
            candidate = D_1EEBC0 + 0x1140;
        } else {
            candidate = D_1EEBC0;
        }
        if (candidate[0x551] == 0) {
            *(u8 **)((u8 *)object + 0x2F00) = candidate;
        }
    }
}
