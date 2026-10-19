#include "common.h"

// Replace the smallest of the four entries (searching below 0x1E8480) with
// value when the value is larger.
void func_L00_0073B970(s32 value, s32 *items) {
    s32 selected = -1;
    s32 best = 0x1E8480;
    s32 index = 0;
    do {
        s32 current = items[index];
        if (current < best) {
            best = current;
            selected = index;
        }
        index++;
    } while (index < 4);
    if (selected != -1 && items[selected] < value) items[selected] = value;
}
