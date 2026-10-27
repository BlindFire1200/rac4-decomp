/* cflags: -G0 */
#include "common.h"

extern void func_0011A518(void *, s32, s32);
extern s32 D_00164740;
extern u8 D_1A9728[];

s32 func_0012C648(void) {
    D_00164740 = -1;
    func_0011A518(D_1A9728, 0, 4);
    return 0;
}
