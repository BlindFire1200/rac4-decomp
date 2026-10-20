#include "common.h"

typedef int u128 __attribute__((mode(TI)));

typedef struct {
    u8 f00[0xA0];
    u128 fA0;
    u8 fB0[0x2640];
    u128 f26F0;
    u8 f2700[0x57C];
    s32 f2C7C;
    s32 f2C78;
} Type1;

/* Copies a 128-bit field to another spot and sets two flags to 1. */
void func_L00_006D1BA0(Type1 *arg0) {
    arg0->f2C7C = 1;
    arg0->f26F0 = arg0->fA0;
    arg0->f2C78 = 1;
}
