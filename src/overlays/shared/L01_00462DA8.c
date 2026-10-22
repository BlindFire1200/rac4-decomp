#include "common.h"

extern void *func_005869E0(s32 arg0, s32 arg1);
extern void func_005A12A8(void *arg0, s32 arg1);

typedef int u128 __attribute__((mode(TI)));

char *D_00221810 = 0;

/* Create the object for arg1, store it in the owner struct, then fill in its default values and flags. */
void func_L01_00462DA8(void *arg0, s32 arg1) {
    char *s0;
    char *v0;

    s0 = *(char **)((char *)arg0 + 0xAC);
    v0 = (char *)func_005869E0(arg1, 0x80);
    *(char **)((char *)s0 + 0x24) = v0;
    if (v0 != NULL) {
        func_005A12A8(v0, 0);
        *(u128 *)((char *)*(char **)((char *)s0 + 0x24) + 0x10) = *(u128 *)D_00221810;
        *(u8 *)((char *)*(char **)((char *)s0 + 0x24) + 0x30) = 0xFF;
        *(u16 *)((char *)*(char **)((char *)s0 + 0x24) + 0x32) = 0xFF;
        *(u16 *)((char *)*(char **)((char *)s0 + 0x24) + 0x34) &= 0xFFFD;
        *(u16 *)((char *)*(char **)((char *)s0 + 0x24) + 0x34) &= 0xFFFE;
        *(char *)((char *)*(char **)((char *)s0 + 0x24) + 0x31) = 1;
    }
}
