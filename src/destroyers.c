#include "../inc/destroyers.h"

/**
 * @brief Deallocates the memory reserved for the elemental and its value
 * 
 * @warning After calling the `destroy` function, the pointer to the elemental becomes a dangling pointer
 */
void destroy(elem_t* elem) {
    if (elem) {
        free(elem->value);
        free(elem);
    }
}