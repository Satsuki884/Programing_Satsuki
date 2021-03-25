#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define SIZE 10

struct array{
    int order;
    int number;
};
struct array create(char name){
    struct array myFreq;
    myFreq.order = 0;
    myFreq.number = 0;
    return myFreq;
}

int saveInt32Array(const char *filename,  const int32_t *a, size_t size) {
    FILE *out = fopen(filename, "wb");
    if (!out) {
        return 0;
    }
    //Записываем весь массив
    fwrite(a, sizeof(int32_t), size, out);
    fclose(out);

    FILE *file_out;
    char file_name2[]= {"lab1555.txt"};
    file_out = fopen(file_name2, "w");
    for (int c = 0; c < SIZE; c++) {
        fprintf(file_out, "%d ", *(a+c));
    }
    fclose(file_out);
    return 1;
}

int loadInt32Array(const char *filename, int32_t **a, size_t *size) {

    FILE *in = fopen(filename, "rb");
    if (!in) {
        return 0;
    }
    fseek (in,0,SEEK_SET);
    //Инициализируем массив
    (*a) = (int32_t*) malloc(sizeof(int32_t) * (*size));
    if (!(*a)) {
        return 0;
    }
    //Считываем весь массив
    fseek (in,32,SEEK_SET);

    fread((*a), sizeof(int32_t), *size, in);
    fclose(in);
    return 1;
}


int main() {
    const char *tmpFilename = "tmp.bin";
    struct array arr[SIZE/2];
    FILE *file_in;
    char file_name2[]= {"lab1555.txt"};
    file_in = fopen(file_name2, "r");
    char buf[SIZE*2+2];

    char *end=buf;
    fgets(buf, SIZE*2+2, file_in);


    for (int c = 0; c < SIZE/2; c++) {
        arr[c].order = strtol(end, &end, 10);
        arr[c].number = strtol(end, &end, 10);
    }
    fclose(file_in);
    for(int i =0; i<5; i++){
        printf("%d %d\n", arr[i].order, arr[i].number);
    }
    int32_t exOut[SIZE];
    for(int i =0; i<SIZE; i++){
        for(int j=0;j<SIZE/2; j++) {
                exOut[i] = arr[j].order;
                i++;
                exOut[i++] = arr[j].number;
        }
    }
    int32_t *exIn = NULL;
    size_t realSize = 10;
    int i;

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
