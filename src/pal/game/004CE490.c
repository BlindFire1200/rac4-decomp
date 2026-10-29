/* Pass the signed 16-bit global to one helper, then invoke the second helper. */
/* cflags: -G0 */
#include "common.h"

extern s16 D_00171BD2;
s32 func_00462648(s16);
s32 func_0046DF48();

void func_004CE490(void) {
    func_00462648(D_00171BD2);
    func_0046DF48();
}
