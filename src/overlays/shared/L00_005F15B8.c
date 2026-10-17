#include "common.h"
extern s32 func_L00_005F13D8(void);
extern s32 D_0021E728;
extern s32 D_002444C0[];
extern s32 D_002445C0[];

// Record a pair of values while the pending list has capacity.
void func_L00_005F15B8(s32 arg0) {
    s32 value = func_L00_005F13D8();
    s32 index = D_0021E728;
    if (index < 0x40) {
        D_002444C0[index] = arg0;
        D_002445C0[index] = value;
        D_0021E728 = index + 1;
    }
}
