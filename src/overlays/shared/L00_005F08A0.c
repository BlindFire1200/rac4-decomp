#include "common.h"

extern s32 func_L00_005DC638(void);
extern s32 func_L00_005E7398(s32, s32, s32);
extern s32 D_171B40[];

void func_L00_005F08A0(s32 arg0) {
    D_171B40[1] = func_L00_005E7398(arg0, func_L00_005DC638() + D_171B40[1], 3);
}
