#include "common.h"

extern u8 func_0015C770(void);
extern u8 D_2124F0[];
void *D_0021DFE8 = 0;

// Clears D_0021DFE8 unless func_0015C770 returns nonzero and D_0021DFE8 already points at D_2124F0.
void func_0015F098(void) {
    if (func_0015C770() == 0 || D_0021DFE8 != D_2124F0) {
        D_0021DFE8 = 0;
    }
}
