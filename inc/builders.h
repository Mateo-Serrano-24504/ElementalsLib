#ifndef __ELEMENTALS__BUILDERS__
#define __ELEMENTALS__BUILDERS__

#include "tracker.h"

elem_t* build_empty_elem();
elem_t* build_elem(void* value, size_t size);

elem_t* build_default_int();
elem_t* build_default_float();
elem_t* build_default_double();
elem_t* build_default_char();
elem_t* build_default_string();

elem_t* build_int(int value);
elem_t* build_float(float value);
elem_t* build_double(double value);
elem_t* build_char(char value);
elem_t* build_string(char* value);

#endif // __ELEMENTALS__BUILDERS__