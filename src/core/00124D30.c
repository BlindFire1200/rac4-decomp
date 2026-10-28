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

extern u32 func_0011C160(s32, u32);
extern void func_001256C8(s32, void *);
extern mchunkptr D_00164220[];
extern u64 D_00164630[];
extern u32 D_00164638[];
extern u64 D_00164640[];
extern u64 D_00164648[];
extern s32 D_00164650[];

#define av_ D_00164220
#define bin_at(i) ((mchunkptr)((char *)&av_[2 * (i) + 2] - 8))
#define top (bin_at(0)->fd)
#define initial_top (bin_at(0))
#define chunksize(p) ((p)->size & ~3)
#define chunk_at_offset(p, s) ((mchunkptr)((char *)(p) + (s)))
#define set_head(p, s) ((p)->size = (s))
#define sbrk_base D_00164638[0]
#define sbrked_mem D_00164650[0]
#define top_pad D_00164630[0]
#define max_sbrked_mem D_00164640[0]
#define max_total_mem D_00164648[0]

void func_00124D30(s32 reent_ptr, u32 nb) {
    u32 brk;
    u32 front_misalign;
    u32 correction;
    u32 new_brk;
    u32 top_size;
    mchunkptr old_top = top;
    u32 old_top_size = chunksize(old_top);
    u32 old_end = (u32)chunk_at_offset(old_top, old_top_size);
    u32 sbrk_size = nb + top_pad + 16;
    u64 pagesz = 0x1000;

    if (sbrk_base != 0xFFFFFFFF) {
        sbrk_size = (sbrk_size + (pagesz - 1)) & ~(pagesz - 1);
    }
    brk = func_0011C160(reent_ptr, sbrk_size);
    if (brk == 0xFFFFFFFF || (brk < old_end && old_top != initial_top)) {
        return;
    }
    sbrked_mem += sbrk_size;
    if (brk == old_end) {
        top_size = sbrk_size + old_top_size;
        set_head(top, top_size | 1);
    } else {
        if (sbrk_base == 0xFFFFFFFF) {
            sbrk_base = brk;
        } else {
            sbrked_mem += brk - old_end;
        }
        front_misalign = (brk + 8) & 0xF;
        if (front_misalign > 0) {
            correction = 16 - front_misalign;
            brk += correction;
        } else {
            correction = 0;
        }
        correction += pagesz - ((u32)(brk + sbrk_size) & (pagesz - 1));
        new_brk = func_0011C160(reent_ptr, correction);
        if (new_brk == 0xFFFFFFFF) {
            return;
        }
        sbrked_mem += correction;
        top = (mchunkptr)brk;
        top_size = new_brk - brk + correction;
        set_head(top, top_size | 1);
        if (old_top != initial_top) {
            if (old_top_size < 16) {
                set_head(top, 1);
                return;
            }
            old_top_size = (old_top_size - 12) & ~0xF;
            set_head(old_top, (old_top->size & 1) | old_top_size);
            chunk_at_offset(old_top, old_top_size)->size = 5;
            chunk_at_offset(old_top, old_top_size + 4)->size = 5;
            if (old_top_size >= 16) {
                func_001256C8(reent_ptr, (char *)old_top + 8);
            }
        }
    }
    if ((u64)sbrked_mem > max_sbrked_mem) {
        max_sbrked_mem = sbrked_mem;
    }
    if ((u64)sbrked_mem > max_total_mem) {
        max_total_mem = sbrked_mem;
    }
}
