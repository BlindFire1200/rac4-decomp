/* cflags: -G0 -fno-schedule-insns -fno-schedule-insns2 */
#include "common.h"

typedef struct {
    u8 b[64];
} Blob;

extern Blob D_0016F6C0;
extern Blob D_0016F700;

s32 func_00146D1C(Blob *a, Blob *b) {
    *a = D_0016F6C0;
    *b = D_0016F700;
    return 0;
}
