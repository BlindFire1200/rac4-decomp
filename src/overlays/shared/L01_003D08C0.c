#include "common.h"

extern void func_L01_003D0838(void *);
extern s32 func_L01_003D0AD0(void *);

// Find the n-th free set slot of the linked +0xAC object; optionally claim it, return its value and id.
void func_L01_003D08C0(u8 *owner, s32 n, s32 claim, s32 *outValue, s32 *outId) {
    u8 *object = *(u8 **)(owner + 0xAC);
    s16 *ids = (s16 *)(object + 0x84);
    s32 *slots = (s32 *)(object + 0x50);
    u8 *bytes = object + 0x8C;
    s32 i;
    for (i = 0; i < 4; i++, ids++, slots++, bytes++) {
        if (*slots != -1 && *bytes == 0) {
            if (n == 0) {
                if (claim != 0) {
                    *bytes = 1;
                    if (func_L01_003D0AD0(owner) != 0) func_L01_003D0838(owner);
                }
                *outValue = *slots;
                *outId = *ids;
                return;
            }
            n--;
        }
    }
    *outValue = -1;
    *outId = -1;
}
