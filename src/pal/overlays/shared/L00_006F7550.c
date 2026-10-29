/* Return true when the word at offset 0x25CC is 49 or 152. */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x25CC];
    s32 f25CC;
};

s32 func_L00_006F7550(Type1 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->f25CC;
    if ((temp_v1 == 0x31) || (temp_v1 == 0x98)) {
        return 1;
    }
    return 0;
}
