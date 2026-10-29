#include "common.h"
typedef struct Type1 { char pad0[0x3014]; s32 f3014; u8 *f3018; char pad301C[0x20]; s32 f303C; u8 *f3040; s32 f3044; u8 *f3048; } Type1;
extern Type1 *D_00222650;
/* Clears two fields and one flag across three arrays. */
void func_L00_00604408(void) {
 s32 i;
 for (i=0; i<D_00222650->f3044; i++) *(u16 *)(D_00222650->f3048 + i*8)=0xFFFF;
 for (i=0; i<D_00222650->f303C; i++) *(u16 *)(D_00222650->f3040 + i*12+4)=0xFFFF;
 for (i=0; i<D_00222650->f3014; i++) *(u16 *)(D_00222650->f3018 + i*32+2)&=0xEFFF;
}
