#include "common.h"

extern s32 func_004F23A0(u8 *a0);
/* Returns the slot address for a ring buffer's current position, or 0 when it is empty. */
s32 func_004F23B0(volatile s32 *p)
{
  s32 x;
  s32 d;
  if (func_004F23A0((u8 *)p) != 0)
  {
    return 0;
  }
  x = p[2] - p[3];
  d = p[4];
  return p[1] + ((x + d) % d) * 0x27E40;
}
