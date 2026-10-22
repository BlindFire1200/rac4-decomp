#include "common.h"

/* Returns a status code for a network object: 0x17 if the pointer is NULL, 0x16 on failure, 0 on success. */
extern s32 func_01EA9768(s32 a0, s32 a1);
extern s32 func_01EA9780(s32 a0);

struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
};

s32 func_01EA06D8(struct Type1 *a0) {
    s32 var_v0;

    var_v0 = 0x17;
    if (a0 != 0) {
        if (func_01EA9768(a0->f0, a0->f8) != 0) {
            var_v0 = 0x16;
        } else {
            var_v0 = (func_01EA9780(a0->f4) == 0) ? 0 : 0x16;
        }
    }
    return var_v0;
}
