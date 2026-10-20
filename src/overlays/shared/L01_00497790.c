#include "common.h"

extern s32 D_0021DE10;
extern void *func_006658C0();
extern void func_L00_005DD4A0(void *);
extern s32 func_L01_00497878(void *arg0);
extern s32 func_L01_00498788(void *);
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);
extern void func_L01_0064FAC8();

// Release the object in states 0xF/0x23; otherwise update its sub-block at +0xAC from two func_006658C0 records.
void func_L01_00497790(u8 *arg0) {
    u8 *sub;
    u8 *p;

    if (D_0021DE10 == 0xF || D_0021DE10 == 0x23) {
        func_L00_005DD4A0(arg0);
        return;
    }
    sub = *(u8 **)(arg0 + 0xAC);
    if (func_L01_00497878(arg0) != 0) {
        return;
    }
    if (func_L01_00498788(arg0) != 0 || (D_0021DE10 == 0x16 && *(s32 *)sub == 0x23)) {
        func_L01_0064FAC8(*(s32 *)sub);
        *(u16 *)(arg0 + 0x34) |= 2;
        func_L01_00591BD8(arg0, 2, -1);
    }
    *(f32 *)(sub + 8) = *(f32 *)((u8 *)func_006658C0(0) + 0x2E20);
    *(f32 *)(sub + 0xC) = *(f32 *)((u8 *)func_006658C0(1) + 0x2E20);
    p = *(u8 **)(sub + 0x94);
    if (p != 0) {
        *(f32 *)(sub + 0x90) = *(f32 *)(p + 0x2E8);
    }
}
