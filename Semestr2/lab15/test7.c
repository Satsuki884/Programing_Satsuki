#include "lib7.h"

void testing_fill_array_a(struct shoes *array){
    struct shoes arr[] = {
            {false, "Tanjun", 2690, "Nike", 40, 25  }
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
void testing_fill_array_b(struct shoes *array){
    struct shoes arr[] = {
            {true, "Wearajjday", 2730, "Nike", 31, 26  }
    };
    if (array->ortopedic != arr->ortopedic){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n",array->ortopedic, arr->ortopedic);
    } else if (strcmp(array->model_name, arr->model_name) != 0){
        printf("Тест провален. Ожидаемое значение %s. не равно %s.\n", array->model_name, arr->model_name);
    } else if (strcmp(array->brand_model, arr->brand_model) != 0){
        printf("Тест провален. Ожидаемое значение %s не равно %s\n", array->brand_model, arr->brand_model);
    } else if (array->usd != arr->usd){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n", array->usd, arr->usd);
    } else if (array->size_shoes.size != arr->size_shoes.size){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n", array->size_shoes.size, arr->size_shoes.size);
    } else if (array->size_shoes.length != arr->size_shoes.length){
        printf("Тест провален. Ожидаемое значение %d не равно %d\n", array->size_shoes.length, arr->size_shoes.length);
    } else{
        printf("Тест пройден успешно\n");
    }

}

int main(){
    struct shoes arr[4] = {
            {false, "Tanjun", 2690, "Nike", 40, 25  },
            {true, "Wearajjday", 2730, "Nike", 31, 26  },
            {false, "Response Trail X", 2590, "Adidas", 36, 22 },
            {false, "Ignite Flash Evoknit", 2990, "Puma", 37, 24},
    };

    int m=0;
    for(int i = 0; i< 4; i++){
        if(arr[i].size_shoes.size >=39){
            m++;
        }
    }
    int n = 0;
    for(int i = 0; i< 4; i++){
        if(((strcmp(arr[i].brand_model, "Nike"))==0 || (strcmp(arr[i].brand_model, "Puma"))==0) && arr[i].ortopedic){
            n++;
        }
    }
    char a;
    int j =0;
    struct shoes array[m];
    struct shoes arra[n];
    printf("Введіть 'a' для знаходження чоботів разміром більше 39, та 'b' для знаходженния ортопедичних чоботів бренду Nike та Puma:\n");
    scanf("%c", &a);
    switch(a){
        case 'a':
            printf("%c\n", a);
            for(int i = 0; i < 4; i++ ){
                if(arr[i].size_shoes.size >=39){
                    fill_array(&array[j], &arr[i]);
                    j++;
                }
            }
            testing_fill_array_a(array);
            print_array(array, m);

            break;
        case 'b' :
            printf("%c\n", a);
            for(int i = 0; i < 4; i++ ){
                if(((strcmp(arr[i].brand_model, "Nike"))==0 || (strcmp(arr[i].brand_model, "Puma"))==0) && arr[i].ortopedic){
                    fill_array(&arra[j], &arr[i]);
                    j++;
                }
            }
            testing_fill_array_b(arra);
            print_array(arra, n);
            break;
        default:
            printf( "Неправильный ввод.\n" );
    }
}