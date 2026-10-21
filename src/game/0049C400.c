#include "common.h"

extern s32 D_2219F8;
extern void func_00505AD8(s32);
extern s32 func_00505B20(void);
extern void func_00505F98(s32, s32, s32);
extern void func_00506060(s32, s32);

// Under a temporarily switched owner (slot, or 4 when mode is nonzero) compute
// two packed ids from slot and offset, pass them to func_00506060, run
// func_00505F98 with param_a, the second id and param_b, then restore the
// owner.
void func_0049C400(s32 slot, s32 offset, s32 param_a, s32 param_b, s32 mode) {
    s32 slot_bits;
    s32 second_id;
    s32 offset_bits;
    s32 first_id;
    s32 saved_owner;
    saved_owner = func_00505B20();
    func_00505AD8((mode == 0) ? slot : 4);
    offset_bits = (offset << 3) + 0x100001;
    slot_bits = slot << 6;
    first_id = slot_bits + 0x100001;
    second_id = slot_bits + offset_bits + 1;
    func_00506060(first_id, second_id);
    func_00505F98(param_a, second_id, param_b);
    func_00505AD8(saved_owner);
}
