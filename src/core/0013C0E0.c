/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_0012FB68 (NTSC-U func_0012FB68, commit 403f30a9) */
#include "common.h"

/* libpad: pad RPC command 10 for a port/slot, then follow-up when it answers 1; 2.9-ee-991111 */
typedef struct { s32 x0; s32 x4; s32 x8; s32 xC; s32 x10; } Type1;

extern s32 func_0012A718();
extern void func_0013BB18(s32, s32, s32);
extern Type1 D_001AF200;
extern u8 D_001AEFC0[];

s32 func_0013C0E0(s32 arg0, s32 arg1, s32 arg) {
    D_001AF200.x0 = 10;
    D_001AF200.x4 = arg0;
    D_001AF200.x8 = arg1;
    D_001AF200.xC = arg;
    if (func_0012A718(D_001AEFC0, 1, 0, &D_001AF200, 0x80, &D_001AF200, 0x80, 0, 0) < 0) {
        return 0;
    }
    if (D_001AF200.x10 == 1) {
        func_0013BB18(arg0, arg1, 2);
    }
    return D_001AF200.x10;
}
