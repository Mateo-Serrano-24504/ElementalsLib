#include "../inc/getters.h"

int get_int(elem_t* elem) {
    return *((int*) elem->value);
}

float get_float(elem_t* elem) {
    return *((float*) elem->value);
}

double get_double(elem_t* elem) {
    return *((double*) elem->value);
}

char get_char(elem_t* elem) {
    return *((char*) elem->value);
}

char* get_string(elem_t* elem) {
    return (char*) elem->value;
}
