#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_00321B00[];
extern char D_004D9EB0[];
extern char D_004DA140[];
extern char D_004DA1F0[];

s32 D_00221B74 = 0;

/* Initialize the referenced object once and return it. */
void *func_004D9DC0(void) {
    if (D_00221B74 == 0) {
        func_00501458((s32 *)D_00321B00, (s32)D_004D9EB0, (s32)D_004DA140, (s32)D_004DA1F0, 0, 0);
        D_00221B74 = 1;
    }
    return D_00321B00;
}
