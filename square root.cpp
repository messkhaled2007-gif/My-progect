#include <stdio.h>
#include <math.h> 
#define N 11
int main ()
{int i ; float x , racx;
printf ("calculating of %d square roots \n",N);
for (i=0 ; i<N ; i++) 
{ printf ("give a number :");
scanf ("%f",&x);
if (x<0.0)
printf ("%f doesn't have square root \n",x);
else 
{
racx=sqrt(x) ;
printf ("%f : has the square root =%f\n", x, racx);
}
}
return 0;}