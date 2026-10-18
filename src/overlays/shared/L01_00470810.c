#include "common.h"
typedef unsigned int u128 __attribute__((mode(TI)));
void func_L00_005DE048(s32, s32, u128 *);
void func_L01_00471320(s32, u128);
void func_L01_00470858(s32, u128);
void func_L01_00470810(s32 a0) {
    u128 value;
    func_L00_005DE048(a0, 1, &value);
    func_L01_00471320(a0, value);
    func_L01_00470858(a0, value);
}
