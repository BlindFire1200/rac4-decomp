#include "common.h"

extern s32 func_L00_005DC638(void);
extern s32 func_L00_005E7398(s32, s32, s32);
extern s32 D_171B40[];

// Advance the second word of D_171B40 through func_L00_005E7398 (mode 3).
void func_L00_005F08A0(s32 param) {
    D_171B40[1] = func_L00_005E7398(param, func_L00_005DC638() + D_171B40[1], 3);
}
