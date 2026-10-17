#include "common.h"

extern void func_L00_005F15B8(int);
int func_L01_004E77A8(int arg0, unsigned char *object) {
    unsigned char *state = *(unsigned char **)(object + 0x2E0);
    if (*(int *)(state + 0x2B8) != 0 || *(int *)(state + 0x2BC) != 0) {
        func_L00_005F15B8(arg0);
        object[0x97] = 0;
    } else {
        object[0x97] = 1;
    }
    return 1;
}
