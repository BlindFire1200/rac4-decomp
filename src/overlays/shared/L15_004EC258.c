#include "common.h"

typedef struct Obj Obj;

extern void func_00560F28(Obj *o, u8 state, s32 type);

s32 D_00222170 = 0;

// Stores the object pointer in the global slot and asks the helper to switch its state.
void func_L15_004EC258(Obj *o) {
    D_00222170 = (s32)o;
    func_00560F28(o, 1, -1);
}
