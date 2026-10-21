/* Not matching yet: BYTES 12/132 (5 words differ) (tools/try_func.py func_0011F6F8 --diff). Not part of the build. */
#include "common.h"
s32 func_0011F6F8(s32 arg0)
{
  s32 shift = 0;
  s32 new_var;
  if ((arg0 & 0xFFFF0000) == 0)
  {
    shift = 0x10;
    arg0 <<= 16;
  }
  if ((arg0 & 0xFF000000) == 0)
  {
    shift += 8;
    arg0 <<= 8;
  }
  if ((arg0 & 0xF0000000) == 0)
  {
    shift += 4;
    arg0 <<= 4;
  }
  if ((arg0 & 0xC0000000) == 0)
  {
    shift += 2;
    arg0 <<= 2;
  }
  if (arg0 < 0)
  {
    return shift;
  }
  shift += 1;
  shift = ((arg0 & 0x40000000) != 0) ? (shift) : (0x20);
  new_var = shift;
  return new_var;
}
