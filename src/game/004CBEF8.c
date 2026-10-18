#include "common.h"

extern u8 D_30EAA0[];
extern void func_004CBFB0(void);
extern void func_004CC228(void);
extern void func_004CD368(void);
extern s32 func_005014B0(s32);
extern s32 func_00505B20(void);

void func_004CBEF8(s32 arg0) {
    s32 *state = (s32 *)(D_30EAA0 + func_00505B20() * 0x64);
    switch (state[0]) {
    case 1:
        state[0] = 0;
        break;
    case 2:
        func_005014B0(arg0);
        break;
    case 0:
        func_004CC228();
        break;
    }
    if (state[2] & 1) func_004CBFB0();
    func_004CD368();
}
