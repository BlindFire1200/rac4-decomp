#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x8];
    s32 f8;
};
/* Update the observed field through the documented pointer offsets. */

void func_004399C8(Type1 *arg0) {
    arg0->f8 = (s32) (arg0->f8 & ~1);
}
