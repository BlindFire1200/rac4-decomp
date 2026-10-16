/* Not matching yet: BYTES 20/160 (tools/try_func.py func_L01_00573D00 --diff). Not part of the build. */
#include "common.h"

extern u16 D_00222C3C_[];
#define D_00222C3C (D_00222C3C_[0])
extern u8 D_0024F120[];
extern s32 D_0021DDB8;
extern void func_L01_00571F50(s32, s32);

s32 func_L01_00573D00(void) {
    s32 index;
    s32 now;
    u8 *entry;
    u16 next;

    index = D_00222C3C;
    if (index != 0x801) {
        do {
            entry = D_0024F120 + index * 0x30;
            now = D_0021DDB8;
            next = *(u16 *)(entry + 0x28);
            if (now >= 0xB5) {
                if (*(u16 *)(entry + 0x24) + 0xB4 < now) {
                    func_L01_00571F50(next, now);
                }
            }
            index = next;
        } while (index != 0x801);
    }
    return 1;
}
