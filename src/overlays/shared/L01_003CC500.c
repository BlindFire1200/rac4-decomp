#include "common.h"

typedef struct Obj {
    char pad0[0x34];
    u16 f34;
} Obj;

void func_L01_003CC500(Obj *arg0) {
    arg0->f34 |= 2;
}
