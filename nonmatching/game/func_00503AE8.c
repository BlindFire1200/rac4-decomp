/* Not matching yet: BYTES 3/112 (tools/try_func.py func_00503AE8 --diff). Not part of the build. */
extern s32 func_0015DB80(s32, s32);
extern void *func_005010E0(void *);
extern void *func_005011A8(void *, s32);
extern s32 func_00503B88(s32);
extern u8 D_222038[];
s32 func_00503AE8(void) {
    u8 *object = D_222038;
    u8 *entry;
    u8 *table;
    s32 (*method)(void *, s32);
    s32 value;
    if (*(s32 *)(object + 4) == 0) object = func_005010E0(object);
    entry = func_005011A8(object, 2);
    table = *(u8 **)entry;
    method = *(s32 (**)(void *, s32))(table + 8);
    value = method(entry, 0xC0);
    if (value != 0) return func_00503B88(func_0015DB80(0xC0, value));
    return 0;
}
