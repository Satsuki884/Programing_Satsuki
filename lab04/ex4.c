#include <stdio.h>

void main(){
    float y[23];
    for(int x=-5,i=0;x<=2;x++){
        if(x!=0){
        y[i] = -1/x;
        i++;
        }
        y[i] = x*x;
        i++;
        y[i] = 1;
        i++;
    }
    return 0;
}