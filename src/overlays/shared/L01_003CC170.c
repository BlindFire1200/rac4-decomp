#include "common.h"

extern void func_L00_005DC4B8(void);
extern void func_L01_00524548(s32);
extern void func_L01_00524568(s32);
extern u8 *func_L01_00584068(s32);
extern void func_L01_00591BD8(void *, s32, s32);
extern u8 D_003BF460_[];
extern void func_L01_0046E1C8(void);
extern void func_L01_00475AC0(void);

// Reset sequence: run func_L00_005DC4B8, install the two callbacks at +0x6D0 and
// +0x780 of D_003BF460_, release the two handles (+4 and +0xC, when not -1) of
// each of the 0x40 entries from func_L01_00584068, then move the object to
// state 1 (-1).
void func_L01_003CC170(void *object) {
    s32 i;
    u8 *entry;
    u8 *global;
    func_L00_005DC4B8();
    global = D_003BF460_;
    *(void **)(global + 0x6D0) = func_L01_0046E1C8;
    *(void **)(global + 0x780) = func_L01_00475AC0;
    for (i = 0; i < 0x40; i++) {
        entry = func_L01_00584068(i);
        if (*(s32 *)(entry + 4) != -1) func_L01_00524548(*(s32 *)(entry + 4));
        if (*(s32 *)(entry + 0xC) != -1) func_L01_00524568(*(s32 *)(entry + 0xC));
    }
    func_L01_00591BD8(object, 1, -1);
}
