#include "common.h"

typedef struct {
    u8 f00;
    u8 f01;
    u8 f02[0x8];
    u16 f0A;
    u16 f0C;
    u8 f0E;
    u8 f0F;
} Type1;

typedef struct {
    Type1 f00[8];
} Type2;

extern Type2 D_004C3410[];

/* Clears a few fields of every sub-record of the eight records at D_004C3410. */
void func_L00_005999D0(void) {
    s32 i;
    s32 j;
    Type1 *p;

    for (i = 0; i < 8; i++) {
        p = D_004C3410[i].f00;
        for (j = 7; j >= 0; j--) {
            p->f00 = 0;
            p->f01 = 0;
            p->f0A = 0;
            p->f0C = 0;
            p->f0E = 0;
            p++;
        }
    }
}
