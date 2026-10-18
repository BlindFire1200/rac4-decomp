#include "common.h"

extern void *func_00595D00(void *);
extern void *func_00595D70(void *);
extern void func_L00_005E7538(void *, s32, f32);
extern void *func_L00_005EAC30(void *);
extern void func_L00_005F1498(void *);
extern void func_L01_00568C08(void *);
extern void func_L01_005A4680(void *);
extern void func_L01_005AF340(void *);

void func_L01_005A8A28(u8 *obj);

/* Reset an object's linked state and flags, recursing into its child. */
void func_L01_005A8A28(u8 *obj) {
    u8 *a;
    u8 *b;
    u8 *c;
    s16 *p;
    s32 i;
    f32 f;

    a = func_00595D00(obj);
    if (a != 0) {
        func_L01_005AF340(obj);
        if (*(u8 **)(a + 0x5C) != 0) {
            func_L01_005A8A28(*(u8 **)(a + 0x5C));
        }
        f = *(f32 *)(obj + 0xF8);
        *(f32 *)(a + 0xD4) = f;
        *(f32 *)(a + 0xD0) = f;
        *(s32 *)(a + 0x4) |= 0x800;
    }
    func_L01_005A4680(obj);
    b = func_L00_005EAC30(obj);
    if (b != 0) {
        *(s32 *)(b + 0x80) = 0;
        *(s32 *)(b + 0x84) = 0;
        *(s32 *)(b + 0x88) = 0;
        if (*(u8 *)(b + 0x3C) != 3) {
            *(u8 *)(b + 0x3C) = 1;
        }
        *(u8 *)(b + 0x47) = 0;
    }
    c = func_00595D70(obj);
    if (c != 0) {
        *(s32 *)(c + 0x8) = 0;
        *(s16 *)(c + 0x5C) = 0;
        p = (s16 *)(c + 0x60);
        for (i = 8; i >= 0; i--) {
            p[i] = 0;
        }
    }
    func_L00_005F1498(obj);
    *(u16 *)(obj + 0x34) = (*(u16 *)(obj + 0x34) & 0xFFBA) | 0x5000;
    *(s32 *)(obj + 0x98) = *(s32 *)(*(u8 **)(obj + 0x24) + 0x10);
    *(u8 *)(obj + 0x23) = 0x80;
    func_L00_005E7538(obj, 0, 0.0f);
    func_L01_00568C08(obj);
}
