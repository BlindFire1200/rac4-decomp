#include "common.h"

// Append node arg1 to the list headed at the owner arg0 (tail at +0xC, head link at +0x8).
void func_01EB2FF0(void *arg0, void *arg1) {
    if (arg0 != NULL) {
        *(s32 *)((u8 *)arg1 + 4) = 0;
        if (*(void **)((u8 *)arg0 + 8) != NULL) {
            void *t = *(void **)((u8 *)arg0 + 0xC);
            *(void **)arg1 = t;
            *(void **)((u8 *)t + 4) = arg1;
        } else {
            *(void **)((u8 *)arg0 + 8) = arg1;
            *(void **)arg1 = NULL;
        }
        *(void **)((u8 *)arg0 + 0xC) = arg1;
    }
}
