#define _CRT_SECURE_NO_WARNINGS //для работы strcpy
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <iostream>
using namespace::std;
#define N 10 

int main() {
    setlocale(LC_ALL, "Rus");
 
    srand(time(NULL));
    const int SIZE = 42;
    char str[42] = "вот такой прикольный текс я написала да да";

    bool flag = true;
    char* new_arr = (char*)malloc(sizeof(char));
    int count_pair = 0;
    char check_numb = 0;
    int count_check_numb;
    for (int i = 0; i < SIZE; i++)
    {
        for (int k = 0; k < count_pair * 2; k += 2)
        {
            flag = true;
            if (*(new_arr + k) == *(str + i))
            {
                flag = false;
                k = count_pair * 2;
            }


        }
        if (flag)
        {
            count_pair++;
            check_numb = *(str + i);
            count_check_numb = 1;
            for (int j = i + 1; j <SIZE; j++)
            {
                if (check_numb == *(str + j))
                {
                    count_check_numb++;
                }

            }
            char* temp = (char*)malloc(sizeof(char) * count_pair * 2);
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
                *(new_arr + count_pair * 2 - 2) = check_numb;
                *(new_arr + count_pair * 2 - 1) = count_check_numb;
            }


        }

    }

    for (int i = 0; i < count_pair*2-2; i += 2)
        cout << "Символ " << *(new_arr + i) << " частота " << (int)*(new_arr + i + 1) << endl;


    return 0;
}