#include "../inc/destroyers.h"

void destroy(elem_t* elem) {
    if (elem) {
        free(elem->value);
        free(elem);
    }
}