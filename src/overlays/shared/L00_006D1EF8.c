#include "common.h"

typedef struct {
    u8 pad0[0x10];
    s16 f10;
    u8 pad12[0x1E];
    s32 f30;
} Type1;

extern void func_L00_00573220();
extern void func_L00_005C97D8();
extern void func_L00_0061E560();
extern void func_L00_0066D468();
extern void func_L00_006D1C68();
extern void func_L00_006D1D98();
extern void func_L00_006D1E38();
extern s32 D_0021E6B4;
extern s32 D_0021E6B8;
extern s32 D_0021DDB8;
extern s32 D_00343E7C[];
extern Type1 D_171B40[];

// Refresh the player's displayed counter from the shared state, reacting when it rises.
void func_L00_006D1EF8(u8 *player) {
    s32 value;

    if (D_0021E6B4 == 1) return;
    if ((D_0021DDB8 & 0xF) == 1 && D_0021DDB8 != 1) return;
    if (*(f32 *)(player + 0x2F24) != (f32)D_171B40->f10) {
        *(f32 *)(player + 0x2F24) = (f32)D_171B40->f10;
    }
    value = 10;
    func_L00_006D1D98(player);
    func_L00_006D1C68(player, player + 0x2FA4, player + 0x2FAC, &value);
    if (D_171B40->f10 != value) {
        if (D_0021DDB8 >= 11 && D_171B40->f10 < value) {
            func_L00_005C97D8(0x2F8E, 0x664, 2);
            func_L00_00573220(player);
            if (D_0021E6B4 == 0 && D_0021E6B8 == 1) {
                func_L00_00573220(D_00343E7C[0]);
            }
            func_L00_0061E560(0, 0x25AE);
            func_L00_0066D468(6, 0, 0);
        }

        D_171B40->f10 = value;
        *(f32 *)(player + 0x2F24) = (s16)value;
    }
    if (D_171B40->f30 == 0) {
        func_L00_006D1E38(player);
    }
}
