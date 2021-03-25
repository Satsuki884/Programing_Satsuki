/*#include <stdio.h>
#include <stdbool.h>
#include <string.h>


struct size{
    int size;
    int length;
};

struct shoes{
    bool ortopedic;
    char model_name[30];
    int usd;
    char brand_model[10];
    struct size size_shoes;
};

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

int main(){
    struct shoes arr[4] = {
            {true, "Tanjun", 2690, "Nike", 31, 25  },
            {true, "Wearajjday", 2730, "Nike", 40, 26  },
            {false, "Response Trail X", 2590, "Adidas", 36, 22 },
            {true, "Ignite Flash Evoknit", 2990, "Puma", 47, 24},
    };

    int m=0;
    for(int i = 0; i< 4; i++){
        if(arr[i].size_shoes.size >=39){
            m++;
        }
    }
    int n = 0;
    for(int i = 0; i< 4; i++){
        if((strcmp(arr[i].brand_model, "Nike"))==0 || (strcmp(arr[i].brand_model, "Puma"))==0 && arr[i].ortopedic){
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
            print_array(array, m);
            break;
        case 'b' :
            for(int i = 0; i < 4; i++ ){
                if(((strcmp(arr[i].brand_model, "Nike"))==0 || (strcmp(arr[i].brand_model, "Puma"))==0) && arr[i].ortopedic){
                    fill_array(&arra[j], &arr[i]);
                    j++;
                }
            }
            print_array(arra, n);
            break;
        default:
            printf( "Неправильный ввод.\n" );
    }
}
*/