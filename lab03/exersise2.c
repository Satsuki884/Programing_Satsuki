#include <stdio.h>

int main() {
    const int a = 345;
    int result;

    int a1 = a/100; // b = 3

    int a2 = a/10; // c = 34
    a2 = a2%10; // c = 4 

    int a3 = a%10; // d = 5

    result = a3*100 + a2*10 + a1;

    printf("%d", result);
    return 0;
}


/*
#include <stdio.h>

int main() {
    const int original_a = 345;
    const int a = original_a;
    
    const int b = a/100; // b = 3

    a = original_a;

    const int c = a/10; // c = 34
    c = c%10; // c = 4 

    a = original_a;

    const int d = a%10; // d = 5

    s = d*100 + c*10 + b;

    printf("%f", s);
    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    const int original_a = 345;
    const int a = original_a;
    float result;
    const int a1 = a/100; // b = 3

//    a = original_a;

    int a2 = a/10; // c = 34
    a2 = a2%10; // c = 4 
    printf("%d %% %d = %d/n", a2,10,a2);

  //  a = original_a;

    int a3 = a;
    a3 = a3%10; // d = 5
    printf("%d %% %d = %d/n", a3,10,a3);

    //a = original_a;

    result = a3*100 + a2*10 + a1;

    printf("%f", result);
    return 0;
}
*/