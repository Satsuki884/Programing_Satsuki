#include <stdio.h>
 
int main(){
    float y[9];
    float x = -5;
    for(int i=0 ; i<9;x++, i++){
        if(x<=-1)
            y[i] = -1/x;
        else if(x>-1 && x<=1)
            y[i] = x*x;
        else
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
    else {
        y = 1.0;
    }
    return 0;
}

*/