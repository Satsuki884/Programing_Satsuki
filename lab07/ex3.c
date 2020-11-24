#include <stdarg.h>

/**
 * @file ex3.c реалізація функції, що визначає, скільки серед заданої послідовності чисел таких пар, у котрих перше числе меньше наступного
 * 
*/

/**
 * реалізація варіативної функції, що повертає значення кількості пар, що визначає функція, після обробки масиву
 * @param N значення, що відповідає за кількість значень викликаної функції
 */

int function(int N, ...);

/**
головна функція  { Оголошення змінної та виклик варіативної функції }
 
*/

int main(){
    int result = function(12, 17, 0, -34, 8, 5, 10, -9, 99, 10, 13);
    return 0;
}

int function(int N, ...){
    
    int a = 0;
    int result = 0;
    va_list factor;
    va_start (factor, N);
    for (int i = 1; i < N; i++){
        va_arg(factor, int);
        if(va_arg(factor, int) > a){
            result++;
        }
        a = va_arg(factor, int);

    }
    va_end(factor);
    return (result);
}