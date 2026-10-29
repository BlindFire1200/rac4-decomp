#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_00322F80[];
extern char D_004DBBC8[];
extern char D_004DBC90[];
extern char D_004DBCE8[];

s32 D_00221B84 = 0;

/* Initialize the referenced object once and return it. */
void *func_004DBA98(void) {
    if (D_00221B84 == 0) {
        func_00501458((s32 *)D_00322F80, (s32)D_004DBBC8, (s32)D_004DBC90, (s32)D_004DBCE8, 0, 0);
        D_00221B84 = 1;
    }
    return D_00322F80;
}
