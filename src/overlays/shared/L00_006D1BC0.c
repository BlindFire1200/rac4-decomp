#include "common.h"

extern s32 func_L00_005E60D0(s32, s32);
extern void func_L00_005E3648(s32, s32, s32, s32);

void func_L00_006D1BC0(u8 *arg0) {
    s32 value;
    if (arg0[0x266F] != 0) arg0[0x266F] = 0;
    if (*(s16 *)(arg0 + 0x3A6) != 0) {
        value = func_L00_005E60D0(0x7F, 0xFF);
        func_L00_005E3648(*(s32 *)(arg0 + 0x2EF0), value,
                          *(s32 *)(arg0 + 0x2E8C), value);
    } else {
        func_L00_005E3648(*(s32 *)(arg0 + 0x2EF0),
                          *(s32 *)(arg0 + 0x2E88),
                          *(s32 *)(arg0 + 0x2E8C),
                          *(s32 *)(arg0 + 0x2E90));
    }
}
