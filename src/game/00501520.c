#include "common.h"

typedef void (*func_00501520_handler)(void);

typedef struct {
    u8 field_00[0xC];
    func_00501520_handler f20;
} unk_struct_00501520;

// Call the function pointer stored at offset 0xC of the argument, if it is not null.
void func_00501520(unk_struct_00501520 *arg0) {
    func_00501520_handler handler = arg0->f20;

    if (handler != NULL) {
        handler();
    }
}
