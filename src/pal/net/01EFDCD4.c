#include "common.h"

s32 func_01EFDCD4(char *a,s32 b) {
    s32 result = *(s32 *)(a + 16);
    if(result) *(s32 *)(a + 184)=b;
    return result;
}
