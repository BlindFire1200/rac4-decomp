#include "common.h"

typedef struct {
    u8 f00[0x408];
    u8 f408;
} TypeB;

typedef struct {
    u8 f00[0x20];
    u8 f20;
    u8 f21[0x10];
    u8 f31;
    u8 f32[2];
    u16 f34;
    u8 f36[0x76];
    TypeB *fAC;
} TypeA;

extern void func_00591BD8(TypeA *o, u8 state, s32 type);
extern s32 func_L01_0056CDB0(u8 *object);
extern void func_L01_0056E7F8(void *arg0);
extern void func_L01_00588B08(void *);
extern void func_L01_005A8928(u8 *obj);

// Tears the object down (drop, despawn, set state) and, when arg1 is zero, marks it finished.
void func_L01_004C7B68(TypeA *arg0, s32 arg1) {
    TypeB *temp_s0;

    temp_s0 = arg0->fAC;
    func_L01_0056CDB0((u8 *)arg0);
    func_L01_0056E7F8(arg0);
    func_L01_005A8928((u8 *)arg0);
    func_00591BD8(arg0, 0xF, 7);
    if (temp_s0->f408 == 0) {
        func_L01_00588B08(arg0);
        return;
    }
    if (arg1 == 0) {
        arg0->f20 = 0xFD;
        arg0->f31 = 0;
        arg0->f34 |= 3;
    }
}
