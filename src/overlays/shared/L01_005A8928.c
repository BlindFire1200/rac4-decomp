#include "common.h"

extern void *func_00595D00(void *);
extern void *func_00595D70(void *);
extern void *func_L00_005EAC30(void *);
extern void *func_L00_005EB4F0(void *);
extern void func_L00_005EB6C0(void *, s32);
extern void func_L00_005F1498(void *);
extern void func_L00_0066CCE8(void *, s32);
extern void func_L01_00568DB8(void *);
extern void func_L01_005A4648(void *);

void func_L01_005A8928(u8 *obj);

/* Reset an object's state, recursing into its linked child first. */
void func_L01_005A8928(u8 *obj) {
    u8 *p;
    u8 *r;
    u8 *t;
    u8 *q;
    s16 *h;
    s32 i;

    obj[0xBF] = 0;
    func_L00_005EB6C0(obj, 0);
    p = func_00595D00(obj);
    if (p != 0 && *(void **)(p + 0x5C) != 0) {
        func_L01_005A8928(*(u8 **)(p + 0x5C));
    }
    func_L01_005A4648(obj);
    r = func_L00_005EAC30(obj);
    if (r != 0) {
        r[0x47] = 1;
        *(f32 *)r = (f32)*(s32 *)(r + 4);
    }
    func_L00_005F1498(obj);
    t = func_00595D70(obj);
    if (t != 0) {
        *(s32 *)t = 0;
        *(s32 *)(t + 0x28) = 0;
        *(s16 *)(t + 0x5C) = 0;
        for (i = 8; i >= 0; i--) {
            ((s16 *)(t + 0x60))[i] = 0;
        }
    }
    q = func_L00_005EB4F0(obj);
    if (q != 0) {
        *(s32 *)(q + 4) = 0;
    }
    *(s32 *)(obj + 0x98) = 0;
    obj[0x2C] = 0xFF;
    *(u16 *)(obj + 0x34) = (*(u16 *)(obj + 0x34) | 0x45) & 0xAFFF;
    func_L00_0066CCE8(obj, 1);
    func_L01_00568DB8(obj);
}
