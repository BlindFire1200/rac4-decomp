#include "common.h"

void func_00775178(void *);

void func_L00_007752B8(s32 arg0, s32 arg1, s32 arg2, u8 *object) {
    void (*callback)(s32, s32, s32);
    func_00775178(object);
    callback = *(void (**)(s32, s32, s32))(object + 0x18);
    if (callback != 0) callback(arg2, *(s32 *)(object + 0x0C), *(s32 *)(object + 0x1C));
    if (arg2 == 0 || arg2 == 0x2F) *(s32 *)object = 2;
}
