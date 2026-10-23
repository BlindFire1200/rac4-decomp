#include "common.h"

extern void func_004985F0(s32);
extern void func_004E2938(s32, s32);
extern void func_00462648(s32);
extern void func_00462688(s32);
extern void func_0046DF48(void);
extern u8 D_00321B98[];
extern s32 D_0021EE54;
extern s32 D_0021EE58;

// Sets the first word of D_00321B98 to 1, runs func_004985F0(6), func_004E2938(30, 0) and
// func_00462648 on its +0x13B4 word (and func_00462688 on +0x13B8 when D_0021EE54 is 0 and
// D_0021EE58 is 1), clears its byte at +0x13A4 and runs func_0046DF48.
void func_004DC628(void) {
    *(s32 *)D_00321B98 = 1;
    func_004985F0(6);
    func_004E2938(0x1E, 0);
    func_00462648(*(s32 *)(D_00321B98 + 0x13B4));
    if (D_0021EE54 == 0 && D_0021EE58 == 1) {
        func_00462688(*(s32 *)(D_00321B98 + 0x13B8));
    }
    D_00321B98[0x13A4] = 0;
    func_0046DF48();
}
