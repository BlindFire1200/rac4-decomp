#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
};
/* Initialize three consecutive words and return the original pointer. */

void *func_00504C08(Type1 *arg0) {
    arg0->f0 = 0;
    arg0->f4 = 0;
    arg0->f8 = 0;
    return arg0;
}
