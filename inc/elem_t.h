#ifndef __ELEMENTALS__ELEM_T__
#define __ELEMENTALS__ELEM_T__

#include <stdlib.h>
#include <string.h>

/**
 * @brief Stores a value of an elemental type
 * 
 * @attention No instance of this struct must be modified manually.
 * Doing so might lead to unexpected behaviour.
 */

typedef struct {
    void* value; ///< Points to a value of one of the supported types
    size_t size; ///< The size of the value in bytes. Relevant for strings
} elem_t;

/**
 * @brief Global constant with the size of the `int` type in C 
 */
extern const size_t INT_SIZE;

/**
 * @brief Global constant with the size of the `float` type in C 
 */
extern const size_t FLOAT_SIZE;

/**
 * @brief Global constant with the size of the `double` type in C 
 */
extern const size_t DOUBLE_SIZE;

/**
 * @brief Global constant with the size of the `char` type in C 
 */
extern const size_t CHAR_SIZE;

#endif // __ELEMENTALS__ELEM_T__