#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_00309828[];
extern char D_004B4E48[];
extern char D_004B4ED8[];
extern char D_004B4F40[];

s32 D_00221754 = 0;

/* Initialize the referenced object once and return it. */
void *func_004B4C90(void) {
    if (D_00221754 == 0) {
        func_00501458((s32 *)D_00309828, (s32)D_004B4E48, (s32)D_004B4ED8, (s32)D_004B4F40, 0, 0);
        D_00221754 = 1;
    }
    return D_00309828;
}
