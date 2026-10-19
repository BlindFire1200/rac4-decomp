#include "common.h"

void func_00775178(void *);

// Run func_00775178, call the callback at +0x18 (when set) with the code and
// the words at +0xC and +0x1C, and set the first word to 2 for code 0 or 0x2F.
void func_L00_007752B8(s32 unused0, s32 unused1, s32 code, u8 *object) {
    void (*callback)(s32, s32, s32);
    func_00775178(object);
    callback = *(void (**)(s32, s32, s32))(object + 0x18);
    if (callback != 0) callback(code, *(s32 *)(object + 0x0C), *(s32 *)(object + 0x1C));
    if (code == 0 || code == 0x2F) *(s32 *)object = 2;
}
