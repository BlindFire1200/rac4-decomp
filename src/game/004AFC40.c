#include "common.h"

extern s32 D_00221708;

typedef struct {
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
} Type1;

extern Type1 D_3094F8[];

static s32 D_00221708_b = 0;

/* Clears the slot's bit in the global flags word and flags the entry slot as free. */
void func_004AFC40(s32 arg0) {
	D_00221708_b = D_00221708 & ~(1 << arg0);
	D_3094F8[arg0].f0 = 2;
}
