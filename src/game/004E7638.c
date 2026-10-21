#include "common.h"
extern s32 D_23AB00[];
extern s32 D_221E18[];
extern s32 D_221E20;
extern s32 D_221E2C;
extern s32 D_221E3C;
extern void func_004E75D0(void);
void func_004E7638(void)
{
  unsigned int new_var;
  new_var = D_23AB00[3];
  D_221E18[1] = D_23AB00[4];
  D_221E18[0] = new_var;
  D_221E20 = D_23AB00[3];
  D_221E2C = 0;
  func_004E75D0();
  D_221E3C = 0;
}
