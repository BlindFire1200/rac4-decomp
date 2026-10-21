/* cflags: -mno-split-addresses */
#include "common.h"

typedef int u128 __attribute__((mode(TI)));
typedef struct { f32 x[4]; } __attribute__((aligned(16))) Quad;

typedef struct Type2 {
    s16 f0;
    s16 f2;
    s32 f4;
    u8 pad8[0x10];
    u8 *f18;
} Type2;

extern u8 *D_00222D14[];

extern s32 func_L00_005E6560(u8 *);
extern void func_L01_0056B7A0(u8 *, Type2 *);
extern void func_L01_0056D280(u8 *, s32, Type2 *, u8 *, u8 *);
extern s32 func_L01_0056D620(u8 *, u8 *);
extern u8 *func_L01_00588BC0(s32);
extern s32 func_L01_00598418(u128 value);

u8 *func_L01_0056C6C0(u128 arg0, Quad arg1, Type2 *arg2, u8 *arg3, u8 *arg4) {
    u8 *obj;
    s32 id;

    
    if (arg2->f4 != -1) {
        obj = D_00222D14[0] + (arg2->f4 << 8);
        if (func_L00_005E6560(obj) == 0) {
            func_L01_0056D620(arg4 + 0xD0, obj);
        }
    } else {
        id = arg2->f0;
        if (id == 0x253B) {
            id = 0x99C;
        }
        obj = func_L01_00588BC0(id);
        if (obj != 0) {
        *(u128 *)(obj + 0x10) = arg0;
        *(Quad *)(obj + 0xF0) = arg1;
        if (func_L01_00598418(arg0) != 0) {
            *(u16 *)(obj + 0x34) &= 0xFF7F;
        } else {
            *(u16 *)(obj + 0x34) |= 0x80;
        }
        arg2->f18 = obj;
        func_L01_0056D620(arg4 + 0xD0, obj);
        }
    }
    if (obj != 0) {
        func_L01_0056D280(obj, arg2->f4 != -1, arg2, arg3, arg4);
        func_L01_0056B7A0(arg3, arg2);
        *(u16 *)(arg3 + 0x1A2) = *(u16 *)(arg3 + 0x1A0);
    }
    return obj;
}
