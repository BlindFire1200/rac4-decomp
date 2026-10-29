#include "common.h"
extern s32 func_01EA95C0(s32*);
typedef struct Type1 Type1;
struct Type1
{
  s32 f0;
  s32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
};
/* Releases the handle at 0x10 if set, then clears words 0x0-0xC; 2 when there is no object. */
s32 func_01EA6D00(Type1 *arg0)
{
  s32 result = 2;
  if (arg0 != 0)
  {
    if (arg0->f10 != 0)
    {
      func_01EA95C0(&arg0->f10);
    }
    result = 0;
    arg0->f0 = 0;
    arg0->f4 = 0;
    arg0->f8 = 0;
    arg0->fC = 0;
  }
  return result;
}
