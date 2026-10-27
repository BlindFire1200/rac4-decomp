/* cflags: -G0 */
/* C adapted from rac3-decomp func_003B1C10 (NTSC-U func_003B1A70, commit 403f30a9) */
#include "common.h"

extern void func_00126BC0(s32);
extern void func_00126BE0(s32);
void func_004F0EC8(arg0, arg1, arg2, arg3, arg4)
    void *arg0;
    s32 *arg1;
    s32 *arg2;
    s32 *arg3;
    s32 *arg4;
{
  s32 var1;
  s32 var2;
  s32 var3;
  s32 var4;
  s32 var5;
  s32 var6;
  s32 var7;
  func_00126BE0(*((s32 *) (((u8 *) arg0) + 0x40)));
  var3 = *((s32 *) (((u8 *) arg0) + 0x10));
  var4 = *((s32 *) (((u8 *) arg0) + 0x14));
  var6 = var3 + 2;
  var2 = *((s32 *) (((u8 *) arg0) + 0x18));
  var7 = ((s32) ((((*((s32 *) (((u8 *) arg0) + 0xC))) + var3) << 0xB) + var4)) % var2;
  var5 = (((*((s32 *) (((u8 *) arg0) + 8))) - var6) << 0xB) - var4;
  ;
  if ((var2 - var7) >= var5)
  {
    *arg1 = (*((s32 *) (((u8 *) arg0) + 0))) + var7;
    *arg2 = var5;
    *arg3 = 0;
    *arg4 = 0;
  }
  else
  {
    *arg1 = (*((s32 *) (((u8 *) arg0) + 0))) + var7;
    *arg2 = (*((s32 *) (((u8 *) arg0) + 0x18))) - var7;
    *arg3 = *((s32 *) (arg0 + 0));
    *arg4 = var5 - ((*((s32 *) (((u8 *) arg0) + 0x18))) - var7);
  }
  var3 = var6;
  ((void (*)(s32, s32, s32, s32)) func_00126BC0)(*((s32 *) (((u8 *) arg0) + 0x40)), var5, var3, var7);
}
