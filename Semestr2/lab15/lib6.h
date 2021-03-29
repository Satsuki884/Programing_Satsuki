
#ifndef LAB15_LIB6_H
#define LAB15_LIB6_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define SIZE 10


int saveInt32Array(const char *filename,  const int32_t *a, size_t size);

int loadInt32Array(const char *filename, int32_t **a, size_t *size);

#endif //LAB15_LIB6_H
