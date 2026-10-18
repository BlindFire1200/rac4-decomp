/* Not matching yet: BYTES 2/68 (tools/try_func.py func_L01_00470810 --diff). Not part of the build. */
#include "common.h"
typedef s32 v4i __attribute__((vector_size(16)));
void func_L00_005DE048(s32, s32, v4i *);
void func_L01_00471320(s32, v4i);
void func_L01_00470858(s32, v4i);
void func_L01_00470810(s32 a0) {
    v4i value;
    func_L00_005DE048(a0, 1, &value);
    func_L01_00471320(a0, value);
    func_L01_00470858(a0, value);
}
