#ifndef ACTOR_TABLE_H
#define ACTOR_TABLE_H

#include "common.h"

/*
 * D_0022CA80 is a table of 0x470-byte entries. Each entry holds a pointer to
 * an object at +0x50; the object has a "busy" halfword at +0x86 (the setters
 * below only act while it is zero) and a pointer to a parameter block at +0x70.
 */
extern u8 D_0022CA80[];

#define ACTOR_ENTRY_SIZE 0x470
#define ACTOR_ENTRY(index) (D_0022CA80 + (index) * ACTOR_ENTRY_SIZE)
#define ENTRY_OBJECT(entry) (*(u8 **)((entry) + 0x50))
#define OBJECT_BUSY(object) (*(s16 *)((object) + 0x86))
#define OBJECT_PARAMS(object) (*(u8 **)((object) + 0x70))

#endif
