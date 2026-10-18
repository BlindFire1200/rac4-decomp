#include "common.h"

extern u8 *D_00222D14;
extern u8 *D_00222D30;
void func_L01_004CF658(u8 *entry, s32 arg);

// Run func_L01_004CF658 on every 0x100-byte entry of D_00222D14..D_00222D30 of type 0x2075.
void func_L01_004CF5E0(u8 arg0) {
    u8 *entry = D_00222D14;
    while (entry != D_00222D30) {
        if (*(s16 *)(entry + 0xBC) == 0x2075) {
            func_L01_004CF658(entry, arg0);
        }
        entry += 0x100;
    }
}
