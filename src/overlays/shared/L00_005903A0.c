#include "common.h"

extern void func_L00_0058F020(void);
extern void func_L00_0058E6A8(s32, void *, f32 *);
extern void func_L00_0058E940(s32, f32, f32);
extern void func_L00_0058D560(s32);
extern void func_L00_0058FCE0(s32);
extern void func_L00_0058F188(s32);

// Per-actor update sequence; the x/y pair comes from func_L00_0058E6A8.
void func_L00_005903A0(s32 index) {
    f32 x;
    f32 y;
    func_L00_0058F020();
    func_L00_0058E6A8(index, &x, &y);
    func_L00_0058E940(index, x, y);
    func_L00_0058D560(index);
    func_L00_0058FCE0(index);
    func_L00_0058F188(index);
}
