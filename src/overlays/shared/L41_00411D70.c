#include "common.h"

extern void func_L00_005E77D0(void *, s32, s32);
extern void func_L00_0066CCE8(void *, s32);
extern s32 func_L00_006A91D0(s32);
extern void func_L00_006EC390(s32 *, void *, s32);
extern s32 func_L41_00411448(void *);
extern s32 func_L41_004114A8(void *);
extern s32 func_L41_004114B8(void *);
extern s32 func_L41_004114C8(void *);
extern void func_L41_004114D8(void *);
extern void func_L41_004115A8(void *, s32, s32);
extern void func_L41_00412DB8(void *);
extern void func_L41_00413000(void *, s32);
extern void func_L41_00413148(void *, s32, s32);
extern void func_L41_0058F9B8(s32, s32, void *, s32);
extern s32 D_00172378_[];
#define D_00172378 (D_00172378_[0])

// Handle a state message (type in the low nibble of *msg) for the object.
void func_L41_00411D70(u8 *obj, s32 *msg) {
    u8 b;
    s32 w;
    u8 *s2;
    u32 type;
    s32 r;

    type = *msg & 0xF;
    s2 = *(u8 **)(obj + 0xAC);
    switch (type) {
    case 0:
        if ((u32)(obj[0x20] - 1) < 2) {
            u16 v;
            *(s32 *)(s2 + 0x50) = 0;
            v = *(u16 *)(obj + 0x34) & 0xEFFF;
            *(u16 *)(obj + 0x34) = v;
            if (obj[0x20] == 1) {
                func_L41_00413148(obj, 0, 0);
            } else {
                *(s32 *)(obj + 0x98) = 0;
                *(u16 *)(obj + 0x34) = v | 0x41;
                func_L00_0066CCE8(obj, 1);
                func_L00_005E77D0(obj, 4, -1);
            }
            if (func_L41_004114A8(obj) != 0) {
                func_L00_006EC390(msg, &b, 1);
                *(s32 *)(s2 + 0xF0) = b;
            }
            if (func_L41_00411448(obj) != 0 || func_L41_004114C8(obj) != 0 || func_L41_004114A8(obj) != 0) {
                func_L41_00412DB8(obj);
            }
        }
        break;
    case 1:
        func_L00_006EC390(msg, &w, 4);
        r = func_L00_006A91D0(w);
        if ((u32)(obj[0x20] - 4) < 2) {
            func_L41_00413000(obj, r);
        }
        *(s32 *)(obj + 0x98) = 0;
        *(u16 *)(obj + 0x34) = (*(u16 *)(obj + 0x34) | 0x41) & 0xEFFF;
        func_L00_0066CCE8(obj, 1);
        func_L41_004114D8(obj);
        *(s32 *)(s2 + 0xE4) = D_00172378;
        func_L00_005E77D0(obj, 6, -1);
        break;
    case 2:
        func_L41_004115A8(obj, -1, 0);
        func_L41_0058F9B8(0x15, 0, obj, 0);
        if (func_L41_004114B8(obj) != 0) {
            func_L41_00412DB8(obj);
        }
        break;
    }
}
