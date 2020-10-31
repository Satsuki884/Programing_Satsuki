#include <math.h>
int main()
{
    int r = 3;                                     
    float PI = 3.14, v, s, l;                    
    char I = 's', error;                        
    if(I == 's')
        s = PI * r * r;
    if(I == 'v')
        v = (3 * PI * r*r*r )/ 4;
    if(I == 'l')
         {
             l = 2 * PI * r;
         }
    error = 'e';   
    return 0;                         
}


/*#include <math.h>
int main()
{
    int r = 3;                                    
    float PI = 3.14, v, s, l;                 
    char I = 'j', error;                    
    I == 's' ? s = PI * r * r :             
    I == 'v' ? v = (3 * PI * r*r*r )/ 4 :   
    I == 'l' ? l = 2 * PI * r :                
    error == 'e';                     
}*/