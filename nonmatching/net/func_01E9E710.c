/* Not matching yet: BYTES 28/128 (15 words differ) (tools/try_func.py func_01E9E710 --diff). Not part of the build. */
#include "common.h"
struct Fields
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  s32 f14;
  s32 f18;
  s32 f1C;
  s32 f20;
  s32 f24;
  s32 f28;
  s32 f2C;
  s32 f30;
  s32 f34;
};
extern s32 func_0011A518(void *, s32, s32);
s32 func_01E9E710(struct Fields *arg0)
{
  s32 var_v0 = 0x17;
  struct Fields *new_var;
  struct Fields **new_var2;
  new_var = arg0;
  if (new_var != ((void *) 0))
  {
    func_0011A518(new_var, 0, 0x70);
 do { arg0->f0 = 1; var_v0 = 0; new_var->f10 = 0x9C4; new_var->f18 = 0x2000; arg0->f30 = 0x10; new_var->f34 = 0x1F40; new_var->f8 = 1; } while (0);
    new_var->fC = 1;
    arg0->f1C = 0;
    new_var->f14 = 0x2000;
    new_var2 = &new_var;
    (*new_var2)->f20 = 1;
    arg0->f24 = 0x10;
    arg0->f28 = 0x1F40;
    arg0->f2C = 1;
  }
  return var_v0;
}
