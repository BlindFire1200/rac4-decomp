#include "common.h"

extern u8 D_004B83B8[];
s32 func_L00_00714570();
s32 func_L00_00715DC0();

s64 func_L00_00715D48(char *arg0, s32 arg1) {
    func_L00_00714570(arg0);
    *(s32 *)(arg0 + 88) = (s32)D_004B83B8;
    func_L00_00715DC0(arg0, arg1);
    return (s32)arg0;
}
