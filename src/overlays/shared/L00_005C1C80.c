#include "common.h"

typedef struct {
    u8 pad[0xE0];
    u16 fE0;
} Type1;

/* clears bit 1 of the 16-bit field at offset 0xE0 */
void func_L00_005C1C80(Type1 *arg0) {
    arg0->fE0 &= 0xFFFD;
}
