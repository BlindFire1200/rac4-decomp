#include "common.h"

typedef struct Type1 {
    char pad0[8];
    s32 f8;
} Type1;
s32 func_004A2950(Type1 *arg0) {
    return arg0->f8;
}
