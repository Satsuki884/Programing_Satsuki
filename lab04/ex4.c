#include <stdio.h>
 
void main(){
    float y[8];
    int x = -5;
    for(int i=0;x<=2;){
    if(x=-5 && x<=-1){
        y[i] = -1/x;
        i++;
        x++;}
    else if(x>=-1 && x<=1){
        y[i] = x*x;
        x++;
        i++;}
    else if(x>1)
        y[i] = 1;
}
    return 0;
}
/*#include <stdio.h>

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

int main(){
    float x = 2;
    float y;
    if ( x <= -1){
        y = -1/x;
    }
    else if ( x > -1 && x <= 1){
        y = x * x;
    }
    else if ( x > 1 && x <= 2){
        y = 1.0;
    }
    return 0;
}

*/