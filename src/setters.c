#include "../inc/setters.h"

void set_int(elem_t* elem, int value) {
    if (elem) {
        free(elem->value);
        elem->value = malloc(INT_SIZE);
        *((int*) elem->value) = value;
        elem->size = INT_SIZE;
    }
}

void set_float(elem_t* elem, float value) {
    if (elem) {
        free(elem->value);
        elem->value = malloc(FLOAT_SIZE);
        *((float*) elem->value) = value;
        elem->size = FLOAT_SIZE;
    }
}

void set_double(elem_t* elem, double value) {
    if (elem) {
        free(elem->value);
        elem->value = malloc(DOUBLE_SIZE);
        *((double*) elem->value) = value;
        elem->size = DOUBLE_SIZE;
    }
}

void set_char(elem_t* elem, char value) {
    if (elem) {
        free(elem->value);
        elem->value = malloc(CHAR_SIZE);
        *((char*) elem->value) = value;
        elem->size = CHAR_SIZE;
    }
}

void set_string(elem_t* elem, char* value) {
    if (elem) {
        free(elem->value);
        size_t size = strlen(value) + 1;
        elem->value = malloc(size);
        memcpy(elem->value, value, size);
        elem->size = size;
    }
}
