//#include "lib7.h"
//
//
//
//void print_array (struct shoes *array, int a){
//    for(int i =0; i<a; i++){
//        if(array[i].ortopedic == 1) printf("Ortopedic: True\n");
//        else printf("Ortopedic: False\n");
//        printf("Model: ");
//        printf("%s\t", array[i].model_name);
//        printf("\nUSD: %d\t\n", array[i].usd);
//        printf("Brand: ");
//        printf("%s\t", array[i].brand_model);
//        printf("\nSize: %d\t\nLenght: %d\t\n", array[i].size_shoes.size, array[i].size_shoes.length);
//        printf("---------------------------\n" );
//    }
//}
//
//void fill_array(struct shoes * a, struct shoes *d){
//    a->ortopedic = d->ortopedic;
//    for(int b = 0; b<30; b++ ){
//        a->model_name[b] = d->model_name[b];
//    }
//    for(int b = 0; b<10; b++ ){
//        a->brand_model[b] = d->brand_model[b];
//    }
//    a->usd = d->usd;
//    a->size_shoes.size = d->size_shoes.size;
//    a->size_shoes.length = d->size_shoes.length;
//
//}
//
//void sort(struct shoes *a, int j){
//    struct shoes temp;
//    for(int i = 0; i < j; i++) {
//        if (a[i].size_shoes.size>a[i+1].size_shoes.size){
//            temp = a[i];
//            a[i] = a[i+1];
//            a[i+1] = temp;
//            i++;
//        }
//    }
//}
//
//void Read_From_File(struct shoes arr[]){
//    FILE* myfile = fopen("/home/maestro/lab19.txt", "r");
//    if (myfile != NULL) {
//        printf("\nFile opened for reading!!!\n");
//        for (int i = 0; i < 4; i++) {
//            fscanf(myfile, "%d", &arr[i].ortopedic);
//            fscanf(myfile, "%s", arr[i].brand_model);
//            fscanf(myfile, "%d", &arr[i].usd);
//            fscanf(myfile, "%s", arr[i].model_name);
//            fscanf(myfile, "%d", &arr[i].size_shoes.size);
//            fscanf(myfile, "%d", &arr[i].size_shoes.length);
//            printf("%d %s %d %s %d %d \n", arr[i].ortopedic, arr[i].model_name, arr[i].usd, arr[i].brand_model, arr[i].size_shoes.size, arr[i].size_shoes.length);
//        }
//    }
//    else {
//        printf("File cannot be reading");
//    }
//}
//
//void Save_In_File(struct shoes *a, int j){
//    FILE *file_out;
//    char file_name2[] = {"lab.txt"};
//    file_out = fopen(file_name2, "w");
//    for (int i = 0; i < j; i++) {
//        fprintf(file_out, "%d %s %d %s %d %d\n", a[i].ortopedic, a[i].brand_model, a[i].usd,
//                a[i].model_name, a[i].size_shoes.size, a[i].size_shoes.length);
//    }
//    fclose(file_out);
//}