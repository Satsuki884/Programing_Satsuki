#include <math.h>
int main()
{
    int y[7];
    for (int x = -3, i = 0; x <= 3; x++, i++)
    {
        if (x == 0)
            y[i] = 1;
        else if (x >= 1)
            y[i] = x - 1;
        else if (x <= -1)
            y[i] = x + 1;
    }
    return 0;
}