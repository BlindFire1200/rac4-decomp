/* cflags: -O2 -G0 */
#include "common.h"
typedef struct { u8 bytes[12]; } __attribute__((packed)) Table;
typedef struct { u8 pad[5]; u8 day, month, year; } Date;
extern Table D_001A46A8;
/* Decrement the date using the month lengths. */
void func_00155908(Date *p) {
    Table t = D_001A46A8;
    p->day--;
    if ((p->year & 3) == 0) t.bytes[1] = 29;
    if (p->day == 0) {
        p->month--;
        if (p->month == 0) {
            if (p->year == 0) p->year = 99;
            else p->year--;
            p->month = 12;
        }
        p->day = t.bytes[p->month - 1];
    }
}
