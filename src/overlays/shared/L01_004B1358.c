#include "common.h"

typedef struct Obj {
    char pad0[0x20];
    u8 f20;
} Obj;

s32 func_L01_004B1358(Obj *arg0) {
    return (u32)(arg0->f20 - 1) >= 2;
}
