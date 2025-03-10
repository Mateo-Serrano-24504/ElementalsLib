#ifndef __ELEMENTALS__DESTROYERS__
#define __ELEMENTALS__DESTROYERS__

#include "elem_t.h"

/**
 * @brief Deallocates the reserved memory for the elemental and its value
 * 
 * @param elem Pointer to the elemental to deallocate
 */
void destroy(elem_t* elem);

#endif // __ELEMENTALS__DESTROYERS__