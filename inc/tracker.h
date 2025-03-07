#ifndef __ELEMENTALS__TRACKER__
#define __ELEMENTALS__TRACKER__

#include "destroyers.h"

typedef struct {
    elem_t** items;
    size_t size;
    size_t capacity;
} tracker_t;

void tracker_init();
void tracker_finish();

void tracker_expand();

void tracker_push(elem_t* elem);

extern tracker_t* __elem__tracker__;

#endif // __ELEMENTALS__TRACKER__