#include "lib7.h"

void testing_fill_array_а(struct shoes *array){
    struct shoes arr[] = {
            {true, "Wearajjday", 2730, "Nike", 47, 26  }
    };
    if (array->ortopedic != arr->ortopedic){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n",array->ortopedic, arr->ortopedic);
    } else if (strcmp(array->model_name, arr->model_name) != 0){
        printf("Тест провален. Ожидаемое значение %s. не равно %s.\n", array->model_name, arr->model_name);
    } else if (strcmp(array->brand_model, arr->brand_model) != 0){
        printf("Тест провален. Ожидаемое значение %s не равно %s\n", array->brand_model, arr->brand_model);
    } else if (array->usd != arr->usd){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", array->usd, arr->usd);
    } else if (array->size_shoes.size != arr->size_shoes.size){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n ", array->size_shoes.size, arr->size_shoes.size);
    } else if (array->size_shoes.length != arr->size_shoes.length){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n", array->size_shoes.length, arr->size_shoes.length);
    } else{
        printf("Тест пройден успешно\n");
    }
}

void test_sort(struct shoes *a, int j){

    int max =0;
    bool error = false;
    for(int i = 0; i < j; i++){
        if(max>a[i].size_shoes.size) error = true;
        max = a[i].size_shoes.size;
    }
    if (!error) printf("Тест пройден успешно\n");
    else printf("Тест провален.\n");
}
