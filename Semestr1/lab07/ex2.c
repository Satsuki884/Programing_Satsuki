#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>


/**
 * @file ex2.c заповнення масивів простими числами, що не повторюються
 * 
 * перевірка псвевдовипадкових чисел на простоту і заповнення ними масивів
*/

/**
 * заповнення масиву перевіриними на простоту псевдовипадковими числами
 * @param SIZE розмір нашого масиву
 * @param a[] наш масив 
 */


void generation_array (int SIZE, int a[]);

/**
головна функція  {задати фунцію, що кожного разу дає нове псевдовипадкове число,
                    оголосити розмір массивів і самі наші масиви,
                    виклик нашої функції для заповнення кожного з масивів}
*/

int main() {
    srand(time(NULL));
    int SIZE = 25000;
    int a[SIZE];
    int b[SIZE];
    int c[SIZE];

    generation_array(rand()%25001, a);
    generation_array(rand()%25001, b);
    generation_array(rand()%25001, c);
    return 0;
}

void generation_array (int SIZE, int a[]){
    int m;
    bool flag = false;
    for (int i = 0; i < SIZE;) {
        m = rand() % 100;
        if (m !=0){
            const double eps=0.01;
            double n=0;
            while(n * n <=m){
                n+=eps;
            };
            for (int j = 2; j < n; j++) {
                if (m % j != 0) {
                    flag = true;
                }
                else{
                    flag = false;
                    j = n;
                    }
            }
            if (flag)
            {
                a[i++] = m;
                flag = false;
            } 
        }
    }
    return ;

}