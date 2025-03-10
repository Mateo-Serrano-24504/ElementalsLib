#ifndef __ELEMENTALS__GETTERS__
#define __ELEMENTALS__GETTERS__

#include "elem_t.h"

/**
 * @brief Gets the value of an elemental treating it as an integer
 * 
 * @warning You must be sure that the value pointer by the
 * elemental can be casted to the int type
 * 
 * @param elem Pointer to the elemental to get its value 
 * @return int The value pointer by the elemental
 */
int get_int(elem_t* elem);

/**
 * @brief Gets the value of an elemental treating it as a float
 * 
 * @warning You must be sure that the value pointer by the
 * elemental can be casted to the float type
 * 
 * @param elem Pointer to the elemental to get its value 
 * @return float The value pointer by the elemental
 */
float get_float(elem_t* elem);

/**
 * @brief Gets the value of an elemental treating it as a double
 * 
 * @warning You must be sure that the value pointer by the
 * elemental can be casted to the double type
 * 
 * @param elem Pointer to the elemental to get its value 
 * @return double The value pointer by the elemental
 */
double get_double(elem_t* elem);

/**
 * @brief Gets the value of an elemental treating it as a character
 * 
 * @warning You must be sure that the value pointer by the
 * elemental can be casted to the char type
 * 
 * @param elem Pointer to the elemental to get its value 
 * @return char The value pointer by the elemental
 */
char get_char(elem_t* elem);

/**
 * @brief Gets the value of an elemental treating it as a string
 * 
 * @warning You must be sure that the value pointer by the
 * elemental can be casted to the char* type
 * 
 * @param elem Pointer to the elemental to get its value 
 * @return char* The value pointer by the elemental
 */
char* get_string(elem_t* elem);


#endif // __ELEMENTALS__GETTERS__