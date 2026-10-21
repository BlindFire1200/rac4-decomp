#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern void func_L00_006EC390(s32 *, void *, s32);
extern void func_L41_003E00A0();
extern void func_L41_005F2EE0(void *, void *, void *, s32, f32);
typedef struct { u8 pad0[0x70]; s32 f70[10]; s32 f98[10]; } Type1;
extern u8 *D_00222794;
extern u8 *D_00344C38[];

// Read a network message and update an object's per-slot timers.
void func_L41_003DF608(void *arg0, s32 *arg1) {
    s32 index;
    u128 data;
    f32 value;
    s32 flag;
    s32 slot;
    s32 other;
    Type1 *state;
    u32 kind;

    kind = *arg1 & 0xF;
    state = *(Type1 **)((u8 *)arg0 + 0xAC);
    if (kind < 10) {
        func_L00_006EC390(arg1, &index, 4);
        func_L00_006EC390(arg1, &data, 0x10);
        func_L00_006EC390(arg1, &value, 4);
        func_L00_006EC390(arg1, &flag, 4);
        func_L00_006EC390(arg1, &slot, 4);
        if (D_00344C38[index] != 0) {
            func_L41_005F2EE0(D_00344C38[index], &data, D_00222794 + (slot << 8), 0x3E, value);
            D_00344C38[index][0x266E] = flag;
            state->f70[index] = 0x3C;
            state->f98[index] = slot;
            func_L41_003E00A0(arg0, D_00344C38[index]);
        }
    } else if (kind == 10) {
        func_L00_006EC390(arg1, &other, 4);
        state->f70[other] = -0x3C;
    }
}
