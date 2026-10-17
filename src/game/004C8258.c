#include "common.h"

void func_00497980(s32);
extern u8 D_0021F8E8;
extern u8 D_0021F939;
extern u8 D_30B9D8[];

// Set the first word of the 0xB30-byte entry at D_30B9D8 for index to 2 and,
// when D_0021F8E8 is clear, run func_00497980 with 8 (D_0021F939 set) or 6.
void func_004C8258(s32 index) {
    *(s32 *)(D_30B9D8 + index * 0xB30) = 2;
    if (D_0021F8E8 == 0) {
        if (D_0021F939 != 0) {
            func_00497980(8);
            return;
        }
        func_00497980(6);
    }
}
