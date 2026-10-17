#include "common.h"
extern f32 func_00473C78(f32);
f32 func_00473C08(f32 start, f32 end, f32 t) {
    if (t == 0.0f) return start;
    if (t == 1.0f) return end;
    return start + (end - start) * func_00473C78(t);
}
