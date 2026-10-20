#include "common.h"

extern s32 D_0021E824;
extern s32 D_0021E828;
extern s32 D_0021DE10;
extern s32 D_0021EBD8;
extern s32 D_00223D78;
extern void func_00575EA0(s32);
extern s32 func_L00_00702608(s32, s32);

void func_L01_004FB2A8(void) {
    switch ((D_0021E824 == 0 && D_0021E828 == 1) ? D_0021DE10 - 20 : D_0021DE10) {
    case 1:
        switch (func_L00_00702608((D_0021E824 == 0 && D_0021E828 == 1) ? D_0021DE10 - 20 : D_0021DE10, D_0021EBD8)) {
        case 10:
        case 13: case 14: case 15: case 16:
            func_00575EA0(1);
            D_00223D78 = 4;
            break;
        case 17: case 18: case 19: case 20: case 21: case 24:
            func_00575EA0(2);
            D_00223D78 = 2;
            break;
        case 22: case 23: case 25: case 26: case 39:
            func_00575EA0(4);
            D_00223D78 = 5;
            break;
        case 27: case 29: case 35: case 37: case 40:
            func_00575EA0(4);
            D_00223D78 = 5;
            break;
        default:
            func_00575EA0(0);
            D_00223D78 = 1;
            break;
        }
        break;
    case 6: case 8:
        func_00575EA0(1);
        D_00223D78 = 4;
        break;
    case 7: case 10:
        func_00575EA0(2);
        D_00223D78 = 2;
        break;
    case 11: case 13:
        func_00575EA0(3);
        D_00223D78 = 3;
        break;
    case 14: case 15:
        func_00575EA0(4);
        D_00223D78 = 5;
        break;
    default:
        func_00575EA0(0);
        D_00223D78 = 1;
        break;
    }
}
