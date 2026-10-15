#include "common.h"

extern void func_L00_0058F020(void);
extern void func_L00_0058E6A8(s32, void *, f32 *);
extern void func_L00_0058E940(s32, f32, f32);
extern void func_L00_0058D560(s32);
extern void func_L00_0058FCE0(s32);
extern void func_L00_0058F188(s32);

void func_L00_005903A0(s32 arg0) {
    f32 first;
    f32 second;
    func_L00_0058F020();
    func_L00_0058E6A8(arg0, &first, &second);
    func_L00_0058E940(arg0, first, second);
    func_L00_0058D560(arg0);
    func_L00_0058FCE0(arg0);
    func_L00_0058F188(arg0);
}
