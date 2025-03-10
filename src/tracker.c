#include "../inc/tracker.h"

tracker_t* __elem__tracker__;

/**
 * @brief Initializes the global tracker
 * 
 * @note The default capacity of the tracker is set to eight. This
 * is intended to reduce the number of expansions needed in small
 * programs, and preserve the quality of the capacity to be a
 * power of 2
 */
void tracker_init() {
    __elem__tracker__ = (tracker_t*) malloc(sizeof(tracker_t));
    __elem__tracker__->size = 0;
    __elem__tracker__->capacity = 8;
    __elem__tracker__->items = (elem_t**) malloc(__elem__tracker__->capacity * sizeof(elem_t*));
}

void tracker_finish() {
    size_t size = __elem__tracker__->size;
    elem_t** items = __elem__tracker__->items;
    for (size_t i = 0; i < size; i++) {
        destroy(items[i]);
    }
    free(__elem__tracker__->items);
    free(__elem__tracker__);
}

void tracker_expand() {
    __elem__tracker__->capacity *= 2;
    __elem__tracker__->items = (elem_t**) realloc(__elem__tracker__->items, __elem__tracker__->capacity * sizeof(elem_t));
}

void tracker_push(elem_t* elem) {
    if (__elem__tracker__->size == __elem__tracker__->capacity) {
        tracker_expand();
    }

    __elem__tracker__->items[__elem__tracker__->size] = elem;
    __elem__tracker__->size++;
}