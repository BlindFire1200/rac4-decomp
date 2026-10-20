#include "common.h"

u8 D_0021E921 = 0;
extern s32 D_0021DDB8;
extern s32 D_0021DDB4;
extern s32 D_00222D14;
extern s32 func_L00_005A00F8(void);
extern void func_L01_00569138(void *arg0);
extern void func_L01_005698E0(void *arg0);
extern void func_L01_00569B50(void *arg0);
extern void func_L01_00569ED8(u8 *arg0);
extern void func_L01_0056A2C0(void *arg0);
extern void func_L01_0056A328(void *arg0);
extern void func_L01_0056B038(void *arg0);
extern s32 func_L01_0056B5B0(u8 *owner);
extern void func_L01_0056B9D0(void *arg0);
extern void func_L01_0056BC58(u8 *arg0);
extern void func_L01_0056D030(void *arg0);
extern void func_L01_0056D0C8(void *arg0);
extern void func_L01_0056E630(void *, s16);

// Step an object's state machine (+0x3E1) and report whether it is finished or idle.
s32 func_L01_00568EF0(u8 *obj) {
    s32 result;

    if (D_0021E921 == 0) {
        return 1;
    }
    switch (obj[0x3E1]) {
    case 0:
        func_L01_0056B038(obj);
        obj[0x3E1] = 1;
        break;
    case 1:
        if (obj[0x404] != 0) {
            if (D_0021DDB8 < 5) {
                return 1;
            }
            if (func_L00_005A00F8() != 0) {
                return 1;
            }
            if (D_0021DDB4 == 2) {
                return 1;
            }
        }
        func_L01_00569138(obj);
        func_L01_0056D0C8(obj);
        func_L01_0056A328(obj);
        func_L01_00569ED8(obj);
        func_L01_0056A2C0(obj);
        func_L01_0056D030(obj);
        func_L01_00569B50(obj);
        func_L01_0056B9D0(obj);
        func_L01_005698E0(obj);
        if (func_L01_0056B5B0(obj) != 0) {
            obj[0x3E1] = 3;
        }
        break;
    case 2:
        func_L01_0056BC58(obj);
        break;
    case 3:
        if (*(s32 *)(obj + 0x3FC) != -1 && obj[0x405] == 0) {
            obj[0x405] = 1;
            func_L01_0056E630((void *)(D_00222D14 + (*(s32 *)(obj + 0x3FC) << 8)), -1);
        }
        break;
    }
    result = 0;
    if (func_L01_0056B5B0(obj) == 0 || obj[0x3E1] != 3 ||
        (*(s32 *)(obj + 0x3FC) != -1 && obj[0x405] == 0)) {
        result = 1;
    }
    return result;
}
