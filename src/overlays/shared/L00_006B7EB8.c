#include "common.h"

extern u8 D_0021DE3D;
f32 D_00220560 = 0;
void *func_L00_005E0B30(void *, s32, s32, s32, f32, s32, s32);
void func_L00_005E0C50(void *, void *, s32);

// Update the object's +0x7F0 handle: release it when inactive, create it (slot 0x63) when active.
void func_L00_006B7EB8(u8 *p) {
    s32 idx;
    s32 on;
    u8 *h;
    u8 *o;
    s32 off;

    *(f32 *)(p + 0xADC) = D_00220560;
    if (D_0021DE3D != 0) {
        *(s16 *)(p + 0x418) = 2;
    }
    idx = 0x63;
    on = *(s16 *)(p + 0x418) != 0;
    switch (*(u8 *)(*(u8 **)(p + 0x2EF0) + 0x54)) {
    case 7:
        on = 0;
        break;
    case 0x5B:
        on = 0;
        break;
    case 0x5C:
        on = 0;
        break;
    }
    h = *(u8 **)(p + 0x7F0);
    if ((!on && h != 0) || (h != 0 && *(u8 *)(h + 0x16) == 0)) {
        func_L00_005E0C50(*(void **)(p + 0x2EF0), *(void **)(p + 0x7F0), 0x1E);
        *(void **)(p + 0x7F0) = 0;
    }
    if (on && *(void **)(p + 0x7F0) == 0) {
        o = *(u8 **)(p + 0x2EF0);
        off = idx * 4;
        h = func_L00_005E0B30(o, *(s32 *)(*(u8 **)(o + 0x24) + off + 0x48), 0x63, 0xA, 0.0f, 0x11, 0xFF);
        *(u8 **)(p + 0x7F0) = h;
        *(s32 *)(p + 0x810) = idx;
    }
}
