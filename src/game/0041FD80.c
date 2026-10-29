#include "common.h"

typedef unsigned int u128 __attribute__((mode(TI)));

extern u128 D_229E10[];

/* Loads a 128-bit value from D_229E10 at an offset calculated from arg0. */
void func_0041FD80(void *arg0, u128 *arg1) {
    s32 index = *(s32 *)(arg0 + 0x94);
    *arg1 = *(u128 *)((u8 *)D_229E10 + index * 0x470);
}
