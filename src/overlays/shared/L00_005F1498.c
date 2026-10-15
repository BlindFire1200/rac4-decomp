#include "common.h"

extern void *func_005F13A0(void);
extern void func_L00_005F1430(s32);

// Release the current record: clear its owner state, both slot arrays and
// the pending index.
void func_L00_005F1498(s32 owner) {
    u8 *object = func_005F13A0();
    s32 *slots_70;
    s32 *slots_50;
    s32 count;
    if (object != 0) {
        func_L00_005F1430(owner);
        slots_70 = (s32 *)(object + 0x70);
        slots_50 = (s32 *)(object + 0x50);
        count = 7;
        do {
            *slots_50 = 0;
            count--;
            *slots_70 = 0;
            slots_50++;
            slots_70++;
        } while (count >= 0);
        *(s32 *)(object + 0x24) = -1;
        *(u16 *)(object + 0x1C) &= 0xEFFF;
    }
}
