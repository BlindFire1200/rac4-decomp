/* C adapted from OpenRAC/rac4-decomp pull request #43 (SCES_532.85 reconstruction of the same routine) */
#include "common.h"
/* Computes four differences using the leading scalar. */
void func_0049B5E0(float *arg0, float *arg1, float *arg2, float *arg3, float *arg4) {
    *arg1 = arg0[5] - arg0[1] * arg0[0];
    *arg2 = arg0[6] - arg0[2] * arg0[0];
    *arg3 = arg0[7] - arg0[3] * arg0[0];
    *arg4 = arg0[8] - arg0[4] * arg0[0];
}
