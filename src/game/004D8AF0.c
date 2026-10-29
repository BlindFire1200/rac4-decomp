/* cflags: -G0 */
/* C adapted from rac4-decomp func_004D92F0 (commit 5d517a2) */
#include "common.h"


/* Starts the current player's state change when its state at +0x390 is at least 2, then marks the entry. */
extern void func_00497980(s32);
extern s32 func_00505B20(void);
extern void func_004A1310(void *);
extern void func_004A1358(void *);
extern s32 D_00320178[];


void func_004D8AF0(s32 arg0) {
    s32 *var10;
    void *var11;
    s32 var12;

    var12 = func_00505B20();
    var10 = (s32 *)((var12 * 0x3AC) + (s32)&D_00320178[0]);
    var11 = (u8 *)var10 + 0x340;

    if (*(s32 *)((u8 *)var11 + 0x50) >= 2) {
        if (arg0 != 0) {
            func_004A1358(var11);
        } else {
            func_004A1310(var11);
        }
        func_00497980(0);
        *((s32 *)var10 + 2) = *((s32 *)var10 + 2) | 2;
    }
}
