/* Call the observed resident helper and reset the gp-relative global to zero. */
/* cflags: @ee29 -O2 -G8 */
#include "common.h"

s32 func_0046C188();
extern s32 D_0021F224;

void func_0046BD80(void) {
    func_0046C188();
    D_0021F224 = 0;
}
