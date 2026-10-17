#include "common.h"

extern unsigned char *D_00222D34;

// Raise the +0x99 flag of the linked +0xAC block of every list item of type
// 0x2682 (list from D_00222D34, next at +0x28).
void func_L01_00498FC8(void) {
    unsigned char *item = D_00222D34;
    if (item != 0) {
        do {
            if (*(short *)(item + 0xBC) == 0x2682) {
                (*(unsigned char **)(item + 0xAC))[0x99] = 1;
            }
            item = *(unsigned char **)(item + 0x28);
        } while (item != 0);
    }
}
