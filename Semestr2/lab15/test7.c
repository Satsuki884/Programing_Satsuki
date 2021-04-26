#include "lib7.h"

int count_element(struct shoes *array){
    int count =0;
    for(int i =0; i != '\n'; i++){
        count++;
    }
    return count;
}


void test_sort(struct shoes *a, int j, int b){

    int max =0;
    bool error = false;
    bool result = false;
    if(j == b){
    for(int i = 0; i < j; i++){
        if(max>a[i].size_shoes.size) error = true;
        max = a[i].size_shoes.size;
    }
    if (!error) printf("Тест пройден успешно\n");
    else printf("Тест провален1.\n");
    } else printf("Тест провален2.\n");
}
