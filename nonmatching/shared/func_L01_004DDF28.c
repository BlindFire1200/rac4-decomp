/* Not matching yet: BYTES 10/156 (tools/try_func.py func_L01_004DDF28 --diff). Not part of the build. */
#include "common.h"
extern void func_L00_005B0038(void *, void *, void *);
extern s32 func_L01_004DDFC8(void *);
extern void func_L01_004DE058(void *);
extern s32 func_L01_00585BB0(void *);
extern s32 func_L01_00585D40(void);
extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L01_004DE318(void *);
extern s32 D_0021DDB4;
extern s32 D_00222A9C[];

void func_L01_004DDF28(void *object) {
    if (D_0021DDB4 != 2 && func_L01_00585D40() == 0 && func_L01_004DDFC8(object) == 0 &&
        *((u8 *)object + 0x20) == 1) {
        func_L01_004DE058(object);
        if (func_L01_00585BB0(object) != 0) func_L01_00591BD8(object, 2, -1);
        func_L00_005B0038(D_00222A9C, func_L01_004DE318, object);
    }
}
