int main (){
   const double eps=0.01;
   double sqrt=0;
   double n = 900;
   while(sqrt*sqrt <n){
      sqrt+=eps;
   };
   sqrt=sqrt;
 /*  if ((int)sqrt%1 ==0 )
   sqrt = (int)((sqrt*100 + 0.5)/100.0);
   else
   sqrt = (float) sqrt;*/
   return 0;
}
