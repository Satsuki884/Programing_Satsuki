#include <stdio.h>

int main() {
    const int original_a = 236;
    const int a = original_a;
    float between;

    float a1 = a/100; // a1 = 2

    int a2 = a;
    a2 = a2%10; // a2 = 6

    between = a1/a2;
    between = between*100;
    int ok = (int) between;
    float result = (float) ok;
    result = result/100;
    
    return 0;
}

/*
#include <stdio.h>

int main() {
    const int original_a = 236;
    const int a = original_a;
    float result;

    float a1 = a/100; // a1 = 2

    int a2 = a;
    a2 = a2%10; // a2 = 6

    result = a1/a2;

    printf("%f", result);
    return 0;
}


#include <stdio.h>

int main() {
    const float original_a = 339;
    const float a = original_a;
    float result;
    
    const float a1 = a/100; // a1 = 3
    
    int a2 = a;
    a2 = a2%10; // a2 = 9
    
    result = a1/a2*100;

    printf("%f", result);
    return 0;
}
*/