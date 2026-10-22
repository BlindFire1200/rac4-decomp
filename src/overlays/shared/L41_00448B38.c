#include "common.h"


extern void func_00502250(void *o, u8 state, s32 type);

typedef struct {
    u8 f00[0x20];
    u8 f20;
    u8 f21[0x8B];
    u32 fAC;
} L41Obj;

/* Retargets the object to state 3 (type -1) unless it has no target or is idle / in state 3 or 4. */
void func_L41_00448B38(L41Obj *arg0) {
    if (arg0->fAC != 0) {
        u8 temp_v1 = arg0->f20;
        if (temp_v1 != 0 && temp_v1 != 3 && temp_v1 != 4) {
            func_00502250(arg0, 3, -1);
        }
    }
}
