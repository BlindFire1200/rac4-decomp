/* Not matching yet: BYTES 15/124 (tools/try_func.py func_L01_0045BE60 --diff). Not part of the build. */
#include "common.h"
extern void func_L00_005F1520(void);
extern void func_L01_0056CDB0(void *);
extern void func_L01_0045A2D0(void *);
extern s32 func_L01_0045B3A0(void *);
extern void func_L01_00459BE0(void *);
void func_L01_0045BE60(void *arg0) {
    u8 *state = *(u8 **)(arg0 + 0xAC);
    *(s16 *)(state + 0x610) = -1;
    *(s16 *)(state + 0x60E) = 0x3C;
    *(u8 *)(state + 0x61E) = 0;
    func_L00_005F1520();
    func_L01_0056CDB0(arg0);
    func_L01_0045A2D0(arg0);
    if (*(u8 *)(arg0 + 0x67) != 5) {
        if (*(u8 *)(arg0 + 0x67) != 4) return;
        if (!func_L01_0045B3A0(arg0)) return;
    }
    func_L01_00459BE0(arg0);
}
