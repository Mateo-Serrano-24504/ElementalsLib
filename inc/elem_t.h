#ifndef __ELEMENTALS__ELEM_T__
#define __ELEMENTALS__ELEM_T__

#include <stdlib.h>
#include <string.h>

typedef struct {
    void* value;
    size_t size;
} elem_t;

extern const size_t INT_SIZE;
extern const size_t FLOAT_SIZE;
extern const size_t DOUBLE_SIZE;
extern const size_t CHAR_SIZE;

#endif // __ELEMENTALS__ELEM_T__