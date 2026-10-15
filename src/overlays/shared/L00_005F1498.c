#include "common.h"

extern void *func_005F13A0(void);
extern void func_L00_005F1430(s32);

void func_L00_005F1498(s32 arg0) {
    u8 *object = func_005F13A0();
    s32 *first;
    s32 *second;
    s32 count;
    if (object != 0) {
        func_L00_005F1430(arg0);
        first = (s32 *)(object + 0x70);
        second = (s32 *)(object + 0x50);
        count = 7;
        do {
            *second = 0;
            count--;
            *first = 0;
            second++;
            first++;
        } while (count >= 0);
        *(s32 *)(object + 0x24) = -1;
        *(u16 *)(object + 0x1C) &= 0xEFFF;
    }
}
