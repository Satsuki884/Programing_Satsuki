#include <math.h>

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