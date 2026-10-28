#include "common.h"

char *func_00122248(char *str) {
    s32 len;
    s32 i;
    s32 j;
    char t;

    for (len = 0; str[len]; len++) {
    }
    len--;
    for (i = 0; i < len; i++, len--) {
        t = str[i];
        str[i] = str[len];
        str[len] = t;
    }
    return str;
}
