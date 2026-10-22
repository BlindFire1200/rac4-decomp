#include "common.h"

/* Scans the NUL-terminated byte string arg0 for the first byte equal to arg1
   (both compared as sign-extended bytes) and returns a pointer to that byte,
   or NULL if no byte matches. */
s8 *func_00122110(s8 *arg0, s8 arg1) {
    s8 *var_a0;
    s8 *var_a2;
    s8 var_t;
    u8 var_v1;

    var_a0 = arg0;
    var_a2 = NULL;
    var_v1 = (u8) *var_a0;
    if (*var_a0 != 0) {
        do {
            var_a2 = (((s8) var_v1) == arg1) ? var_a0 : var_a2;
            var_a0 += 1;
            var_t = *var_a0;
            var_v1 = (u8) *var_a0;
        } while (var_t != 0);
    }
    return ((*var_a0 == arg1) ? var_a0 : var_a2);
}
