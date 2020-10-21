#include <stdio.h>

int main() {
    const int R1 = 5; // const float R1 =5;
    const float R2 = 7.3f;
    const float R3 = 8.1f;
    float RESULT;
    RESULT = (R2*R3+R1*R3+R1*R2)/(R1*R2*R3);
    printf("%f", RESULT);
    return 0;
}
