#include "common.h"

extern s32 func_L41_004114B8(void *);
extern s32 func_L41_00411570(void *);
extern void func_L41_004115A8(void *, s32, s32);
extern void func_L41_00412DB8(void *);

// Updates the owner's state block timer after a validity check.
void func_L41_00411660(void *arg0, s32 arg1, s32 arg2) {
    char *s;

    if (arg0 == 0) {
        return;
    }
    if (*(u8 *)((char *)arg0 + 0x20) == 0xFE) {
        return;
    }
    if (*(u8 *)((char *)arg0 + 0x20) == 0xFD) {
        return;
    }
    s = *(char **)((char *)arg0 + 0xAC);
    if (*(u8 *)((char *)arg0 + 0x20) == 0xFE) {
        return;
    }
    if (*(u8 *)((char *)arg0 + 0x20) == 0xFD) {
        return;
    }
    if (func_L41_00411570(arg0) == 0) {
        return;
    }
    *(s32 *)(s + 0xF4) = 1;
    if (func_L41_004114B8(arg0) != 0) {
        func_L41_00412DB8(arg0);
    }
    if (*(u8 *)((char *)arg0 + 0x20) != 0) {
        *(s32 *)(s + 0xE0) = 0x7530;
        func_L41_004115A8(arg0, arg1, arg2);
    } else {
        *(s32 *)(s + 0xE0) = 0x1E;
    }
}
