#include "common.h"

typedef struct Obj {
    char pad0[2];
    u8 f2[10];
    s16 fC[1];
} Obj;

/* Clears the byte slot at +2 and the halfword slot at +0xC for a small index. */
void func_L00_006FF458(Obj *arg0, u32 arg1) {
    arg1 &= 0xFF;
    if (arg1 < 10) {
        arg0->f2[arg1] = 0;
        arg0->fC[arg1] = 0;
    }
}
