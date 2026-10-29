#include "common.h"

extern u8 D_004B85D8[];
s32 func_L00_00714570();
s32 func_L00_00715F50();

s64 func_L00_00715ED8(char *arg0, s32 arg1) {
    func_L00_00714570(arg0);
    *(s32 *)(arg0 + 88) = (s32)D_004B85D8;
    func_L00_00715F50(arg0, arg1);
    return (s32)arg0;
}
