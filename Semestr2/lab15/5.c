/*#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE 10

void itoa();

/*
 * Функция saveInt32Array позволяет сохранить массив типа int32_t в файл.
 * Обратная ей loadInt32Array считывает массив обратно.
 * Функция loadInt32Array сначала инициализирует переданный ей массив, поэтому мы должны передавать указатель на указатель;
 * кроме того, она записывает считанный размер массива в переданный параметр size, из-за чего он передаётся как указатель.
 */
/*int saveInt32Array(const char *filename,  const int32_t *a, size_t size) {
    FILE *out = fopen(filename, "wb");
    if (!out) {
        return 0;
    }
    //Записываем длину массива
    fwrite(&size, sizeof(size_t), 1, out);
    //Записываем весь массив
    fwrite(a, sizeof(int32_t), size, out);
    fclose(out);
    return 1;
}

int loadInt32Array(const char *filename, int32_t **a, size_t *size) {

    FILE *in = fopen(filename, "rb");
    if (!in) {
        return 0;
    }
    //Считываем длину массива
    fread(size, sizeof(size_t), 1, in);
    //Инициализируем массив
    (*a) = (int32_t*) malloc(sizeof(int32_t) * (*size));
    if (!(*a)) {
        return 0;
    }
    //Считываем весь массив
    fread((*a), sizeof(int32_t), *size, in);
    fclose(in);
    return 1;
}


void main() {
    const char *tmpFilename = "tmp.bin";
    int32_t exOut[SIZE];
    int32_t *exIn = NULL;
    size_t realSize;
    int i;

    for (i = 0; i < SIZE; i++) {
        exOut[i] = i+1;
    }

    saveInt32Array(tmpFilename, exOut, SIZE);
    loadInt32Array(tmpFilename, &exIn, &realSize);

    for (i = 0; i < realSize; i++) {
        printf("%d ", exIn[i]);
    }
    printf("\n");
    for (i = 0; i < realSize; i++) {
        printf("%d ", exOut[i]);
    }

}
*/