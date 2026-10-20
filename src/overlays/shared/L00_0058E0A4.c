#include "common.h"

typedef struct Obj {
    char pad0[0xD4];
    volatile f32 fD4;
} Obj;

// stores the float argument into the third argument's field at offset 0xD4
void func_L00_0058E0A4(void *arg0, void *arg1, Obj *arg2, f32 fparg0) {
    arg2->fD4 = fparg0;
}
