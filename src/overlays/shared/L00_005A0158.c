#include "common.h"

typedef struct {
    u8 pad00[0x86];
    s16 f86;
} Type_005A0158_Inner;

typedef struct {
    u8 pad00[0x50];
    Type_005A0158_Inner *f50;
} Type_005A0158_Outer;

extern Type_005A0158_Outer D_0022CA80[];

/* Tests the s16 at +0x86 of the entry at +0x50 of table entry arg0 for the value 0x13. */
s32 func_L00_005A0158(s32 arg0) {
    u32 addr;

    addr = (u32)&D_0022CA80[0] + (u32)arg0 * 0x470;
    return ((Type_005A0158_Outer *)addr)->f50->f86 == 0x13;
}
