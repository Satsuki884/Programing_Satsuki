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


int main (){
	int x = -1;
	float y;
	if(x<=-1){y = x*(-1)-1;}
	else if(x>-1 && x<=1) {y = x+1;}
	else{y = x-1;}
	printf("%f", y);
	return 0;
}





