#include "common.h"

extern void func_00465C10(s32, s32, s32, s32);
extern void func_0047F568(s32, s32, s32, s32, s32);
extern void func_004D3EF0(void);
extern void func_004690E8(void);

s32 D_0021FB84 = 0;

/* Advance a state counter, running setup, tick and teardown routines per state. */
void func_004D3C68(void) {
    s32 v1 = D_0021FB84;

    switch (v1) {
    case 0:
        func_00465C10(3, 0, (s32)func_004690E8, 0);
        /* fall through */
    case 1:
        func_0047F568(4, 1, 1, 0, 0);
        v1 = D_0021FB84;
        v1 = v1 + 1;
        D_0021FB84 = v1;
        return;
    case 2:
        func_004D3EF0();
        break;
    }
}
