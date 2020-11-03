int main(){
    int k = 5;
    int m = -1;
    int n = 3;
    int x = 0;
        if (k>=m){
            x = k;
            k = m;
            m = x;
        }
        else if (k>=n){
            x = k;
            k = n;
            n = x;
        }
        if (m>=n){
            x = m;
            m = n;
            n = x;
        }
//printf("%d %d %d", k, m, n);
return 0;
}

/*#include <math.h>

int main()
{
    const int N = 3;
    int m = 3;
    int n = -4;
    int k = 1;
    int array[] = { m,n,k };
    for (int i = 0; i < N; i++)
    {
        for(int j=0;j<N;j++)
            if (array[j] > array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
    }
    return 0;
}
*/