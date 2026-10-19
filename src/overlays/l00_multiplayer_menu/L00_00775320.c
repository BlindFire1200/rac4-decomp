#include "common.h"

extern void func_00775190(void *);
extern void func_L00_007753A8(void);
extern s32 func_L00_0076CE28(s32, void *, s32, s32, s32, void *, void *);
extern void func_L00_00775200(void *, void *);
extern s32 *D_002233A4;

// Prepare a callback context and dispatch it when the handler accepts it.
s32 func_L00_00775320(void *arg0) {
    u8 buffer[0x80];
    s32 result = 0;
    s32 temp = D_002233A4[0x40 / 4];
    func_L00_00775200(arg0, buffer);
    if ((u32)func_L00_0076CE28(temp, buffer, *(s32 *)((u8 *)arg0 + 8),
                               *(s32 *)((u8 *)arg0 + 0x14), 0x7C,
                               (void *)func_L00_007753A8, arg0) != 0xFFFFFFFFU) {
        result = 1;
        func_00775190(arg0);
    }
    return result;
}
