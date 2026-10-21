#include "common.h"

typedef struct ObjA {
    char pad0[0x468];
    s32 f468;
} ObjA;

typedef struct ObjB {
    char pad0[0x7E];
    volatile s16 f7E;
} ObjB;

void func_L01_00525058(void *arg0, ObjA *arg1, ObjB *arg2) {
    arg1->f468 = 2;
    arg2->f7E = 1;
}
