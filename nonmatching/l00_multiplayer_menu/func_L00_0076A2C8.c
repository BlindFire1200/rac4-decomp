/* Not matching yet: BYTES 5/908 (2 words differ) (tools/try_func.py func_L00_0076A2C8 --diff). Not part of the build. */
#include "common.h"
typedef struct Item
{
  s32 f0[6];
  s32 f18;
  s32 f1C;
  char f20[0xC8];
  u8 fE8;
  u8 fE9[3];
} Item;
typedef struct Entry
{
  char name[0xC8];
  u8 fC8;
} Entry;
typedef struct Heap
{
  s32 (*cmp)(Item *, Item *);
  s32 count;
  Item **arr;
} Heap;
typedef struct Pool
{
  s32 f0[3];
  s32 fC;
  s32 f10[2];
  s32 f18;
  Item *f1C;
} Pool;
typedef struct Mgr
{
  u8 pad[0x408];
  u8 f0;
  u8 f1[3];
  s32 f4;
  u8 f8;
  u8 f9[3];
  s32 fC;
  s32 f10;
  s32 f2C;
  Heap heaps[2];
  Pool *f48;
} Mgr;
typedef struct Glob
{
  u8 f0[0x1D];
  u8 f1D;
  u8 f1E[0x1E];
  Mgr *f3C;
} Glob;
extern Glob *D_002233A4;
extern s32 func_0011A518(void *, s32, s32);
extern Item *func_15DB80(s32, Item *);
extern void func_005C17B0(void *, void *, s32);
inline static Item *pool_alloc(Pool *pool)
{
  Item *item = pool->f1C;
  if (item != 0)
  {
    pool->f1C = *((Item **) (((s32) item) + pool->fC));
    pool->f18--;
  }
  return item;
}

void func_L00_0076A2C8(Item *arg0)
{
  Mgr *mgr;
  Heap *heap;
  Heap *cur;
  s32 next;
  s32 mode;
  s32 c2;
  s32 i;
  s32 k;
  s32 m;
  s32 n;
  s32 j;
  s32 child;
  s32 parent;
  Item *val;
  Item *tmp;
  mgr = D_002233A4->f3C;
  if (mgr->f0 == 0)
  {
    return;
  }
  if (D_002233A4->f1D != 0)
  {
    return;
  }
  next = 0;
  if (mgr->f4 == 0)
  {
    next = 1;
  }
  heap = &mgr->heaps[next];
  mode = arg0->f18;
  if (mode == 0)
  {
    if (heap->count < mgr->f2C)
    {
      Item *item = pool_alloc(mgr->f48);
      if (item != 0)
      {
        Entry *e = (Entry *) func_15DB80(0xD4, item);
        func_005C17B0(e, arg0->f20, 0xC8);
        e->fC8 = 0;
        item = (Item *) e;
        i = heap->count;
        heap->count = i + 1;
        heap->arr[i] = item;
        if (heap->cmp != 0)
        {
          parent = i / 2;
          while ((i > 0) && ((u8) heap->cmp(heap->arr[parent], heap->arr[i])))
          {
            tmp = heap->arr[parent];
            heap->arr[parent] = heap->arr[i];
            heap->arr[i] = tmp;
            i = parent;
          }

        }
      }
    }
  }
  else
    if (mode != 1)
  {
    if (arg0->fE8 != 0)
    {
      func_0011A518(arg0, 0, 0xEC);
      arg0->fE8 = 1;
    }
    else
    {
      func_0011A518(arg0, 0, 0xEC);
    }
  }
  else
  {
    arg0->fE8 = mode;
  }
  if (arg0->fE8 == 0)
  {
    return;
  }
  if ((heap->cmp != 0) && (heap->count >= 2))
  {
    for (k = heap->count - 1; k > 0; k--)
    {
      tmp = heap->arr[k];
      heap->arr[k] = heap->arr[0];
      heap->arr[0] = tmp;
      if (heap->cmp != 0)
      {
        j = k;
        val = heap->arr[k];
        child = (j * 2) + 1;
        if (child < 0)
        {
          do
          {
            c2 = child + 1;
            if (c2 < 0)
            {
              if ((u8) heap->cmp(heap->arr[child], heap->arr[c2]))
              {
                child = c2;
              }
              if (heap->cmp(val, heap->arr[child]) == 0)
              {
                break;
              }
              heap->arr[j] = heap->arr[child];
              j = child;
              child = (j * 2) + 1;
            }
          }
          while (child < 0);
        }
        heap->arr[j] = val;
      }
    }

  }
  cur = 0;
  if ((mgr->f0 != 0) && (mgr->f4 >= 0))
  {
    cur = &mgr->heaps[mgr->f4];
  }
  if (cur != 0)
  {
    for (m = 0; m < cur->count; m++)
    {
      Pool *pool = mgr->f48;
      Item *item = cur->arr[m];
      *((Item **) (((s32) item) + pool->fC)) = pool->f1C;
      pool->f1C = item;
      pool->f18++;
    }

    cur->count = 0;
  }
  mgr->f4 = next;
  mgr->f10 = mgr->fC;
  mgr->f8 = 0;
}
