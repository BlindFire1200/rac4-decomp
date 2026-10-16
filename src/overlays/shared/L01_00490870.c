#include "common.h"

extern int func_L00_005BC980(void *, void *);
void func_L01_00490870(void *arg0) {
    unsigned char *state = *(unsigned char **)((char *)arg0 + 0xAC);
    int value;
    if (*(int *)(state + 0x6C) >= 0 && (*(unsigned char *)((char *)arg0 + 0xBE) & 4) != 0) {
        *(int *)(state + 0x80) += 1;
        *(unsigned char *)((char *)arg0 + 0xBE) &= 0xFB;
    }
    value = *(int *)(state + 0x70);
    if (value >= 0) func_L00_005BC980(state + 0x84, arg0);
}
