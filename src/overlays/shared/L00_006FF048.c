#include "common.h"

typedef struct {
    u8 pad[0xB0];
} __attribute__((aligned(16))) Type1;

typedef struct {
    s16 a[20];
    f32 b[20];
    f32 c[20];
    f32 d[20];
    f32 e[20];
    u8 pad[0x14];
    s32 id;
} Type2;

extern Type2 D_1738A0;

s32 func_L00_006FEDE8(void);
void func_L00_006FEF10(s32, void *, s32);
void func_L00_006FEFA0(s32, void *, f32);
Type1 *func_L00_00700690(s32, s32);
u8 *func_L00_007006D0(s32, s32);

void func_L00_006FF048(void) {
    Type1 buf;
    u8 *p;
    s32 i;
    f32 *b;

    if (func_L00_006FEDE8() == D_1738A0.id) {
        b = D_1738A0.b;
        for (i = 0; i < 20; i++) {
            buf = *func_L00_00700690(i, 0);
            p = func_L00_007006D0(i, 0);
            if (D_1738A0.a[i] > 0) {
                func_L00_006FEF10(i, buf.pad + 0x42, D_1738A0.a[i]);
            }
            if (b[i] > 0.0f) {
                func_L00_006FEFA0(i, buf.pad + 0x48, b[i]);
            }
            if (D_1738A0.c[i] > 0.0f) {
                func_L00_006FEFA0(i, buf.pad + 0x4C, D_1738A0.c[i]);
            }
            if (D_1738A0.d[i] > 0.0f) {
                func_L00_006FEFA0(i, p + 0x10, D_1738A0.d[i]);
            }
            if (D_1738A0.e[i] > 0.0f) {
                func_L00_006FEFA0(i, p + 0x14, D_1738A0.e[i]);
            }
        }
    }
}
