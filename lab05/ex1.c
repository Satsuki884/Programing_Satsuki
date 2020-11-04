#include <stdio.h>
#include <math.h>

int main (){
    int a = 420;
    int b =126;
    int gcd;
    int i=0;
    if (a > b)
            i = b;
    else 
        i=a;
    for(;i>=1;--i){
        if(a%i == 0)
            gcd =i;
        if (b%gcd ==0)
            i = 1;
    }
}