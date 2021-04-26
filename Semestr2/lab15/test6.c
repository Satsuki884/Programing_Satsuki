//#include "lib6.h"
//
//struct array{
//    int order;
//    int number;
//};
//struct array create(char name){
//    struct array myFreq;
//    myFreq.order = 0;
//    myFreq.number = 0;
//    return myFreq;
//}
//
//int main() {
//    const char *tmpFilename = "tmp.bin";
//    struct array arr[SIZE/2];
//    FILE *file_in;
//    char file_name2[]= {"lab1555.txt"};
//    file_in = fopen(file_name2, "r");
//    char buf[SIZE*2+2];
//
//    char *end=buf;
//    fgets(buf, SIZE*2+2, file_in);
//
//
//    for (int c = 0; c < SIZE/2; c++) {
//        arr[c].order = strtol(end, &end, 10);
//        arr[c].number = strtol(end, &end, 10);
//    }
//    fclose(file_in);
//    for(int i =0; i<5; i++){
//        printf("%d %d\n", arr[i].order, arr[i].number);
//    }
//    int32_t exOut[SIZE];
//    for(int i =0; i<SIZE; i++){
//        for(int j=0;j<SIZE/2; j++) {
//                exOut[i] = arr[j].order;
//                i++;
//                exOut[i++] = arr[j].number;
//        }
//    }
//    int32_t *exIn = NULL;
//    size_t realSize = 10;
//    int i;
//
//    saveInt32Array(tmpFilename, exOut, SIZE);
//    for (i = 0; i < realSize; i++) {
//        printf("%d ", exOut[i]);
//    }
//    printf("\n");
//    test_load_from_file(exOut);
//    loadInt32Array(tmpFilename, &exIn, &realSize);
//    for (i = 0; i < realSize; i++) {
//        printf("%d ", exIn[i]);
//    }
//    test_save_in_file(exIn);
//
//}