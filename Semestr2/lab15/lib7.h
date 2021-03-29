#ifndef LAB15_LIB6_H
#define LAB15_LIB6_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct size{
    int size;
    int length;
};

struct shoes{
    bool ortopedic;
    char model_name[30];
    int usd;
    char brand_model[10];
    struct size size_shoes;
};

void print_array (struct shoes *array, int a);

void fill_array(struct shoes * a, struct shoes *d);

void testing_fill_array_a(struct shoes *array);

void testing_fill_array_b(struct shoes *array);

#endif //LAB15_LIB6_H
