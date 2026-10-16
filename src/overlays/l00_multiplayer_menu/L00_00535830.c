#include "common.h"

extern void func_L00_004F84C8(s32, s32, s32, s32, s32);
extern void *func_L00_004FACD8(s32);

// Allocate 0x18 bytes through func_L00_004FACD8 and initialize its six words
// (+0x14 is 1, the rest 0). On failure report the error through
// func_L00_004F84C8 and return null.
void *func_L00_00535830(void) {
    u8 *object = func_L00_004FACD8(0x18);
    if (object != 0) {
        *(s32 *)(object + 0x14) = 1;
        *(s32 *)(object + 0xC) = 0;
        *(s32 *)(object + 0x10) = 0;
        *(s32 *)(object + 8) = 0;
        *(s32 *)object = 0;
        *(s32 *)(object + 4) = 0;
        return object;
    }
    func_L00_004F84C8(0xD, 0x71, 0x21, 0, 0);
    return 0;
}
