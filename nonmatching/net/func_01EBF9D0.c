/* Not matching yet: BYTES 8/128 (tools/try_func.py func_01EBF9D0 --diff). Not part of the build. */
#include "common.h"
extern volatile s32 D_00169510_[];
s32 func_0011A518(void *, s32, s32);
void *func_01EBF9D0(void *arg0) {
    u32 count = 0;
    u32 total = *(u32 *)((char *)arg0 + 0x60);
    char *item = *(char **)((char *)arg0 + 8);
    if (total != 0) {
        do {
            if (*(s32 *)item == 0) {
                func_0011A518(item, 0, 0x90);
                *(s32 *)(item + 0x74) = count;
                *(s32 *)(item + 0x44) = D_00169510_[0];
                return item;
            }
            count++;
            item += 0x90;
        } while (count < total);
    }
    return 0;
}
