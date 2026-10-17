#include "common.h"
void func_00497980(s32);
extern u8 D_0021F8E8;
extern u8 D_0021F939;
extern u8 D_30B9D8[];
void func_004C8258(s32 arg0) {
    *(s32 *)(D_30B9D8 + arg0 * 0xB30) = 2;
    if (D_0021F8E8 == 0) {
        if (D_0021F939 != 0) {
            func_00497980(8);
            return;
        }
        func_00497980(6);
    }
}
