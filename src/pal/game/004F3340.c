#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    char _p0[0xC];
    s32 fC;
    s32 f10;
};
/* Return an observed field or field-derived value through the documented pointer offsets. */

s32 func_004F3340(Type1 *arg0) {
    return arg0->fC == arg0->f10;
}
