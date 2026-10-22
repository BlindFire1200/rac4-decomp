#include "common.h"

extern void func_00465C10(s32, s32, void *, s32);
extern void func_0047F568(s32, s32, s32, s32, s32);
extern void func_004D3EF0(void);
extern void func_00469118(void);

s32 D_0021FB84 = 0;

/* Dispatch on the D_0021FB84 state counter: state 0 sets up, state 1 ticks the counter, state 2 clears the flag */
void func_004D3A48(void) {
    s32 state = D_0021FB84;
    switch (state) {
    case 0:
        func_00465C10(1, 0, func_00469118, 0);
        /* fall through */
    case 1:
        func_0047F568(4, 1, 1, 0, 0);
        state = D_0021FB84;
        state = state + 1;
        D_0021FB84 = state;
        break;
    case 2:
        func_004D3EF0();
        break;
    }
}
