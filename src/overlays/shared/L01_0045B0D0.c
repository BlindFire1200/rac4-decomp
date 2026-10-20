#include "common.h"

extern void *func_L00_005C8EB8(void *);
extern s32 func_L01_00588C68(s32);

typedef struct Type1 {
    u8 pad0[0x47C];
    u8 f47C[6];
    u8 pad482[0x614 - 0x482];
    u8 f614;
    u8 f615;
    u8 f616;
    u8 f617;
    u8 f618;
    u8 f619;
} Type1;

/* Recompute the owner's flag bytes 0x614-0x619 from its six slot bytes at 0x47C. */
void func_L01_0045B0D0(unsigned char *arg0) {
    Type1 *owner = *(Type1 **)(arg0 + 0xAC);
    s32 i;
    owner->f614 = 0;
    owner->f615 = 0;
    owner->f618 = 0;
    owner->f619 = 0;
    for (i = 0; i < 6; i++) {
        if (owner->f47C[i] != 0) {
            switch (owner->f47C[i]) {
            case 1: owner->f614 = 1; break;
            case 2: owner->f615 = 1; break;
            case 3: owner->f618 = 1; break;
            case 4: owner->f618 = 2; break;
            case 9: owner->f619 = 1; break;
            case 11: owner->f616 = 1; break;
            case 12:
                if (*(s32 *)func_L00_005C8EB8(arg0) != 0 && func_L01_00588C68(0x99C) != 0)
                    owner->f617 = 1;
                break;
            }
        }
    }
    owner->f615 = 0;
}
