#include "common.h"

/* Stores arg1 and arg2 in fields of dereferenced pointer from arg0, sets byte to 0xFF. */
void func_004259B0(char *arg0, s32 arg1, s32 arg2) {
    char *temp_v0 = *(char **)(arg0 + 0xAC);
    *(s32 *)(temp_v0 + 0x70) = arg1;
    *(s32 *)(temp_v0 + 0x74) = arg2;
    *(unsigned char *)(arg0 + 0x30) = 0xFF;
}
