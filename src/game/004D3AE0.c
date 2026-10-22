#include "common.h"

extern void func_00465C10(s32, s32, void *, s32);
extern s32 func_0047F568(s32, s32, s32, s32, s32);
extern void func_004D3EF0(void);
extern char D_00469118[];

s32 D_0021FB84 = 0;

/* Drives a small transition state machine: plays the start cue on state 0, advances the counter on state 1, clears the end flag on state 2 */
void func_004D3AE0(void) {
    switch (D_0021FB84) {
    case 0:
        func_00465C10(2, 0, D_00469118, 0);
        /* fall through */
    case 1:
        func_0047F568(4, 1, 1, 0, 0);
        D_0021FB84 = D_0021FB84 + 1;
        break;
    case 2:
        func_004D3EF0();
        break;
    }
}
