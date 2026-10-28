/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_00124138 (NTSC-U func_00124138, commit 403f30a9) */
#include "common.h"

/* IOP reset request packet over DMA; 2.9-ee-991111 */
typedef struct {
    u32 f0 : 8;
    u32 f0_8 : 24;
    u32 f4;
    s32 f8;
    u32 fC;
    s32 f10;
    s32 f14;
    char f18[0x50];
} __attribute__((aligned(16))) Type1;

typedef struct {
    void *f0;
    u32 f4;
    s32 f8;
    s32 fC;
} Type2;

extern void func_0012ED80(s32, s32);
extern void func_00126E70(void);
extern u32 func_00126FB0(s32);
extern void func_00126FA0(s32, s32);
extern s32 func_00126F60(Type2 *, s32);
extern void func_00129CE0();
extern Type1 D_001A9740;

s32 func_0012CC30(const char *arg0, s32 arg1) {
    Type2 var1;
    u32 var2;
    s32 i;

    func_0012ED80(0, 0);
    func_0012ED80(1, 0);
    func_00126E70();
    var2 = func_00126FB0(0x80000000);
    D_001A9740.f14 = arg1;
    for (i = 0; arg0[i] != 0; i++) {
        D_001A9740.f18[i] = arg0[i];
    }
    D_001A9740.f4 = 0;
    D_001A9740.f10 = i;
    D_001A9740.f8 = 0x80000003;
    D_001A9740.f0_8 = 0;
    D_001A9740.f0 = 0x68;
    var1.f0 = &D_001A9740;
    var1.f4 = var2;
    var1.f8 = 0x68;
    var1.fC = 0x44;
    func_00129CE0(&D_001A9740, 0x68);
    func_00126FA0(4, 0x40000);
    if (func_00126F60(&var1, 1) != 0) {
        func_00126FA0(4, 0x10000);
        func_00126FA0(4, 0x20000);
        func_00126FA0(0x80000002, 0);
        func_00126FA0(0x80000000, 0);
        return 1;
    }
    return 0;
}
