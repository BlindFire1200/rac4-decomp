/* cflags: -G0 */
#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Ent;

extern Ent *D_1A60A4;
extern Ent *D_1A60AC;

void func_00129990(s32 i) {
    if (i < 0) {
        D_1A60A4[i & 0x7FFFFFFF].f0 = 0;
    } else {
        D_1A60AC[i].f0 = 0;
    }
}
