/* Not matching yet: BYTES 59/328 (24 words differ) (tools/try_func.py func_L00_0071BEB8 --diff). Not part of the build. */
#include "common.h"
extern void *func_0062A4C8(s32);
extern void func_0069D5D8(s32, s32);
extern void func_L00_0062A810(void *, s32, void *, s32 *);
extern void func_L00_0069D028(s32, s32);
extern s32 func_L00_0069D9B8(s32);
extern void func_L00_006A62B0(s32, void *);
extern u8 D_0036DED0[];
extern u8 D_003846D0[];
extern u8 D_0039AED0[];
extern s32 D_004D6DE8[];
void func_L00_0071BEB8(void *object, s32 index, s32 mode, s32 flags, u32 extra)
{
  void *data;
  s32 *table;
  void *handle;
  s32 temp;
  if (mode != 1)
  {
    if (mode < 2)
    {
      return;
    }
    if (!(mode == 2))
    {
      if (mode == 3)
      {
        data = D_0039AED0;
      }
      else
      {
        return;
      }
    }
    else
    {
      data = D_003846D0;
    }
  }
  else
  {
    data = D_0036DED0;
  }
  handle = func_0062A4C8(mode);
  table = D_004D6DE8 + index;
  func_L00_0062A810(handle, *table, data, table);
  handle = func_0062A4C8(mode);
  ((void (**)(void *, s32)) ((*((u8 **) (((u8 *) handle) + 4))) + 8))[0](handle, 0);
  temp = func_L00_0069D9B8((*((s32 *) (((u8 *) object) + 0x240))) | flags);
  func_L00_006A62B0(temp, func_0062A4C8(mode));
  func_0069D5D8((*((s32 *) (((u8 *) object) + 0x240))) | flags, mode);
  func_L00_0069D028((*((s32 *) (((u8 *) object) + 0x240))) | flags, 1);
  if (extra != 0xFFFFFFFFU)
  {
    func_L00_0069D028((*((s32 *) (((u8 *) object) + 0x240))) | ((s32) extra), 0);
  }
}
