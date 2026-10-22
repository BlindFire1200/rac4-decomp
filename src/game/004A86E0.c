#include "common.h"

extern s32 *func_004A8C68(s32);
extern s32 func_00505B20(void);

extern s32 D_00308108[];
extern s32 D_003D1738[];
extern s32 D_003D17A0[];

// Resolve the current character's slot value: look up the entry table by index,
// fall back to func_004A8C68 for kinds 4 and 2, otherwise read the value out of
// the 3D1738 / 3D17A0 tables.
s32 func_004A86E0(void) {
    s32 index = func_00505B20();
    s32 *entry = (s32 *)((u8 *)D_00308108 + index * 0xB8);
    s32 kind = entry[0x20];
    if (kind == 4 || entry[0] == 2) {
        return *func_004A8C68(index);
    }
    return *(s32 *)((u8 *)D_003D17A0 + (*(s32 *)((u8 *)D_003D1738 + kind * 4) * 4) + (entry[0x23] << 5));
}
