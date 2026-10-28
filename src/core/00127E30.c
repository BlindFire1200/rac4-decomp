/* cflags: -G0 */
#include "common.h"

typedef struct {
    s32 size;
    s32 count;
    u8 *rd;
    u8 *wr;
} Ring;

void func_00127E30(Ring *r) {
    r->count--;
    r->rd++;
    if (r->rd == (u8 *)r + (r->size + 0x10)) {
        r->rd = (u8 *)r + 0x10;
    }
}
