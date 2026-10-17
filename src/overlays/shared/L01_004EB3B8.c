#include "common.h"

extern void func_004E7A58(void *, int);
extern void func_L01_004E7A20(void *, int);
void func_L01_004EB3B8(unsigned char *object) {
    *(int *)(object + 0x98) = 0;
    *(unsigned short *)(object + 0x34) |= 0x41;
    if (*(*(unsigned char **)(object + 0xAC) + 0x2F0) != 0) {
        func_L01_004E7A20(object, 0);
    } else {
        func_004E7A58(object, 0);
    }
}
