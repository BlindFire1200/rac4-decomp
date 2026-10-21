#include "common.h"

// Set a state value for selected modes, then notify the state handler.
extern void func_004599E8(s32);
extern s32 D_0021EDC4;
extern s32 D_0021DE10;
extern s32 D_00221324;
void func_0047EF38(void) {
    s32 index;
    if ((u32)(D_0021EDC4 - 3) >= 2U) return;
    index = D_0021DE10 - 0xB;
    if ((u32)index < 0x13U) {
        switch (index) {
        case 0: break; case 1: break; case 2: break; case 3: break;
        case 4: break; case 5: break; case 6: break;
        case 7: D_00221324 = 2; break;
        case 8: break;
        case 9: D_00221324 = 2; break;
        case 10: break; case 11: break; case 12: break;
        case 13: break; case 14: break;
        case 15: D_00221324 = 2; break;
        case 16: break; case 17: break;
        case 18: D_00221324 = 2; break;
        }
    }
    func_004599E8(D_00221324);
}
