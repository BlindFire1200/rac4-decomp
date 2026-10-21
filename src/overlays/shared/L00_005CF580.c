#include "common.h"

typedef struct {
    u8 pad0[0x1E];
    u8 flags;
    u8 pad1F;
} Type2;

typedef struct {
    u8 pad0[0x16];
    u8 flags;
    u8 pad17[0x9];
} Type3;

typedef struct {
    u8 pad0[0x34];
    u16 flags;
    u8 pad36[0x86];
    s16 id;
    u8 padBE[0x42];
} Type4;

s32 func_L00_005CF4F0(void *);

extern Type4 *D_00222454;
extern Type4 *D_0022246C;
extern Type3 *D_00222D4C;
extern Type3 *D_00222D50;
extern Type2 *D_00222DD8;
extern Type2 *D_00222DDC;
extern s32 D_0021E6B4;

void func_L00_005CF580(s32 arg0) {
    Type2 *a;
    Type3 *b;
    Type4 *c;

    for (a = D_00222DD8; a != D_00222DDC; a++) {
        if (func_L00_005CF4F0(a) != arg0) {
            a->flags |= 4;
        } else {
            a->flags &= ~4;
        }
    }
    for (b = D_00222D4C; b != D_00222D50; b++) {
        if (func_L00_005CF4F0(b) != arg0) {
            b->flags |= 1;
        } else {
            b->flags &= ~1;
        }
    }
    for (c = D_00222454; c != D_0022246C; c++) {
        if (c->id == 0) {
            continue;
        }
        if (D_0021E6B4 == 0 && c->id == 0x23F7) {
            continue;
        }
        if (func_L00_005CF4F0(&c->pad0[0x10]) != arg0) {
            c->flags |= 0x80;
        } else {
            c->flags &= ~0x80;
        }
    }
}
