#include "common.h"

extern void func_00158A30(s32, s32, s32 *);

/* Packs the four incoming arguments into an array and hands them to the dispatcher with a fixed type code. */
void func_00159948(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 args[4];
    args[0] = arg0;
    args[1] = arg1;
    args[2] = arg2;
    args[3] = arg3;
    func_00158A30(0x68, arg2 + 0xC, args);
}
