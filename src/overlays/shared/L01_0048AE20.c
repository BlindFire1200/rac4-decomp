#include "common.h"

extern s32 D_0021E824;
extern s32 D_0021E828;
extern s32 D_0021DE10;
extern s32 D_0021EBD8;
extern void func_00575F80(s32);
extern s32 func_L00_00702608(s32, s32);

// Pick a mode from the current level number (offset by 20 in one setup) and pass it to func_00575F80.
void func_L01_0048AE20(void) {
    switch ((D_0021E824 == 0 && D_0021E828 == 1) ? D_0021DE10 - 20 : D_0021DE10) {
    case 1:
        switch (func_L00_00702608((D_0021E824 == 0 && D_0021E828 == 1) ? D_0021DE10 - 20 : D_0021DE10, D_0021EBD8)) {
        case 10:
        case 13: case 14: case 15: case 16:
            func_00575F80(1);
            break;
        case 17: case 18: case 19: case 20: case 21: case 24:
            func_00575F80(2);
            break;
        case 22: case 23: case 25: case 26: case 27: case 29:
        case 35: case 37: case 39: case 40:
            func_00575F80(3);
            break;
        default:
            func_00575F80(0);
            break;
        }
        break;
    case 2: case 4: case 5:
        func_00575F80(0);
        break;
    case 6: case 8:
        func_00575F80(1);
        break;
    case 7: case 10:
        func_00575F80(2);
        break;
    case 11: case 13:
        func_00575F80(3);
        break;
    case 14: case 15:
        func_00575F80(4);
        break;
    }
}
