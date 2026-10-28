#include "common.h"

char *func_00122160(char *searchee, char *lookfor) {
    s32 i;

    if (*searchee == 0) {
        if (*lookfor) {
            return 0;
        }
        return searchee;
    }
    while (*searchee) {
        i = 0;
        while (1) {
            if (lookfor[i] == 0) {
                return searchee;
            }
            if (lookfor[i] != searchee[i]) {
                break;
            }
            i++;
        }
        searchee++;
    }
    return 0;
}
