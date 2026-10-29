/* cflags: -G0 */
#include "common.h"

extern s32 func_0047D4E8();
extern u8 D_00171B80[];

s32 func_0047D368(s32 arg0) {
    s32 var1 = func_0047D4E8();
    (*(u8 *)(((var1 + arg0) + 0x1F4))) = 1;
    (*(u8 *)(((arg0 + ((s32)D_00171B80)) + 0))) = 1;
    return (var1 + arg0);
}
