/* cflags: -G0 */
#include "common.h"

typedef struct {
    u64 d[11];
} Blob;

extern Blob D_00173840;
extern Blob D_001737E8;

void func_00160870(void) {
    D_001737E8 = D_00173840;
}
