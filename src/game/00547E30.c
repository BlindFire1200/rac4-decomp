#include "common.h"

// Select a record halfword and add a scaled table value.
extern void *func_00548D28(s32, s32);
extern s32 func_0054A788(s32, s32, s32);
extern s32 D_0021EDD4;
extern s32 D_003DDAD8[];
s16 func_00547E30(s32 arg0, s32 arg1) {
    s32 value = *(s16 *)((u8 *)func_00548D28(arg1, 0) + 0x42);
    if (D_0021EDD4 == 1) {
        value = *(s16 *)((u8 *)func_00548D28(arg1, 0) + 0x44);
    }
    return (s16)(func_0054A788(arg0, arg1, 2) * D_003DDAD8[arg1] + value);
}
