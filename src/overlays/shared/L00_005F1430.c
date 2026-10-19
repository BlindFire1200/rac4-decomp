#include "common.h"

extern void *func_005F13A0(void);
extern void func_L00_005F1520(s32);

// Clear the current record and notify its owner when state is two.
void func_L00_005F1430(s32 arg0) {
    u8 *object = (u8 *)func_005F13A0();
    if (object != NULL) {
        if (*(s16 *)(object + 0x16) != 2) {
            *(s16 *)(object + 0x1E) = 0;
        } else {
            func_L00_005F1520(arg0);
            *(s16 *)(object + 0x1E) = 0;
        }
        *(s16 *)(object + 0x16) = 0;
        *(s16 *)(object + 0x18) = 0;
        *(s16 *)(object + 0x14) = 0;
        object[0x3D] = 0;
        *(s32 *)(object + 0x10) = 0;
    }
}
