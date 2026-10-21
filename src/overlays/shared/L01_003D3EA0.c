#include "common.h"

typedef struct Obj {
    char pad0[0x20];
    u8 f20;
} Obj;

s32 func_L01_003D3EA0(Obj *arg0) {
    return arg0->f20 == 1;
}
