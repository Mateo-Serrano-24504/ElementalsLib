#ifndef __ELEMENTALS__BUILDERS__
#define __ELEMENTALS__BUILDERS__

#include "tracker.h"

/**
 * @brief Buils a pointer to an elemental with a NULL value and
 * returns it
 * 
 * @warning This function is usde only in the backend and must NOT
 * be called by the user. This would lead to a non-tracked elemental
 * being created.
 * 
 * @return elem_t* Pointer to the elemental created
 */
elem_t* build_empty_elem();

/**
 * @brief Builds an elemental with the provided value and size,
 * adds it to the global tracker, if initialized, and returns a
 * pointer to the elemental
 * 
 * @attention This function is used in the backend to build instances
 * of elementals. Although the user can call it with no side effects,
 * as it pushes the elemental to the tracker, I suggest not calling it,
 * due to its inelegant syntax
 * 
 * @warning No elemental or pointer to elemental must be created,
 * modified or destroyed manually, but using any of the functions
 * provided in this library. Modifying an elemental instance or
 * a pointer to one might lead to unexpected behaviour
 * 
 * @param value The value to build the elemental with
 * @param size The size of the value
 * @return elem_t* Pointer to the elemental built
 */
elem_t* build_elem(void* value, size_t size);

/**
 * @brief Builds a pointer to an elemental with a value of 0 of type int
 * and returns it
 * 
 * @return elem_t* Pointer to the elemental built
 */
elem_t* build_default_int();

/**
 * @brief Builds a pointer to an elemental with a value of 0 of type float
 * and returns it
 * 
 * @return elem_t* Pointer to the elemental built
 */
elem_t* build_default_float();

/**
 * @brief Builds a pointer to an elemental with a value of 0 of type double
 * and returns it
 * 
 * @return elem_t* Pointer to the elemental built
 */
elem_t* build_default_double();

/**
 * @brief Builds a pointer to an elemental with a value of '\0' and returns it
 * 
 * @return elem_t* Pointer to the elemental built
 */
elem_t* build_default_char();

/**
 * @brief Builds a pointer to an elemental with a value of "\0" and returns it
 * 
 * @return elem_t* Pointer to the elemental built
 */
elem_t* build_default_string();


/**
 * @brief Builds a pointer to an elemental with the given value and
 * returns it
 * 
 * @note This function is designed to provide a friendly syntax, as
 * it can be passed a literal
 * 
 * @param value The integer to build the elemental with
 * @return elem_t* Pointer to the elemental built
 */
elem_t* build_int(int value);

/**
 * @brief Builds a pointer to an elemental with the given value and
 * returns it
 * 
 * @note This function is designed to provide a friendly syntax, as
 * it can be passed a literal
 * 
 * @param value The float to build the elemental with
 * @return elem_t* Pointer to the elemental built
 */
elem_t* build_float(float value);

/**
 * @brief Builds a pointer to an elemental with the given value and
 * returns it
 * 
 * @note This function is designed to provide a friendly syntax, as
 * it can be passed a literal
 * 
 * @param value The double to build the elemental with
 * @return elem_t* Pointer to the elemental built
 */
elem_t* build_double(double value);

/**
 * @brief Builds a pointer to an elemental with the given value and
 * returns it
 * 
 * @note This function is designed to provide a friendly syntax, as
 * it can be passed a literal
 * 
 * @param value The character to build the elemental with
 * @return elem_t* Pointer to the elemental built
 */
elem_t* build_char(char value);

/**
 * @brief Builds a pointer to an elemental with the given value and
 * returns it
 * 
 * @note This function is designed to provide a friendly syntax, as
 * it can be passed a literal. However, if you are to pass a string
 * created with dynamic memory, take into account that it will be
 * copied and, hence, independant to the value pointed by the elemental
 * 
 * @warning If you pass a string built with dynamic memory, make
 * sure you end it with a '\0' character. If you do not, passing such
 * string to this function might lead to unexpected behaviour
 * 
 * @param value The string to build the elemental with
 * @return elem_t* Pointer to the elemental built
 */
elem_t* build_string(char* value);

#endif // __ELEMENTALS__BUILDERS__