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
    int j =0;
    struct shoes array[m];
    for(int i = 0; i < 4; i++ ){
        if(arr[i].size_shoes.size >=39){
            fill_array(&array[j], &arr[i]);
            j++;
        }
    }
    sort(array, m);
    print_array(array, m);
    test_sort(array, m);
}
