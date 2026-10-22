#include "common.h"

typedef void (*unk_00501548_fn)(void);

typedef struct {
	u32 f00[4];
	unk_00501548_fn f10;
} unk_00501548;

// Calls the callback stored at offset 0x10 of the argument when it is not null.
void func_00501548(unk_00501548 *arg0) {
	unk_00501548_fn fp = arg0->f10;

	if (fp != 0) {
		fp();
	}
}
