#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define N 10
int main() {
    srand(time(NULL));
    int* arr = (int*)malloc(sizeof(int) * N);
    for (int j = 0; j < N; j++) {
        *(arr + j) = rand() % 10;
    }
    bool flag = true;
    int* new_arr = (int*)malloc(sizeof(int));
    int count_pair = 0;
    int check_numb = 0;
    int count_check_numb;
    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < count_pair * 2; k+=2)
        {
            flag = true;
            if (*(new_arr + k) == *(arr + i))
            {
                flag = false;
                k = count_pair*2;
            }  
        }
        if (flag)
        {
            count_pair++;
            check_numb = *(arr + i);
            count_check_numb = 1;
            for (int j = i + 1; j < N; j++)
            {
                if (check_numb == *(arr + j))
                {
                    count_check_numb++;
                }

            }
            int* temp = (int*)malloc(sizeof(int) * count_pair * 2);
            for (int l = 0; l < count_pair * 2; l++)
            {
                *(temp + l) = *(new_arr + l);
            }
            new_arr = temp;
            if (count_pair == 1)
            {
                *(new_arr + count_pair - 1) = check_numb;
                *(new_arr + count_pair) = count_check_numb;
            }
            else
            {
                *(new_arr + count_pair*2 - 2) = check_numb;
                *(new_arr + count_pair*2-1) = count_check_numb;
            }
        }
    } 
    return 0;
}