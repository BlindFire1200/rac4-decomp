/* cflags: -G0 */
#include "common.h"

typedef struct {
    s32 size;
    s32 count;
    u8 *rd;
    u8 *wr;
} Ring;

void func_00127DF0(Ring *r) {
    r->count++;
    r->wr++;
    if (r->wr == (u8 *)r + (r->size + 0x10)) {
        r->wr = (u8 *)r + 0x10;
    }
}
