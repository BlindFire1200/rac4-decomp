#include "common.h"

extern void func_L00_005F15B8(int);

// When either the +0x2B8 or +0x2BC word of the +0x2E0 block is set, run
// func_L00_005F15B8 and clear the +0x97 byte, otherwise set it. Always returns
// 1.
int func_L01_004E77A8(int param, unsigned char *object) {
    unsigned char *state = *(unsigned char **)(object + 0x2E0);
    if (*(int *)(state + 0x2B8) != 0 || *(int *)(state + 0x2BC) != 0) {
        func_L00_005F15B8(param);
        object[0x97] = 0;
    } else {
        object[0x97] = 1;
    }
    return 1;
}
