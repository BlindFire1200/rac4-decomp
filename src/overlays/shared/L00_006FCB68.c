#include "common.h"

extern s32 func_0011A518(void *, s32, s32);
extern void func_001633C0();
extern s32 func_L00_005E60A0(s32);
extern void *D_0021DFE8;

/* Picks a random valid entry from arg1, preferring the least-used ones */
s32 func_L00_006FCB68(void *arg0, s32 *arg1, s32 arg2) {
    s32 list[64];
    s32 counts[64];
    s32 n;
    s32 i;
    s32 idx;
    s32 tries;
    s32 level;
    s32 result;
    s32 attempt;
    s32 start;

    n = 0;
    func_0011A518(list, -1, 0x100);
    func_0011A518(counts, 0, 0x100);
    for (i = 0; i < arg2; i++) {
        if (arg1[i] != -1) {
            list[n] = arg1[i];
            n++;
        }
    }
    level = 0;
    func_001633C0(*(s32 *)((u8 *)D_0021DFE8 + 0x1BC));
    for (tries = 0; tries < 10; tries++) {
        result = -1;
        attempt = 0;
        for (;;) {
            do {
                idx = func_L00_005E60A0(n);
                if (counts[idx] <= level) {
                    goto found;
                }
            } while (++attempt < 8);
        check:
            start = idx;
            if (result == -1) {
                for (idx = start + 1; idx < n; idx++) {
                    if (counts[idx] <= level) {
                        result = list[idx];
                        counts[idx]++;
                        break;
                    }
                }
            }
            if (result == -1) {
                for (idx = 0; idx < start; idx++) {
                    if (counts[idx] <= level) {
                        result = list[idx];
                        counts[idx]++;
                        break;
                    }
                }
            }
            if (result != -1) {
                goto done;
            }
            level++;
            attempt = 0;
            if (level >= 4) {
                break;
            }
            continue;
        found:
            result = list[idx];
            counts[idx]++;
            goto check;
        }

        idx = func_L00_005E60A0(n);
        result = list[idx];
        counts[idx]++;
    done:
        if (tries == *(s32 *)((u8 *)arg0 + 0x2F10)) {
            break;
        }
    }
    return result;
}
