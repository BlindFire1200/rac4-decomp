/* Not matching yet: BYTES 18/128 (6 words differ) (tools/try_func.py func_01EC0410 --diff). Not part of the build. */
#include "common.h"
extern void func_01EB6428(s32, s32);
void func_01EC0410(s32 owner, void *state)
{
  s32 *var_s0;
  s32 temp_a1;
  s32 var_s2 = 0;
  s32 var_v1;
  var_v1 = *((s32 *) (((u8 *) state) + 0x44));
  if (var_v1 > 0)
  {
    var_s0 = (s32 *) state;
    do
    {
      temp_a1 = *var_s0;
      if (temp_a1 != 0)
      {
        func_01EB6428(owner, temp_a1);
        *var_s0 = 0;
        var_v1 = *((s32 *) (((u8 *) state) + 0x44));
      }
      var_s2 += 1;
      var_s0 += 2;
    }
    while (var_s2 < var_v1);
  }
  *((s32 *) (((u8 *) state) + 0x40)) = 0;
  *((s32 *) (((u8 *) state) + 0x44)) = 0;
}
