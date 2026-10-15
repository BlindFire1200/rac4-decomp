#include "common.h"

typedef struct {
    u8 pad0[4];
    u8 f4;
    u8 pad5;
    u8 f6;
    u8 f7;
} Type4;
typedef struct {
    u8 pad0[4];
    Type4 *f4;
} Type3;
typedef struct {
    u8 pad0[0x18];
    Type3 *f18;
} Type2;
typedef struct {
    u8 pad0[0xC];
    u8 fC;
    u8 padD[0x48 - 0xD];
    Type2 *f48[1];
} Type1;
typedef struct {
    u8 pad0[0x24];
    Type1 *f24;
    u8 pad28[0x54 - 0x28];
    u8 f54;
} Type0;
typedef struct {
    u8 pad0[0x198];
    u64 f198[1];
} Type6;
typedef struct {
    u8 pad0[4];
    s32 f4;
    u8 pad8[4];
    s32 fC;
    u8 pad10[0x38 - 0x10];
    Type6 *f38;
    Type6 *f3C;
    u8 pad40[0x74 - 0x40];
    s32 f74;
    u8 pad78[0x1A0 - 0x78];
    u64 f1A0;
    u64 f1A8;
} Type5;

Type5 *func_00595D00();

/* Set or clear a bit in an object's mask and recompute its flags */
s32 func_L01_005B4FE8(Type0 *arg0, s32 arg1, s32 arg2) {
    Type5 *obj;
    u32 bit;
    s32 mask;
    s32 cur;
    s32 i;
    Type4 *e;

    obj = func_00595D00(arg0);
    if (obj == NULL || (u32)(arg1 - 1) >= 32) {
        return 0;
    }
    mask = 1 << (arg1 - 1);
    cur = (obj->f74 & mask) > 0;
    if (cur == arg2) {
        return 0;
    }
    if (arg2 != 0) {
        obj->f74 |= mask;
        if (obj->f38 != NULL) {
            obj->f1A0 |= obj->f38->f198[arg1];
        }
        if (obj->f3C != NULL) {
            obj->f1A8 |= obj->f3C->f198[arg1];
        }
    } else {
        obj->f74 &= ~mask;
        if (obj->f38 != NULL) {
            obj->f1A0 &= ~obj->f38->f198[arg1];
        }
        if (obj->f3C != NULL) {
            obj->f1A8 &= ~obj->f3C->f198[arg1];
        }
    }
    obj->f4 &= 0xFFFF1FFC;
    for (i = 0; i < arg0->f24->fC; i++) {
        e = arg0->f24->f48[i]->f18->f4;
        if (e != NULL && ((obj->f74 >> (e->f7 - 1)) & 1)) {
            if (e->f4 == 1) {
                obj->f4 |= 1;
            } else if ((u8)(e->f4 - 2) < 2) {
                obj->f4 |= 2;
            } else if (e->f6 == 2) {
                obj->f4 |= 0x2000;
            } else if (e->f6 == 3) {
                obj->f4 |= 0x4000;
            } else if (e->f6 == 4) {
                obj->f4 |= 0x8000;
            }
        }
    }
    e = arg0->f24->f48[arg0->f54]->f18->f4;
    if (e != NULL && e->f7 == arg1) {
        obj->fC = 1;
    }
    return 1;
}
