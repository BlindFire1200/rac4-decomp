/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Obj {
    char pad0[0x22F8];
    u8 f22F8;
} Obj;

void func_L00_006EE734(s32 unused, Obj *p) {
    p->f22F8 = 0;
}
