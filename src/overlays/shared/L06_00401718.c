#include "common.h"

typedef struct {
    s32 pad[43];
    u8 *state;
} Obj;

extern void func_0053C1C8(Obj *o, u8 state, s32 type);

/* Set the state block's float at +0x08 to 1.0, then request state 4 with type -1. */
void func_L06_00401718(Obj *object) {
    u8 *state = object->state;
    *(f32 *)(state + 0x8) = 1.0f;
    func_0053C1C8(object, 4, -1);
}
