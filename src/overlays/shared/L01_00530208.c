#include "common.h"

/* Data block at 0x23F600: two object pointers at +0x1F0 and +0x1F4. */
typedef struct {
    u8 pad[0x1F0];
    u8 *unk1F0;
    u8 *unk1F4;
} L01_00530208_Data;

extern L01_00530208_Data D_0023F600;
extern void func_005A8630(u8 *object, s32 flag);

/* Set the 0x1003 flag on two objects and notify func_005A8630 about each. */
void func_L01_00530208(void) {
    u8 *b = D_0023F600.unk1F4;
    u8 *a = D_0023F600.unk1F0;
    *(u16 *)(a + 0x74) = 0x1003;
    *(u16 *)(b + 0x74) = 0x1003;
    func_005A8630(a, 1);
    func_005A8630(b, 1);
}
