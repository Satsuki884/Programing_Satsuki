#include "lib7.h"

int main(){
    struct shoes arr[4] = {
            {false, "Tanjun", 2690, "Nike", 31, 25  },
            {true, "Wearajjday", 2730, "Nike", 47, 26  },
            {false, "Response Trail X", 2590, "Adidas", 26, 22 },
            {false, "Ignite Flash Evoknit", 2990, "Puma", 40, 24},
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
    printf("Введіть 'a' для знаходження чоботів разміром більше 39 та сортування іх, та 'b' для знаходженния ортопедичних чоботів бренду Nike та Puma:\n");
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
            sort(array, m);
            print_array(array, m);
            test_sort(array,m);
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
