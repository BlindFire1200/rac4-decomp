#include "common.h"

// Runs a helper, passes D_0016472C to another, then reports success.
extern s32 D_0016472C[];

void func_0012AF88(void);
void func_00126BE0(s32 arg0);

s32 func_0012AFE0(void) {
	func_0012AF88();
	func_00126BE0(D_0016472C[0]);
	return 0;
}
