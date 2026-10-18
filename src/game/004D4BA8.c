#include "common.h"

extern s32 D_2219F8;
extern s32 D_31B9B8[];
extern void func_00499CE0(s32);
extern void func_0049B0D8(s32);
extern void func_0049C4B0(s32, s32, s32, s32);
extern void func_004D5B90(void);

void func_004D4BA8(void) {
    func_0049C4B0(0, 0, D_2219F8, 0);
    func_004D5B90();
    if (D_31B9B8[0x138C / 4] != 0) {
        func_00499CE0(D_31B9B8[0x138C / 4]);
        D_31B9B8[0x138C / 4] = 0;
    }
    if (D_31B9B8[0x1390 / 4] != 0) {
        func_00499CE0(D_31B9B8[0x1390 / 4]);
        D_31B9B8[0x1390 / 4] = 0;
    }
    if (D_31B9B8[0x1394 / 4] != 0) {
        func_00499CE0(D_31B9B8[0x1394 / 4]);
        D_31B9B8[0x1394 / 4] = 0;
    }
    if (D_31B9B8[0x139C / 4] != 0) {
        func_00499CE0(D_31B9B8[0x139C / 4]);
        D_31B9B8[0x139C / 4] = 0;
    }
    func_0049B0D8(0);
}
