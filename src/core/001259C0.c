/* cflags: -fno-opt-stack */
/* Algorithm reference: Doug Lea malloc 2.6.4, newlib 8a0efa53e44919bcf5ccb1d3353618a82afdf8bc.
 * A version of malloc/free/realloc written by Doug Lea and released to the public domain.
 * Matching reconstruction, not an unchanged vendor file. */
#include "common.h"

typedef struct mc {
    u32 prev_size;
    u32 size;
    struct mc *fd;
    struct mc *bk;
} *mchunkptr;

extern u32 func_0011C160(s32, s32);
extern void func_0011F338(s32);
extern void func_0011F398(s32);
extern s64 func_0012FE48(s64, s64);
extern s64 func_0012FEB0(s64, s64);
extern mchunkptr D_00164220[];
extern s32 D_00164638[];
extern s32 D_00164650[];

#define av_ D_00164220
#define bin_at(i) ((mchunkptr)((char *)&av_[2 * (i) + 2] - 8))
#define top (bin_at(0)->fd)
#define chunksize(p) ((p)->size & ~3)
#define set_head(p, s) ((p)->size = (s))

s32 func_001259C0(s32 reent_ptr, u32 pad) {
    long top_size;
    long extra;
    char *current_brk;
    u32 new_brk;
    u32 pagesz = 0x1000;

    func_0011F338(reent_ptr);
    top_size = chunksize(top);
    extra = func_0012FE48(func_0012FEB0(top_size - pad + 0xFEF, pagesz) - 1, pagesz);
    if (extra < (long)pagesz) {
        goto fail;
    }
    current_brk = (char *)func_0011C160(reent_ptr, 0);
    if (current_brk != (char *)top + top_size) {
        goto fail;
    }
    new_brk = func_0011C160(reent_ptr, -extra);
    if (new_brk == 0xFFFFFFFF) {
        current_brk = (char *)func_0011C160(reent_ptr, 0);
        top_size = current_brk - (char *)top;
        if (top_size >= 16) {
            D_00164650[0] = (u32)current_brk - D_00164638[0];
            set_head(top, top_size | 1);
        }
    fail:
        func_0011F398(reent_ptr);
        return 0;
    }
    set_head(top, (top_size - extra) | 1);
    D_00164650[0] -= extra;
    func_0011F398(reent_ptr);
    return 1;
}
