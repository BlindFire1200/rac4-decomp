#include "common.h"

extern void func_0049B1A0(s32 param, s32 count);
extern void func_0049C290(s32 param, s32 count);
extern void func_0049D280(s32 param, s32 count);

s32 D_0021DE80 = 0;

/* clears a status flag then calls the three setup helpers in order */
void func_004A20C8(void) {
    D_0021DE80 = 0;
    func_0049B1A0(0, 0x22);
    func_0049D280(0, 0);
    func_0049C290(0, 0);
}
