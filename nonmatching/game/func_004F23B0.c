/* Not matching yet: BYTES 3/92 (3 words differ) (tools/try_func.py func_004F23B0 --diff). Not part of the build. */
#include "common.h"
typedef struct Ring
{
  char pad0[4];
  s32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
} Ring;
extern s32 func_004F23A0(void);
s32 func_004F23B0(Ring *r)
{
  int new_var;
  int new_var2;
  s32 d;
  if (func_004F23A0() != 0)
  {
    d = 0;
    return d;
  }
  d = r->f10;
  new_var2 = (*r).fC;
  new_var2 = r->f8 - new_var2;
  new_var = d;
  return r->f4 + (((new_var2 + new_var) % new_var) * 0x27E40);
}
