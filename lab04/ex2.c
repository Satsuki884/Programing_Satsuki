#include <stdio.h>

int main()
{
    const float a = 536.869;
    float a1 = a;
    a1 = (int) a1;
    int a2 = a*1000;
    a2 = (int)a2;
    a2 = a2%1000;
    float result;
    char error;
    if (a2 == 0){
        error = 'E';
    }
    else {
        result = a1/a2;
        result *= 100;
        result = (int)result;
        result = (float)result;
        result /= 100;
    }
    return 0;
}