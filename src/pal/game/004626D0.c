/* cflags: -G0 */
#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x24];
    s32 f24;
};

extern s32 D_001DFD04;
/* Update the observed field through the documented pointer offsets. */

void func_004626D0(Type1 *arg0) {
    arg0->f24 = (s32) D_001DFD04;
}
