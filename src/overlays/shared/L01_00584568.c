#include "common.h"

extern s32 D_0021DE10;
extern s32 D_0021DF64;
s32 D_0021EBD8 = 0;
extern u8 D_1F87F0[];
extern void func_L00_005DC988(void);
extern void func_L01_00585828(void);
extern void func_L00_005DB7C0(void);
extern void func_L00_005DA5D8(s32, s32);

void func_L01_00584568(void) {
    u8 *p;
    s32 n;

    func_L00_005DC988();
    func_L01_00585828();
    p = &D_1F87F0[D_0021EBD8 * 0xC + ((D_0021DE10 - 1) % 20) * 0x304];
    if (p[9] < 0xFF) {
        p[9] = p[9] + 1;
    }
    p = &D_1F87F0[D_0021EBD8 * 0xC + ((D_0021DE10 - 1) % 20) * 0x304];
    n = D_0021DF64 + 1;
    if (p[0xA] < n) {
        p[0xA] = n;
    }
    func_L00_005DB7C0();
    func_L00_005DA5D8(0, -1);
}
