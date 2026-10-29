#include "common.h"

s32 func_01ED90B8(char *arg0) {
    if(arg0) {
        char *p=*(char**)arg0;
        if(p)return *(s32*)(p+16);
    }
    return 0;
}
