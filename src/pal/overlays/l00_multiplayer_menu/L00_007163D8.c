#include "common.h"

extern u8 D_004B8800[];
s32 func_L00_00714570();
s32 func_L00_00716450();

s64 func_L00_007163D8(char *arg0, s32 arg1) {
    func_L00_00714570(arg0);
    *(s32 *)(arg0 + 88) = (s32)D_004B8800;
    func_L00_00716450(arg0, arg1);
    return (s32)arg0;
}
