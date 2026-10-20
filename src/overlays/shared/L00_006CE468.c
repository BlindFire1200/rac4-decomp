#include "common.h"

typedef struct Obj {
    char pad0[0x2318];
    s32 f2318;
    char pad231C[0x3C8];
    s32 f26E4;
} Obj;

extern void func_L00_006FF798(s32, s32);

/* Hands two fields of the object to func_L00_006FF798. */
void func_L00_006CE468(Obj *o) {
    func_L00_006FF798(o->f26E4, o->f2318);
}
