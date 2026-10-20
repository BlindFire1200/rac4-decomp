#include "common.h"

extern s32 D_0039D230[];
extern s32 D_0039D298[];
extern s32 D_0021DDB8;
s32 D_00221A80 = 0;

extern void func_L01_0047EC30(s32 object);
extern void func_L01_0047EC88(s32 index, s32 value_a, s32 value_b);
extern void func_L01_0047ECC8(s32 index);
extern s32 func_L01_0047ED50(s32 index);

s32 func_L01_0047EE10(s32 arg0) {
    s32 *p;
    s32 id;
    s32 i;
    s32 best;
    s32 bestIdx;

    id = D_00221A80 + 1;
    i = 0;
    p = D_0039D298;
    bestIdx = 0;
    best = D_0021DDB8;
    D_00221A80 = id;
    for (; i < 0x19; i++, p++) {
        if (func_L01_0047ED50(i) != 0) {
            func_L01_0047ECC8(i);
            func_L01_0047EC88(i, arg0, id);
            return id;
        }
        if (*p < best) {
            best = *p;
            bestIdx = i;
        }
    }
    func_L01_0047EC30(D_0039D230[bestIdx]);
    func_L01_0047ECC8(bestIdx);
    func_L01_0047EC88(bestIdx, arg0, id);
    return id;
}
