#include "common.h"

extern void func_L00_005F1400(s32, s32);
extern void func_L00_005F1498(s32);
extern void func_L00_005F15B8(s32);
extern void func_L00_005F1620(void);
void func_L00_006B7048(u8 *arg0) {
    u8 *object = arg0;
    if (*(s32 *)(object + 0x25D4) == 0x14 || *(s32 *)(object + 0x25CC) == 0x76) {
        func_L00_005F1400(*(s32 *)(object + 0x2EF0), 0);
        func_L00_005F1498(*(s32 *)(object + 0x2EF0));
    } else {
        func_L00_005F1400(*(s32 *)(object + 0x2EF0), 1);
        func_L00_005F15B8(*(s32 *)(object + 0x2EF0));
        func_L00_005F1620();
    }
}
