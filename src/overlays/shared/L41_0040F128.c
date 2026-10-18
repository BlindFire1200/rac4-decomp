#include "common.h"

s32 func_00540040();
s32 func_005400C0();
void func_L41_0040DCA0();
s32 func_L41_0040E4E8();
s32 func_L41_0040E518();
void func_L41_0040EF58();
s32 D_002212C8[2] = {0};

// Returns the first of four slots that is free, usable and masked in, after activating it; -1 otherwise.
s32 func_L41_0040F128(u8 *arg0) {
    s32 *p;
    s32 i;
    u8 *obj;

    if (arg0[0x266D] != 0 && (func_00540040(arg0[0x2FEA]) & 0x10)) {
        return -1;
    }
    if (func_005400C0(arg0[0x2FEA]) != 2) {
        p = D_002212C8;
        for (i = 0; i < 4; i++, p++) {
            if (func_L41_0040E4E8(arg0[0x2FEA], i) == 0 && func_L41_0040E518(arg0[0x2FEA], i) != 0) {
                obj = *(u8 **)(arg0 + 0x2F00);
                if (~*(s32 *)(obj + 0x1BC) & *(s32 *)(obj + 0x1B0) & *p) {
                    func_L41_0040EF58(arg0[0x2FEA], i);
                    func_L41_0040DCA0(arg0[0x2FEA], 0);
                    return i;
                }
            }
        }
    }
    return -1;
}
