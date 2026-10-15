#include "common.h"

typedef int u128 __attribute__((mode(TI)));

typedef struct Type1 {
    u8 pad0[0x10];
    u128 f10;
    u8 pad20[0x14];
    u16 f34;
    u8 pad36[0x62];
    s32 f98;
    u8 pad9C[0x20];
    s16 fBC;
    u8 padBE[0x32];
    u128 fF0;
} Type1;

typedef struct Type2 {
    void *(*f0)(Type1 *);
    u8 pad4[0x10];
    void (*f14)(Type1 *, void *);
} Type2;

typedef struct Type3 {
    u8 pad0[0x20];
    u8 f20;
    u8 pad21[3];
    s32 f24;
    s32 f28;
    s32 f2C;
    s32 f30;
    s32 f34;
    u8 pad38[0xC];
    u8 f44[6];
    u8 pad4A[3];
    u8 f4D;
} Type3;

typedef struct Type4 {
    void *f0;
    u8 f4;
    u8 f5;
    u8 f6;
    u8 f7;
    u16 f8;
    u16 fA;
    Type1 *fC;
    s16 f10;
    u8 f12[6];
    s32 f18;
    s32 f1C;
    s32 f20;
    s32 f24;
    s32 f28;
    f32 f2C;
    u128 f30;
    u128 f40;
} Type4;

typedef struct Type5 {
    u8 pad0[0x5C];
    Type1 *f5C;
} Type5;

typedef struct Type6 {
    u8 pad0[2];
    u16 f2;
    s32 f4;
    u8 pad8[0xC8];
    u8 fD0[0x311];
    u8 f3E1;
} Type6;

typedef struct Type7 {
    u8 pad0[0x38];
    f32 f38;
} Type7;

extern Type5 *func_00595D00(Type1 *);
extern Type7 *func_005A16E8(Type1 *);
extern s32 func_L00_00500CE0(void *);
extern s32 func_L00_005C8CF0(s16);
extern Type2 *func_L00_005DEBD0(s32, s32, s32);
extern void func_L00_0066CCE8(Type1 *, s32);
extern Type4 *func_L01_0056BF28();
extern Type1 *func_L01_0056D698(void *, s32);
extern s32 func_L01_0056D7D8(void *, Type1 *);
extern s32 func_L01_0056D9B0(s32);

// Drains a queue of objects, building a record for each one.
void func_L01_0056B9D0(Type6 *arg0) {
    Type1 *obj;
    Type2 *cls;
    Type4 *rec;
    Type3 *info;
    Type5 *other;
    Type7 *ext;
    s32 i;

    if (arg0 != NULL && arg0->f4 != -1 && func_L00_00500CE0(arg0->fD0) > 0
        && func_L01_0056D9B0(arg0->f4) == 0) {
    while (func_L00_00500CE0(arg0->fD0) != 0) {
        obj = func_L01_0056D698(arg0->fD0, 0);
        cls = func_L00_005DEBD0(func_L00_005C8CF0(obj->fBC), 0xE, 0x1C);
        rec = func_L01_0056BF28();
        if (rec == NULL) {
            return;
        }
        rec->f0 = arg0;
        info = cls->f0(obj);
        if (info != NULL && info->f20 != 0) {
            rec->fC = obj;
            rec->f5 = 1;
            rec->f6 = obj->f98 != 0;
            rec->f8 = obj->f34;
            other = func_00595D00(obj);
            if (other != NULL && other->f5C != NULL) {
                rec->f7 = other->f5C->f98 != 0;
                rec->fA = other->f5C->f34;
                other->f5C->f34 |= 0x41;
                other->f5C->f34 &= ~0x1000;
                other->f5C->f98 = 0;
                func_L00_0066CCE8(other->f5C, 1);
                other->f5C->f34 |= 2;
            }
            obj->f34 |= 0x41;
            obj->f34 &= ~0x1000;
            obj->f98 = 0;
            func_L00_0066CCE8(obj, 1);
            obj->f34 |= 2;
        } else {
            rec->f5 = 0;
            rec->f10 = func_L00_005C8CF0(obj->fBC);
            rec->f30 = obj->f10;
            rec->f40 = obj->fF0;
            if (info != NULL) {
                for (i = 0; i < 6; i++) {
                    rec->f12[i] = info->f44[i];
                }
                rec->f18 = info->f24;
                rec->f1C = info->f28;
                rec->f20 = info->f2C;
                rec->f24 = info->f30;
                rec->f28 = info->f34;
                rec->f4 = info->f4D;
            }
            ext = func_005A16E8(obj);
            if (ext != NULL) {
                rec->f2C = ext->f38;
            }
            cls->f14(obj, rec);
        }
        func_L01_0056D7D8(arg0->fD0, obj);
        arg0->f2++;
    }
    arg0->f3E1 = 2;
    }
}
