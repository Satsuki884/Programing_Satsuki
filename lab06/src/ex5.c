#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define SIZE 3

int main(){

    srand(time(NULL));
    int array[SIZE][SIZE];
    for (int d = 0; d < SIZE; d++)
    for (int f = 0; f < SIZE; f++)
        array[d][f] = rand() % 10;
    
   /* float array[SIZE][SIZE] = {{1, 2, 3, 4, 5},
                               {6, 7, 8, 9, 10},
                               {11, 12, 13, 14, 15},
                               {16, 17, 18, 19, 20},
                               {21, 22, 23, 24, 25}};*/

    int temp[SIZE];

    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++ ){
            temp[i] = array[j][0];
            i++;
        }
    }

    for(int k = 0; k < (SIZE-1); k++){
        for(int n = 0; n < (SIZE - 1); n++){
            array[k][n] = array[k][n + 1];
            
        }
    }

    for (int c = 0; c < SIZE; c++){
        for (int l = 0; l < SIZE; l++ ){
            array[c][SIZE - 1] = temp[l];
            c++;
        }
    }

    return 0;
}