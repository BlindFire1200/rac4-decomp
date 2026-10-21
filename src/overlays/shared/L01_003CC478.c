/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Obj {
    char pad0[0x20];
    u8 f20;
} Obj;

extern Obj *D_0021EBD0[];
#define D_0021EBD0 (D_0021EBD0[0])

s32 func_L01_003CC478(void) {
    return D_0021EBD0->f20 == 0x10;
}
