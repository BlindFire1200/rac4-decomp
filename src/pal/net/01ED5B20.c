/* cflags: -G0 */
#include "common.h"

extern s32 D_00169DBC;
extern s32 D_00169DC0;
/* Update an observed global or memory field. */

void func_01ED5B20(s32 arg0, s32 arg1) {
    D_00169DBC = arg0;
    D_00169DC0 = arg1;
}
