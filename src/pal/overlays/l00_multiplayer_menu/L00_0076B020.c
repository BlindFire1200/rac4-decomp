#include "common.h"
typedef struct { unsigned int words[7]; } Payload;
typedef struct { char pad[0x2b]; unsigned char flag; char pad2[0xe8]; Payload payload; } Target;
typedef struct { char pad[0x1d]; unsigned char flag; char pad2[0x16]; Target *target; } Global;
extern Global *D_002234A4;
/* Copies the supplied payload when the global mode permits it. */
void func_L00_0076B020(Payload *arg) {
    Global *g = D_002234A4;
    Target *target = g->target;
    if (!g->flag) {
        target->payload = *arg;
        target->flag = 0;
    }
}
