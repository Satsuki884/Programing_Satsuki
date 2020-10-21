#include <stdio.h>

int main() {
    const int original_a = 2356;
    const int a = original_a;
    const int p = 6;
    int result;

    const int a1 = a/1000; // a1 = 2

    int a2 = a/100; // a2 = 23
    a2 = a2%10; // a2 = 3 
  
    int a3 = a/10; // a3 = 235
    a3 = a3%10; // a3 = 5 

    int a4 = a;
    a4 = a4%10; // a4 = 6

    result = a4 + a3*p + a2*p*p + a1*p*p*p;

    printf("%d", result);
    return 0;
}

/*
#include <stdio.h>

int main() {
    const int original_a = 2356;
    const int a = original_a;
    const int p = 6;
    int result;

    const int a1 = a/1000; // a1 = 2

    int a2 = a/100; // a2 = 23
    a2 = a2%10; // a2 = 3 
    printf("%d %% %d = ", a2,10,a2);

    int a3 = a/10; // a3 = 235
    a3 = a3%10; // a3 = 5 
    printf("%d %% %d = ", a3,10,a3);

    int a4 = a;
    a4 = a4%10; // a4 = 6
    printf("%d %% %d = ", a4,10,a4);

    result = a4 + a3*p + a2*p*p + a1*p*p*p;

    printf("%d", result);
    return 0;
}

*/