#include "common.h"
extern void func_L00_005B0038(void *, void *, void *);
extern s32 func_L00_005BCA48(void *);
extern void func_L00_005DD4A0(void *);
extern void func_L00_00687FE0(void *);
extern void func_L01_00591BD8(void *, s32, s32);
extern s32 D_00222A9C[];
extern void func_L01_0040A600(void);
void func_L01_0040A940(u8 *arg0) {
    u8 state = arg0[0x20];
    u8 *linked = *(u8 **)(arg0 + 0xAC);
    void *callback;
    void *table;
    switch (state) {
    case 0:
        func_L00_00687FE0(arg0);
        func_L00_005BCA48(linked + 0xF0);
        /* fall through */
    case 1:
        callback = func_L01_0040A600;
        table = D_00222A9C;
        func_L00_005B0038(table, callback, arg0);
        if (func_L00_005BCA48(linked + 0xF2) != 0)
            func_L01_00591BD8(arg0, 2, -1);
        return;
    case 2:
        func_L00_005DD4A0(arg0);
        break;
    }
}
