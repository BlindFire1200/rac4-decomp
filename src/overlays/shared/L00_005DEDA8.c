#include "common.h"

extern void *func_L00_005DEBD0(s32, s32, s32);
extern s16 D_00249070[];
extern s16 D_00249250[];

// Reset the two fields of every callback registered in the two id tables.
void func_L00_005DEDA8(void) {
    s32 i;
    s16 *p;
    s32 *cb;

    p = D_00249070;
    for (i = 0xEF; i >= 0; i--) {
        if (*p > 0) {
            cb = func_L00_005DEBD0(*p, 0xF, 0x10);
            if (cb != 0) {
                cb[2] = 0;
                cb[3] = 0;
            }
        }
        p++;
    }
    p = D_00249250;
    for (i = 0x7F; i >= 0; i--) {
        if (*p > 0) {
            cb = func_L00_005DEBD0(*p, 0xF, 0x10);
            if (cb != 0) {
                cb[2] = 0;
                cb[3] = 0;
            }
        }
        p++;
    }
}
