#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main() {
    srand(time(NULL));
    const int Size = 5;
    int a[Size]; 
    int m;
    bool flag = false;
    for (int i = 0; i < Size;) {
        m = rand() % 100;
        const double eps=0.01;
        double n=0;
        while(n * n <m){
            n+=eps;
        };
        n = n;
        for (int j = 2; j < n; j++) {
            if (m % j != 0) {
                flag = true;
            }
            else{
                flag = false;
                j = n;
            }
        }
        if (flag)
        {
            a[i++] = m;
            flag = false;
        } 
    }
    return 0;
}