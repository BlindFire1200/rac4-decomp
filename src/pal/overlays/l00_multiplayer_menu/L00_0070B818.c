/* cflags: @ee29 -O2 -G8 */
#include "common.h"



s32 func_L00_00620F38(s32);
s32 func_L00_00716238();
s32 func_L00_0071C2C8();
s32 func_L00_007785D0();
extern s32 D_00220A68;
extern s8 D_00220A6C;


s32 func_L00_0070B818(void) {
    s32 result;
    D_00220A6C = 0;
    func_L00_00716238();
    func_L00_0071C2C8();
    func_L00_007785D0();
    result = func_L00_00620F38(D_00220A68);
    D_00220A68 = 0;
    return result;
}
