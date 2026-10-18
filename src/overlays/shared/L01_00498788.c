#include "common.h"

s32 func_L01_00497A98(void *);
s32 func_L01_00497EC0(void *);
s32 func_L01_00498550(void *);
s32 func_L01_004985A0(void *);
s32 func_L01_00498698(void *);
// Run each enabled check of the owner at +0xAC; 1 only if all pass and state +0x20 is 1.
s32 func_L01_00498788(unsigned char *arg0) {
    unsigned char *owner;
    if (arg0[0x20] != 1) {
        return 0;
    }
    owner = *(unsigned char **)(arg0 + 0xAC);
    if (*(s32 *)(owner + 0x10) != 0 && func_L01_00497A98(arg0) == 0) {
        return 0;
    }
    if (*(s32 *)(owner + 0x30) != 0 && func_L01_00497EC0(arg0) == 0) {
        return 0;
    }
    if (*(s32 *)(owner + 0x50) != 0 && func_L01_00498550(arg0) == 0) {
        return 0;
    }
    if (*(s32 *)(owner + 0x60) != 0 && func_L01_004985A0(arg0) == 0) {
        return 0;
    }
    if (*(s32 *)(owner + 0x70) != 0 && func_L01_00498698(arg0) == 0) {
        return 0;
    }
    return 1;
}
