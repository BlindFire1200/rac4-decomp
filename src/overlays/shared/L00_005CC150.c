#include "common.h"

typedef struct {
    s32 a[4];
} Q16 __attribute__((aligned(16)));

typedef struct {
    s16 start0;
    s16 len0;
    s16 start1;
    s16 len1;
    s16 start2;
    s16 len2;
    s16 *base;
    u8 pad[0x20];
} Row30;

typedef struct {
    u8 pad[0x10];
    Q16 q;
} Row20;

extern u8 *func_006753F8(void *, void *, s32, Q16 *);
extern u8 *func_L00_00669130(void *, void *, s32, Q16 *);
extern u8 *func_L00_00670020(void *, void *, s32, Q16 *);
extern s32 *D_0021DDA4;
extern u8 *D_00222DD8;
extern u8 *D_00222E30[];
extern Row20 D_00245480[];
extern Row30 D_00245580[];

void func_L00_005CC150(s32 idx) {
    Row30 *row = &D_00245580[idx];
    Row20 *q = &D_00245480[idx];
    u8 *p = (u8 *)row->base;
    u8 *end = p + 0x400;
    s32 i;
    s32 j;
    Q16 *qp = &q->q;
    Q16 tmp = *qp;

    if (p < end) {
        s16 *s;
        row->start0 = 0;
        p = func_006753F8(p, end, idx, qp);
        row->len0 = (p - (u8 *)row->base) >> 1;
        if (*D_0021DDA4 >= 2) {
            for (i = 1; i < *D_0021DDA4; i++) {
                u8 *dst = D_00222E30[i];
                s = row->base + row->start0;
                for (j = 0; j < row->len0; j++) {
                    *(u16 *)(dst + *s * 32 + 0x1A) = *(u16 *)(D_00222DD8 + *s * 32 + 0x1A);
                    s++;
                }
            }
        }
        if (p < end) {
            s32 n;
            row->start1 = (p - (u8 *)row->base) >> 1;
            p = func_L00_00669130(p, end, idx, &q->q);
            n = (p - (u8 *)row->base) >> 1;
            row->len1 = n - row->start1;
            if (p < end) {
                row->start2 = n;
                p = func_L00_00670020(p, end, idx, &q->q);
                row->len2 = ((p - (u8 *)row->base) >> 1) - row->start2;
            }
        }
    }
}
