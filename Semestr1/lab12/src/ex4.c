#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <stdio.h>
#define N 3
int main(){
   //FILE *rrr;
    srand(time(NULL));
    int **arr =(int**)malloc(sizeof(int*)*N);
    for(int i=0;i<N;i++){
        *(arr+i) = (int *)malloc(sizeof(int) *N);
    }
    for (int i = 0; i < N; i++){
        for(int j=0;j<N;j++){
            scanf("%d", &arr[i][j]);
            //*(*(arr+i)+j)=rand()%10;
        }
    }
    for (int i = 0; i < N; i++){
        for(int j=0;j<N;j++){
            printf("%d \n", *(*(arr+i)+j));
        }
    }
    int *arr1 = (int*)malloc(sizeof(int)*N);
    for(int i=0; i<N; i++){
        for(int j=0;j<N; j++){
            if(i == j){
                *(arr1+i)=*(*(arr+i)+j);
            }
        }
    }
    for (int i = 0; i < N; i++){
        for(int j=0;j<N;j++){
            if (*(arr1+j) > *(arr1+i)){
                int temp = *(arr1+j);
                *(arr1+j) = *(arr1+i);
                *(arr1+i) = temp;
            }
        }
    }
    printf("------------ \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", *(arr1+i));
    }
    return 0;
}