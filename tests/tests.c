#include "../inc/elementals.h"

#include <stdio.h>
#include <stdbool.h>

bool test_build() {
    elem_t* _int = build_int(10);
    elem_t* _float = build_float(0.1f);
    elem_t* _double = build_double(-11.2);
    elem_t* _char = build_char('D');
    elem_t* _string = build_string("Weird folks!");

    int int_val = get_int(_int);
    float float_val = get_float(_float);
    double double_val = get_double(_double);
    char char_val = get_char(_char);
    char* string_val = get_string(_string);

    printf("Int: %d\n", int_val);
    printf("Float: %f\n", float_val);
    printf("Double: %lf\n", double_val);
    printf("Char: %c\n", char_val);
    printf("String: %s\n", string_val);

    bool valid_int = int_val == 10;
    bool valid_float = float_val == 0.1f;
    bool valid_double = double_val == -11.2;
    bool valid_char = char_val == 'D';
    bool valid_string = strcmp(string_val, "Weird folks!") == 0;

    return valid_int && valid_float && valid_double && valid_char && valid_string;
}

bool test_set() {
    elem_t* _int = build_int(10);
    elem_t* _float = build_float(0.1f);
    elem_t* _double = build_double(-11.2);
    elem_t* _char = build_char('D');
    elem_t* _string = build_string("Weird folks!");

    int int_val = get_int(_int);
    float float_val = get_float(_float);
    double double_val = get_double(_double);
    char char_val = get_char(_char);
    char* string_val = get_string(_string);

    printf("Int: %d\n", int_val);
    printf("Float: %f\n", float_val);
    printf("Double: %lf\n", double_val);
    printf("Char: %c\n", char_val);
    printf("String: %s\n", string_val);

    set_int(_int, -20);
    set_float(_float, 30.2f);
    set_double(_double, 3.12);
    set_char(_char, 'X');
    set_string(_string, "Strange dudes?");

    int_val = get_int(_int);
    float_val = get_float(_float);
    double_val = get_double(_double);
    char_val = get_char(_char);
    string_val = get_string(_string);

    printf("New Int: %d\n", int_val);
    printf("New Float: %f\n", float_val);
    printf("New Double: %lf\n", double_val);
    printf("New Char: %c\n", char_val);
    printf("New String: %s\n", string_val);

    bool valid_int = int_val == -20;
    bool valid_float = float_val == 30.2f;
    bool valid_double = double_val == 3.12;
    bool valid_char = char_val == 'X';
    bool valid_string = strcmp(string_val, "Strange dudes?") == 0;

    return valid_int && valid_float && valid_double && valid_char && valid_string;
}

int main() {

    tracker_init();

    printf("------------ Build test ------------\n");
    bool result = test_build();
    if (!result) {
        tracker_finish();
        return 1;
    }

    printf("\n\n------------ Set test ------------\n");
    result = test_set();
    if (!result) {
        tracker_finish();
        return 1;
    }

    tracker_finish();

    return 0;
}