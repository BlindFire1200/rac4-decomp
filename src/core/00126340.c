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

extern mchunkptr D_00164220[];
extern s32 D_00164650[];

#define av_ D_00164220
#define bin_at(i) ((mchunkptr)((char *)&av_[2 * (i) + 2] - 8))
#define top (bin_at(0)->fd)
#define chunksize(p) ((p)->size & ~3)

void func_00126340(void) {
    s32 i;
    mchunkptr b;
    mchunkptr p;
    u32 avail;
    s32 navail;

    avail = chunksize(top);
    navail = (avail >= 16);
    for (i = 1; i < 128; ++i) {
        b = bin_at(i);
        for (p = b->bk; p != b; p = p->bk) {
            ++navail;
            avail += chunksize(p);
        }
    }
    D_00164650[1] = navail;
    D_00164650[7] = D_00164650[0] - avail;
    D_00164650[8] = avail;
    D_00164650[9] = chunksize(top);
}
