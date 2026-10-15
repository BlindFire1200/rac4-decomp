#include "common.h"

typedef int u128 __attribute__((mode(TI)));
typedef struct { s32 a[3]; } Type1;
typedef struct { void (*f0)(s32); } Type2;

extern s32 D_0021E824;
extern Type1 D_00220768[];

extern Type2 *func_L00_005DEBD0(s32, s32, s32);
extern f32 *func_L00_005EAC30(void *);
extern void *func_L00_005EEF50(u128, u128, f32, f32, f32, void *, s32, s32, s32, f32, f32, s32, s32 *, s32, s32, s32, s32);
extern void *func_L01_0059E658(u128, u128, f32, f32, f32, s32, void *, s32, s32, s32, f32, f32, s32, s32 *, s32);

/* Spawn an effect for an object unless an existing one is still alive; returns it */
void *func_L01_0068E5D8(u8 *obj, u128 *a, u128 *b, s32 c, s32 d, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4) {
    u8 *p;
    f32 *t;
    Type1 buf;
    u128 out;
    s32 n;
    Type2 *h;

    p = *(u8 **)(obj + 0x5F0);
    if (p != 0 && p[0x20] != 0xFE && p[0x20] != 0xFD) {
        t = func_L00_005EAC30(p);
        if (t != 0 && *t > 0.0f) {
            return *(void **)(obj + 0x5F0);
        }
    }
    buf = D_00220768[0];
    n = 0;
    if (*(s32 *)(obj + 0x2318) != 0xD) {
        if (D_0021E824 == 1) {
            buf.a[0] = 0x253A;
        } else {
            buf.a[0] = 0x2077;
        }
        n = 1;
    }
    if (*(u8 **)(obj + 0x2EF4) == 0 || *(s16 *)(*(u8 **)(*(u8 **)(obj + 0x2EF4) + 0x2B0) + 0xBC) != 0x2054) {
        buf.a[n] = 0x209A;
    }
    if (D_0021E824 == 0) {
        h = func_L00_005DEBD0(0x260A, 0, 4);
        if (h != 0) {
            h->f0(0);
        }
        *(void **)(obj + 0x2E94) = func_L00_005EEF50(*a, *b, f0, f1, f2, &out, 0, 0, d, f3, f4, c, buf.a, 1, *(s16 *)(obj + 0x2F8), 0, 0);
        if (h != 0) {
            h->f0(1);
        }
    } else {
        *(void **)(obj + 0x2E94) = func_L01_0059E658(*a, *b, f0, f1, f2, *(s32 *)(obj + 0x2F14), &out, 0, 0, d, f3, f4, c, buf.a, 1);
    }
    return *(void **)(obj + 0x2E94);
}
