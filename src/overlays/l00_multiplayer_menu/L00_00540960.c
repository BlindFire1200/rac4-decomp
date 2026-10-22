#include "common.h"

extern void func_L00_0051A3D0(void);
extern void func_L00_0051A450(void);

/* Picks a multiplayer-menu handler: a negative flag falls back to the status field of the argument struct, and the resulting value selects between the two handlers. */
void func_L00_00540960(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 < 0) {
        arg4 = arg0[1];
    }
    if (arg4 != 0) {
        func_L00_0051A3D0();
    } else {
        func_L00_0051A450();
    }
}
