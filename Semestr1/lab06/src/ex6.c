#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    srand(time(NULL));
    const int SIZE =3;
    int matrix [SIZE] [SIZE] ;
    int matrix_res [SIZE] [SIZE];
    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
        matrix[i][j] = rand() % 10;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            matrix_res[i][j] = 0;
                for (int k = 0; k < SIZE; k++)
            matrix_res[i][j] += matrix[i][k] * matrix[k][j];
        }
    }
    return 0;
 }
