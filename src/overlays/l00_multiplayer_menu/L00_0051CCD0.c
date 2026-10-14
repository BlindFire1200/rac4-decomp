/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    char _p4[0x8];
    s32 fC;
};

s32 func_L00_00519658(s32);
s32 func_L00_005263A8(s32);

s32 func_L00_0051CCD0(Type1 *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        temp_v1 = arg0->f0;
        if (temp_v1 == 6) {
            return func_L00_005263A8(arg0->fC);
        }
        if (temp_v1 == 0x74) {
            return func_L00_00519658(arg0->fC);
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
