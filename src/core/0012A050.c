/* cflags: -G0 */
#include "common.h"

typedef struct {
    u8 pad[0x1C];
    u8 *base;
    s32 count;
} Tab;

extern s32 func_0012A020(u8 *arg0);

u8 *func_0012A050(Tab *t, s32 i) {
    if (i < 0 || i >= t->count) {
        return (u8 *)func_0012A020((u8 *)t);
    }
    return t->base + (i << 6);
}
