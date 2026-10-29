/* cflags: @ee29 -O2 -G8 */
#include "common.h"



s32 func_004A27B0();
s32 func_00502508(s32);
s32 func_00506D28(s32);
extern s32 D_0021F6F8;
extern s32 D_0021F6FC;


s32 func_004A2818(void) {
    s32 result;
    func_00502508(func_004A27B0());
    result = func_00506D28(func_004A27B0());
    D_0021F6FC = 0;
    D_0021F6F8 = 1;
    return result;
}
