#include "common.h"

extern void *func_L00_005EAB50(void);
extern void *func_L00_005DEBD0(s32, s32, s32);
extern s32 D_00222D14;

s32 func_L01_00585CA0(u8 *arg0) {
    u8 *data = (u8 *)func_L00_005EAB50() + 8;
    s32 first = *(s32 *)(data + 4);
    s32 second;
    void *callback;

    if (first != -1 && func_L01_00585CA0((u8 *)(D_00222D14 + (first << 8))) != 0) return 1;
    second = *(s32 *)data;
    if (second != -1 && func_L01_00585CA0((u8 *)(D_00222D14 + (second << 8))) == 0) return 0;
    callback = func_L00_005DEBD0(*(s16 *)(arg0 + 0xBC), 0x11, 0xC);
    return callback == 0 ? 0 : ((s32 (*)(void *))*(void **)((u8 *)callback + 4))(arg0);
}
