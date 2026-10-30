/* Not matching yet: BYTES 5/68 (tools/try_func.py func_00507958 --diff). Not part of the build. */
extern s32 D_00220B54;
// Return arg0 when its method at +0x14 of its +8 table accepts D_00220B54, else NULL.
void *func_00507958(void *arg0) {
    u8 *object = arg0;
    u8 *table;
    s32 (*method)(void *, s32);

    if (object == NULL) {
        return NULL;
    }
    table = *(u8 **)(object + 8);
    method = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(arg0, D_00220B54) != 0) {
        return arg0;
    }
    return NULL;
}
