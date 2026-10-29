#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0x10A60];
    s32 f10A60;
};
/* Return an observed field or field-derived value through the documented pointer offsets. */

s32 func_L00_007180D0(Type1 *arg0) {
    return arg0->f10A60;
}
