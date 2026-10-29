#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xA8];
    s32 fA8;
};
/* Update the observed field through the documented pointer offsets. */

void func_004F2CF8(Type1 *arg0) {
    arg0->fA8 = 1;
}
