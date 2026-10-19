#include "common.h"

extern u8 *D_00222D14;
extern u8 *D_00222D30;

// Count the entries of the list D_00222D14..D_00222D30 (0x100 bytes each) whose
// type is 0x2075, whose linked +0xAC object has a zero 64-bit mask at +0x2D8
// (in the 0xFF00 fields) and whose +0x2E4 byte is 0xA.
s32 func_L01_004CF730(void) {
    s32 count = 0;
    u8 *entry = D_00222D14;
    while (entry != D_00222D30) {
        if (*(s16 *)(entry + 0xBC) == 0x2075) {
            u8 *linked = *(u8 **)(entry + 0xAC);
            if ((*(u64 *)(linked + 0x2D8) & (((u64)0xFF00 << 16) | 0xFF00) << 32) == 0 && linked[0x2E4] == 0xA) {
                count++;
            }
        }
        entry += 0x100;
    }
    return count;
}
