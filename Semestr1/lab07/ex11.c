#include <stdio.h>
#include<math.h>

/**
 * @file ex1.c виконання перевірки числа на досконалість
*/

/**
 * перевірка числа на простоту за допогою флагів
 * @param N наше задане число
 */

char perfect_numbers (int N);

/**
головна функція  {задати фунцію, що кожного разу дає нове псевдовипадкове число,
                 оголосити число,
                 виконати перевірку на досконалість}
*/

int main (){
    srand(time(NULL));
    int N[10];
    char ans[10];
    for (int i = 0; i < 10; i++){
        N[i] = rand()%10;
        ans[i] = perfect_numbers(N[i]);
    }
}

char perfect_numbers (int N){
    int sum = 0;
    for (int i = 1;i<=N/2;++i){
        if(N%i == 0){
            sum +=i;
        }
    }
    if(N == sum){
        return 'Y';
    }
    else {
        return 'N';
    }
}