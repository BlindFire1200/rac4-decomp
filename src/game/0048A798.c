#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    u8 f8;
} Record;

// Scans three records; returns 1 unless a record has a non-zero byte at offset 8.
s32 func_0048A798(s32 unused0, Record **array) {
    s32 result = 1;
    s32 i = 2;

    do {
        Record *record = *array;
        i--;
        if (record != 0) {
            if (record->f8 != 0) {
                result = 0;
            }
        }
        array++;
    } while (i >= 0);
    return result;
}
