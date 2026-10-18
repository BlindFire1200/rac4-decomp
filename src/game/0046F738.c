#include "common.h"
extern void func_0046EDD8(s32);
extern u8 *D_221450;
extern s32 D_221464;
void func_0046F738(void) {
    s32 i = 0;
    if (D_221464 > 0) {
        do {
            u8 *entry = (u8 *)(i * 8 + (u32)D_221450);
            if (entry[7] != 0) goto next;
            func_0046EDD8(*(s32 *)entry);
        next:
            i++;
        } while (i < D_221464);
    }
}
