#include "common.h"

extern void func_L00_0058D560(s32);
extern void func_L00_0058E6A8(s32, f32 *, f32 *);
extern void func_L00_0058E940(s32, f32, f32);
extern void func_L00_0058F020();
extern void func_L00_0058F188(s32);
extern void func_L00_0058FCE0(s32);

/* Initializes an object: a helper fills two floats, which are then passed on. */
void func_L00_005903A0(s32 arg0) {
    f32 f1;
    f32 f2;

    func_L00_0058F020();
    func_L00_0058E6A8(arg0, &f1, &f2);
    func_L00_0058E940(arg0, f1, f2);
    func_L00_0058D560(arg0);
    func_L00_0058FCE0(arg0);
    func_L00_0058F188(arg0);
}
