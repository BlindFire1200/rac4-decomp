#include "common.h"

extern s32 D_221B78;
extern s32 D_321B98[];
extern void func_00499CE0(s32);
extern void func_0049B0D8(s32);
extern void func_0049C4B0(s32, s32, s32, s32);
extern void func_004DB130(void);

void func_004DA140(void) {
    func_0049C4B0(0, 0, D_221B78, 0);
    func_004DB130();
    if (D_321B98[0x138C / 4] != 0) {
        func_00499CE0(D_321B98[0x138C / 4]);
        D_321B98[0x138C / 4] = 0;
    }
    if (D_321B98[0x1390 / 4] != 0) {
        func_00499CE0(D_321B98[0x1390 / 4]);
        D_321B98[0x1390 / 4] = 0;
    }
    if (D_321B98[0x1394 / 4] != 0) {
        func_00499CE0(D_321B98[0x1394 / 4]);
        D_321B98[0x1394 / 4] = 0;
    }
    if (D_321B98[0x139C / 4] != 0) {
        func_00499CE0(D_321B98[0x139C / 4]);
        D_321B98[0x139C / 4] = 0;
    }
    func_0049B0D8(0);
}
