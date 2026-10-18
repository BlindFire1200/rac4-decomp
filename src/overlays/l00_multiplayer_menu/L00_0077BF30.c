#include "common.h"

extern s32 D_002233A4;
extern char D_004C1D10[];
s32 func_0011AB04();
s32 func_0011AE00();
void func_005C17B0();
void func_L00_0077C958();

typedef struct {
    s32 (*cmp)(void *, void *);
    s32 count;
    void **data;
} Heap;

typedef struct {
    u8 pad0[0xC];
    s32 fC;
    u8 pad10[0x8];
    s32 f18;
    void *f1C;
} Pool;

typedef struct {
    s32 w[0x103];
} Entry;

typedef struct {
    u8 pad[0x18];
    s32 f18;
    s32 f1C;
    char name[0x3E8];
} Msg;

static inline Entry *pool_alloc(Pool *pool) {
    Entry *node = pool->f1C;
    if (node != 0) {
        pool->f1C = *(Entry **)((s32)node + pool->fC);
        pool->f18--;
    }
    return node;
}

// Queue an entry into the active heap (or handle a long name), then on the
// end flag heap-sort the heap, free the other heap's nodes and flip heaps.
void func_L00_0077BF30(u8 *arg0) {
    u8 *state = *(u8 **)((u8 *)D_002233A4 + 0x68);
    s32 other;
    Heap *heap;
    Heap *h2;
    Pool *pool;
    void *node;
    u8 *name;
    s32 len;
    s32 i;
    s32 k;
    s32 m;
    s32 parent;
    s32 hole;
    s32 child;
    s32 right;
    void *val;
    void *tmp;

    if (state[0x2F88] == 0) {
        return;
    }
    if (((u8 *)D_002233A4)[0x1D] != 0) {
        return;
    }
    other = *(s32 *)(state + 0x2F94) == 0;
    heap = (Heap *)(state + (other * 0xC + 0x2F9C));
    if (((Msg *)arg0)->f18 == 0) {
        if ((u32)func_0011AB04(((Msg *)arg0)->name) >= 0x1A && func_0011AE00(((Msg *)arg0)->name, D_004C1D10, 0x19) == 0) {
            func_L00_0077C958(((Msg *)arg0)->name);
        } else {
            if (heap->count < *(s32 *)(state + 0x2F98)) {
                Entry *item = pool_alloc(*(Pool **)(state + 0x2FB4));
                if (item != 0) {
                    *item = *(Entry *)arg0;
                    len = func_0011AB04(((Msg *)arg0)->name);
                    func_005C17B0((u8 *)item + 0x20, ((Msg *)arg0)->name, len < 1000 ? len : 999);
                    i = heap->count;
                    heap->count = i + 1;
                    heap->data[i] = item;
                    if (heap->cmp != 0) {
                        parent = i / 2;
                        while (i > 0 && (u8)heap->cmp(heap->data[parent], heap->data[i])) {
                            tmp = heap->data[parent];
                            heap->data[parent] = heap->data[i];
                            heap->data[i] = tmp;
                            i = parent;
                        }
                    }
                }
            }
        }
    }
    if (arg0[0x408] == 0) {
        return;
    }
    if (heap->cmp != 0 && heap->count >= 2) {
        for (k = heap->count - 1; k > 0; k--) {
            tmp = heap->data[k];
            heap->data[k] = heap->data[0];
            heap->data[0] = tmp;
            if (heap->cmp != 0) {
                hole = k;
                val = heap->data[k];
                child = hole * 2 + 1;
                if (child < 0) do {
                    right = child + 1;
                    if (right < 0) {
                        if ((u8)heap->cmp(heap->data[child], heap->data[right])) {
                            child = right;
                        }
                        if (!heap->cmp(val, heap->data[child])) {
                            break;
                        }
                        heap->data[hole] = heap->data[child];
                        hole = child;
                        child = hole * 2 + 1;
                    }
                } while (child < 0);
                heap->data[hole] = val;
            }
        }
    }
    h2 = 0;
    if (*(s32 *)(state + 0x2F94) >= 0) {
        h2 = (Heap *)(state + (*(s32 *)(state + 0x2F94) * 0xC + 0x2F9C));
    }
    if (h2 != 0) {
        for (m = 0; m < h2->count; m++) {
            pool = *(Pool **)(state + 0x2FB4);
            node = h2->data[m];
            *(void **)((u8 *)node + pool->fC) = pool->f1C;
            pool->f1C = node;
            pool->f18++;
        }
        h2->count = 0;
    }
    *(s32 *)(state + 0x2F94) = other;
    *(s32 *)(state + 0x2F90) = *(s32 *)(state + 0x2F8C);
    state[0x2F89] = 0;
}
