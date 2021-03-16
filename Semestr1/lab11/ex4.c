#include <stdlib.h>
#define N 3
int main(){
    int **arr =(int**)malloc(sizeof(int*)*N);
    for(int i=0;i<N;i++){
        *(arr+i) = (int *)malloc(sizeof(int) *N);
    }
    for (int i = 0; i < N; i++){
        for(int j=0;j<N;j++){
            *(*(arr+i)+j)=rand()%10;
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

    return 0;
}
    




