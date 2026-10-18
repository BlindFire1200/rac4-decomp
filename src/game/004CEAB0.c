#include "common.h"

extern s32 D_221960;
extern u8 D_30F820[];
extern void func_00499CE0(s32);
extern void func_0049B0D8(s32);
extern void func_0049C4B0(s32, s32, s32, s32);
extern void func_004CF1E0(void);
extern s32 func_00505B20(void);

void func_004CEAB0(void) {
    s32 index = func_00505B20();
    s32 *state = (s32 *)(D_30F820 + index * 0x103C);
    state[2] = 0;
    func_0049C4B0(index, 0, D_221960, 0);
    func_004CF1E0();
    if (state[3] != 0) {
        func_00499CE0(state[3]);
        state[3] = 0;
    }
    if (state[4] != 0) {
        func_00499CE0(state[4]);
        state[4] = 0;
    }
    if (state[5] != 0) {
        func_00499CE0(state[5]);
        state[5] = 0;
    }
    func_0049B0D8(index);
}
