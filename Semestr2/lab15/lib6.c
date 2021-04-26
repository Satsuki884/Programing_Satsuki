//#include "lib6.h"
//
//int saveInt32Array(const char *filename,  const int32_t *a, size_t size) {
//    FILE *out = fopen(filename, "wb");
//    if (!out) {
//        return 0;
//    }
//    //Записываем весь массив
//    fwrite(a, sizeof(int32_t), size, out);
//    fclose(out);
//
//    FILE *file_out;
//    char file_name2[]= {"lab1555.txt"};
//    file_out = fopen(file_name2, "w");
//    for (int c = 0; c < SIZE; c++) {
//        fprintf(file_out, "%d ", *(a+c));
//    }
//    fclose(file_out);
//    return 1;
//}
//
//int loadInt32Array(const char *filename, int32_t **a, size_t *size) {
//
//    FILE *in = fopen(filename, "rb");
//    if (!in) {
//        return 0;
//    }
//    fseek (in,0,SEEK_SET);
//    //Инициализируем массив
//    (*a) = (int32_t*) malloc(sizeof(int32_t) * (*size));
//    if (!(*a)) {
//        return 0;
//    }
//    //Считываем весь массив
//    fseek (in,32,SEEK_SET);
//
//    fread((*a), sizeof(int32_t), *size, in);
//    fclose(in);
//    return 1;
//}
//int count_element(const int32_t *a){
//    int count =0;
//    for(int i =0; i != '\n'; i++){
//        count++;
//    }
//    return count;
//}
//
//void test_save_in_file(const int32_t *a){
//    int32_t arr[] = {5, 25, 0, 0, 0, 0, 0, 0, 0, 0 };
//    bool result = false;
//    if(SIZE == count_element(a)) {
//        for (int i = 0; i < SIZE; i++) {
//            if (a[i] != arr[i]) printf("\nТест провален %d\n", i);
//            else result = true;
//        }
//        if (result)printf("\nТест пройден успешно.\n");
//    } else printf("\nТест провален\n");
//}
//
//void test_load_from_file(const int32_t *a){
//    int32_t arr[] = {1,1,2,4,3,9,4,16,5,25 };
//    bool result = false;
//    if(SIZE == count_element(a)) {
//        for (int i = 0; i < SIZE; i++) {
//            if (a[i] != arr[i]) printf("\nТест провален %d\n", i);
//            else result = true;
//        }
//        if (result)printf("\nТест пройден успешно.\n");
//    } else printf("\nТест провален\n");
//}