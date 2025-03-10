#ifndef __ELEMENTALS__SETTERS__
#define __ELEMENTALS__SETTERS__

#include "elem_t.h"
/**
 * @brief Set the value pointer by the elemental to be an integer
 * 
 * @note The elemental can be set an int value even if the type
 * of its current value is not int.
 * 
 * @warning The pointer to the elemental will be ignored if it is
 * NULL, but not if it is a dangling pointer. Passing a dangling
 * pointer to this function might (surely) lead to unexpected behaviour
 * 
 * @param elem The elemental to set its value
 * @param value The value that the elemental will point to
 */
void set_int(elem_t* elem, int value);

/**
 * @brief Set the value pointer by the elemental to be a float
 * 
 * @note The elemental can be set an float value even if the type
 * of its current value is not float.
 * 
 * @warning The pointer to the elemental will be ignored if it is
 * NULL, but not if it is a dangling pointer. Passing a dangling
 * pointer to this function might (surely) lead to unexpected behaviour
 * 
 * @param elem The elemental to set its value
 * @param value The value that the elemental will point to
 */
void set_float(elem_t* elem, float value);

/**
 * @brief Set the value pointer by the elemental to be a double
 * 
 * @note The elemental can be set an double value even if the type
 * of its current value is not double.
 * 
 * @warning The pointer to the elemental will be ignored if it is
 * NULL, but not if it is a dangling pointer. Passing a dangling
 * pointer to this function might (surely) lead to unexpected behaviour
 * 
 * @param elem The elemental to set its value
 * @param value The value that the elemental will point to
 */
void set_double(elem_t* elem, double value);

/**
 * @brief Set the value pointer by the elemental to be an char
 * 
 * @note The elemental can be set an char value even if the type
 * of its current value is not char.
 * 
 * @warning The pointer to the elemental will be ignored if it is
 * NULL, but not if it is a dangling pointer. Passing a dangling
 * pointer to this function might (surely) lead to unexpected behaviour
 * 
 * @param elem The elemental to set its value
 * @param value The value that the elemental will point to
 */
void set_char(elem_t* elem, char value);

/**
 * @brief Set the value pointer by the elemental to be a string
 * 
 * @note The elemental can be set an string value even if the type
 * of its current value is not string.
 * 
 * @warning The pointer to the elemental will be ignored if it is
 * NULL, but not if it is a dangling pointer. Passing a dangling
 * pointer to this function might (surely) lead to unexpected behaviour
 * 
 * 
 * @param elem The elemental to set its value
 * @param value The value that the elemental will point to
 * 
 * @warning The string passed as value must end with a null character
 * ('\0'). Passing a string that does not end with this character might
 * (surely) lead to unexpected behaviour
 */
void set_string(elem_t* elem, char* value);

#endif // __ELEMENTALS__SETTERS__