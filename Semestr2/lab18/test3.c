//#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//#include <stdlib.h>
//
//
//struct size{
//    int size;
//    int length;
//};
//
//struct shoes{
//    bool ortopedic;
//    char model_name[30];
//    int usd;
//    char brand_model[7];
//    struct size size_shoes;
//};
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
//    memset(a->brand_model, 0, 7);
//    int A = (int)strlen(d->brand_model);
//    memcpy((a->brand_model), d->brand_model, A*sizeof(char));
//    memset(a->model_name, 0, 30);
//    int B = (int)strlen(d->model_name);
//    memcpy((a->model_name), d->model_name, B*sizeof(char));
//
//    a->ortopedic = d->ortopedic;
//    a->usd = d->usd;
//    a->size_shoes.size = d->size_shoes.size;
//    a->size_shoes.length = d->size_shoes.length;
//
//}
//void memset_funk(struct shoes * a, int index){
//    memset(a+index, 0, sizeof(a[index]));
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
//void test_sort(struct shoes *a, int j){
//
//    int max =0;
//    bool error = false;
//    for(int i = 0; i < j; i++){
//        if(max>a[i].size_shoes.size) error = true;
//        max = a[i].size_shoes.size;
//    }
//    if (!error) printf("Тест пройден успешно\n");
//    else printf("Тест провален.\n");
//}
//int main(){
//    struct shoes arr[4] = {
//            {true, "Tanjun", 2690, "Nike", 31, 18  },
//            {true, "Wearajjday", 2730, "Nike", 40, 26  },
//            {false, "Response Trail X", 2590, "Adidas", 36, 22 },
//            {true, "Ignite Flash Evoknit", 2990, "Puma", 47, 34},
//    };
//    int j=0;
//    struct shoes arra[2];
//    struct shoes ar[5];
//    struct shoes a = {true, "Gav", 3000, "Puma", 41, 28};
//
//    for(j = 0; j < 4; j++ ){
//        fill_array(&ar[j], &arr[j]);
//    }
//    fill_array(&ar[j], &a);
//    printf("\n");
//    print_array(ar, 5);
//    printf("\n");
//    for(int i = 0; i < 5; i++ ){
//        if(ar[i].size_shoes.size <=39){
//            memset_funk(ar, i);
//        }
//    }
//    j=0;
//    for(int i = 0; i < 5; i++ ){
//        if(ar[i].usd > 0){
//            fill_array(&arra[j], &ar[i]);
//            j++;
//        }
//    }
//    print_array(arra, j);
//    printf("\n");
//    sort(arra, j);
//    print_array(arra, j);
//    test_sort(arra, j);
//}
