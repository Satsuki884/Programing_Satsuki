#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 3

int main(){
    printf("Лабораторна робота №12.\nТема: Взаємодія з користувачем шляхом механізму вводу/виведення.\nРоботу виконала студентка групи КІТ-120а Клименко Станіслава Олександрівна");
    int **arr =(float**)malloc(sizeof(int*)*N);
    for(int i=0;i<N;i++){
        *(arr+i) = (int *)malloc(sizeof(int) *N);
    }
    puts("Your value: ");
    printf("%d\n", N);
    char str[] = "Write the all elements of the matrix: \n";
    fwrite(&str, strlen(str) + 1, sizeof(char), stdout);
    char buf[20];
    for(int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fgets(buf, N * N, stdin);
            arr[i][j] = strtol(buf, NULL, 10);
            printf("%d", arr[i][j]);
        }
    }
    printf("\n");
    int arr1[N];
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
    printf("\n");
    puts("Write 'd' for entering the elements of main diag");
    char command;
    fread(&command, sizeof(char), 1, stdin);
    if (command == 'd') {
        for(int i = 0; i < N; i++) {
            printf("%d ", *(arr1 + i));
        }
    }
    return 0;
}