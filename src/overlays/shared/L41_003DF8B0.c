#include "common.h"

extern u8 *func_005CD3D0();
extern s32 func_L41_003E06E8(u8 *, u8 *);
extern u8 *D_00222794;

// Check whether an object's owner team (by object type) matches the current player's.
s32 func_L41_003DF8B0(s32 arg0, u8 *obj, u8 *other) {
    s32 result = 0;
    u8 *p;
    s32 team;
    s32 idx;
    s16 type;
    s32 value;

    if (obj == 0) {
        return 0;
    }
    p = func_005CD3D0();
    if (p == 0) {
        return 0;
    }
    team = *(s32 *)(p + 0x2F14);
    type = *(s16 *)(obj + 0xBC);
    if (type != 0x10C3) {
        if (type == 0x2075) {
            idx = func_L41_003E06E8(other, obj);
            if (idx >= 0 && D_00222794 + (idx << 8) != other) {
                p = *(u8 **)(obj + 0xAC);
                value = p[0x2E4];
                result = value == team;
            }
        }
    } else if (obj != other) {
        p = *(u8 **)(obj + 0xAC);
        value = *(s32 *)(p + 0x44);
        result = value == team;
    }
    return result;
}
