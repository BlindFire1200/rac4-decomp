#include "common.h"

extern void func_00158A30(s32 code, s32 len, s32 *args);

/* Packs the seven incoming arguments into a table and hands it to the shared dispatcher. */
void func_00159870(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 args[7];

    args[0] = a0;
    args[1] = a1;
    args[2] = a2;
    args[3] = a3;
    args[4] = a4;
    args[5] = a5;
    args[6] = a6;

    func_00158A30(0x4C, 0x1C, args);
}
