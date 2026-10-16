/* Not matching yet: BYTES 7/128 (tools/try_func.py func_L01_0047F050 --diff). Not part of the build. */
#include "common.h"
extern s32 D_0039D230[];
extern u8 D_00222A9C[];
extern void func_L01_0047EEF8(void);
extern s32 func_L01_0047EDC8(s32);
extern void func_L01_004409B0(s32);
extern void func_L00_005B0038(void *, void *, s32);
void func_L01_0047F050(s32 arg0) {
    s32 i = 0;
    s32 *p = D_0039D230;
    do {
        if (func_L01_0047EDC8(i) == 0) func_L01_004409B0(*p);
        i++;
        p++;
    } while (i < 0x19);
    func_L00_005B0038(D_00222A9C, func_L01_0047EEF8, arg0);
}
