#include "lib7.h"



void print_array (struct shoes *array, int a){
    for(int i =0; i<a; i++){
        if(array[i].ortopedic == 1) printf("Ortopedic: True\n");
        else printf("Ortopedic: False\n");
        printf("Model: ");
        printf("%s\t", array[i].model_name);
        printf("\nUSD: %d\t\n", array[i].usd);
        printf("Brand: ");
        printf("%s\t", array[i].brand_model);
        printf("\nSize: %d\t\nLenght: %d\t\n", array[i].size_shoes.size, array[i].size_shoes.length);
        printf("---------------------------\n" );
    }
}

void fill_array(struct shoes * a, struct shoes *d){
    a->ortopedic = d->ortopedic;
    for(int b = 0; b<30; b++ ){
        a->model_name[b] = d->model_name[b];
    }
    for(int b = 0; b<10; b++ ){
        a->brand_model[b] = d->brand_model[b];
    }
    a->usd = d->usd;
    a->size_shoes.size = d->size_shoes.size;
    a->size_shoes.length = d->size_shoes.length;

}

