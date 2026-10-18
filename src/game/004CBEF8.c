#include "common.h"

extern u8 D_30EAA0[];
extern void func_004CBFB0(void);
extern void func_004CC228(void);
extern void func_004CD368(void);
extern s32 func_005014B0(s32);
extern s32 func_00505B20(void);

// Dispatch on the state word of the current owner's entry (D_30EAA0, 0x64 bytes
// each): state 1 resets it to 0, state 2 runs func_005014B0 with param and
// state 0 runs func_004CC228. Then run func_004CBFB0 when bit 0 of +8 is set,
// and func_004CD368.
void func_004CBEF8(s32 param) {
    s32 *state = (s32 *)(D_30EAA0 + func_00505B20() * 0x64);
    switch (state[0]) {
    case 1:
        state[0] = 0;
        break;
    case 2:
        func_005014B0(param);
        break;
    case 0:
        func_004CC228();
        break;
    }
    if (state[2] & 1) func_004CBFB0();
    func_004CD368();
}
