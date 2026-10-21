/* Not matching yet: BYTES 13/96 (tools/try_func.py func_L01_00494FF0 --diff). Not part of the build. */
#include "common.h"
extern s16 func_L01_004950F0(void);
extern void func_L01_005AB318(void *, f32);
extern void func_L01_00495050(void *, s16);
void func_L01_00494FF0(u8 *object) {
    u8 *state = *(u8 **)(object + 0xAC);
    s16 *value = (s16 *)(state + 0x4D6);
    if (*value == -1) *value = func_L01_004950F0();
    func_L01_005AB318(object, *(f32 *)(object + 0xF8));
    func_L01_00495050(object, *value);
}
