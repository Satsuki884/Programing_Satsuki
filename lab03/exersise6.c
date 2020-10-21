#include <stdio.h>

int main() {
    
    printf("Привет, введи 2 числа, где второе число больше первого и нажми Enter\n"); 
    // числа должны идти в прямом порядке и второе должно быть больше первого
    
    float a1;
    float a2;
    scanf("%f%f", &a1, &a2);
    
    float result;
    
    result = (a1+a2)*(a2-a1+1)/2;
    
    printf("%.f+...+%.f = %.1f", a1, a2, result);
   
    return 0;
}
/*
#include <stdio.h>

int main() {
    
    printf("Привет, введи 2 числа и нажми Enter\n");
    
    int a1;
    int a2;
     float result;
    
    scanf("%d%d", &a1, &a2);
    
  // float result;
    
    result = (a1-a2)*(a2-a1)/2;
    
    printf("%.2f", result);
   
    return 0;
}
*/