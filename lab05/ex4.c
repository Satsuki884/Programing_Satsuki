#include <stdio.h>
#include<math.h>

int main (){
    int N = 28; 
    int sum = 0;
    for (int i = 1;i<=N/2;++i){
        if(N%i == 0){
            sum +=i;
        }
    }
    char ans;
    if(N == sum){
        ans = 'Y';
    }
    else {
        ans ='N';
    }
}