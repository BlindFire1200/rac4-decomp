/* Not matching yet: BYTES 3/80 (3 words differ) (tools/try_func.py func_01EA6D00 --diff). Not part of the build. */
#include "common.h"
extern void func_01EA95C0(void *);
typedef struct Type1 Type1;
struct Type1
{
  s32 f0;
  s32 f4;
  s32 f8;
  volatile s32 fC;
  volatile s32 f10;
};
s32 func_01EA6D00(Type1 *arg0)
{
  s32 result = 2;
  if (arg0 != 0)
  {
    if (arg0->f10 != 0)
    {
      func_01EA95C0(&arg0->f10);
    }
    arg0->fC = 0;
    result = 0;
    arg0->f4 = 0;
    arg0->f8 = 0;
    arg0->f0 = 0;
  }
  return result;
}
