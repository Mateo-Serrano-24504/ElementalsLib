#include "../inc/builders.h"

elem_t* build_empty_elem() {
    elem_t* elem = (elem_t*) malloc(sizeof(elem_t));
    elem->value = NULL;
    elem->size = 0;
    return elem;
}

elem_t* build_elem(void* value, size_t size) {
    elem_t* elem = build_empty_elem();
    elem->value = value;
    elem->size = size;
    tracker_push(elem);
    return elem;
}

elem_t* build_default_int() {
    return build_int(0);
}

elem_t* build_default_float() {
    return build_float(0.0f);
}

elem_t* build_default_double() {
    return build_double(0.0);
}

elem_t* build_default_char() {
    return build_char('\0');
}

elem_t* build_default_string() {
    return build_string("\0");
}

elem_t* build_int(int value) {
    int* new_int = (int*) malloc(INT_SIZE);
    *new_int = value;
    return build_elem(new_int, INT_SIZE);
}

elem_t* build_float(float value) {
    float* new_float = (float*) malloc(FLOAT_SIZE);
    *new_float = value;
    return build_elem(new_float, FLOAT_SIZE);
}

elem_t* build_double(double value) {
    double* new_double = (double*) malloc(DOUBLE_SIZE);
    *new_double = value;
    return build_elem(new_double, DOUBLE_SIZE);
}

elem_t* build_char(char value) {
    char* new_char = (char*) malloc(CHAR_SIZE);
    *new_char = value;
    return build_elem(new_char, INT_SIZE);
}

elem_t* build_string(char* value) {
    size_t size = strlen(value) + 1;
    char* new_string = (char*) malloc(size);
    memcpy(new_string, value, size);
    return build_elem(new_string, size);
}
